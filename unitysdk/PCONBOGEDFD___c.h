#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCONBOGEDFD;
namespace System { class Object; }

#define PCONBOGEDFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0BB20)
#define PCONBOGEDFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0BB60)
#define PCONBOGEDFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF0BB70)

	class PCONBOGEDFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCONBOGEDFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD___C_CTOR_OFFSET))(this);
		}

		::PCONBOGEDFD* __cctor_b__28_0()
		{
			return ((::PCONBOGEDFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCONBOGEDFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
