#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCIIHNAFNAB;
namespace System { class Object; }

#define HCIIHNAFNAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E540F30)
#define HCIIHNAFNAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E540F70)
#define HCIIHNAFNAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E540F80)

	class HCIIHNAFNAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCIIHNAFNAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB___C_CTOR_OFFSET))(this);
		}

		::HCIIHNAFNAB* __cctor_b__23_0()
		{
			return ((::HCIIHNAFNAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIIHNAFNAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
