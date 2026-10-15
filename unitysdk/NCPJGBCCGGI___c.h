#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCPJGBCCGGI;
namespace System { class Object; }

#define NCPJGBCCGGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE33A0)
#define NCPJGBCCGGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE33E0)
#define NCPJGBCCGGI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAE33F0)

	class NCPJGBCCGGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPJGBCCGGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI___C_CTOR_OFFSET))(this);
		}

		::NCPJGBCCGGI* __cctor_b__23_0()
		{
			return ((::NCPJGBCCGGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
