#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPDDOADGCMG;
namespace System { class Object; }

#define DPDDOADGCMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20BA10)
#define DPDDOADGCMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20BA50)
#define DPDDOADGCMG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E20BA60)

	class DPDDOADGCMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPDDOADGCMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDDOADGCMG___C_CTOR_OFFSET))(this);
		}

		::DPDDOADGCMG* __cctor_b__28_0()
		{
			return ((::DPDDOADGCMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDDOADGCMG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
