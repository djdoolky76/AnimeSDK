#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENFDMFGIJDC;
namespace System { class Object; }

#define ENFDMFGIJDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2ED780)
#define ENFDMFGIJDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2ED7C0)
#define ENFDMFGIJDC___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E2ED7D0)

	class ENFDMFGIJDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENFDMFGIJDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFDMFGIJDC___C_CTOR_OFFSET))(this);
		}

		::ENFDMFGIJDC* __cctor_b__63_0()
		{
			return ((::ENFDMFGIJDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFDMFGIJDC___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
