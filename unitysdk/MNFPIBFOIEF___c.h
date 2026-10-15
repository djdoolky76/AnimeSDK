#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNFPIBFOIEF;
namespace System { class Object; }

#define MNFPIBFOIEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA979E0)
#define MNFPIBFOIEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA97A20)
#define MNFPIBFOIEF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA97A30)

	class MNFPIBFOIEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNFPIBFOIEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF___C_CTOR_OFFSET))(this);
		}

		::MNFPIBFOIEF* __cctor_b__28_0()
		{
			return ((::MNFPIBFOIEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFPIBFOIEF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
