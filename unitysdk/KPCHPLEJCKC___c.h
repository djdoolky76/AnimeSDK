#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCHPLEJCKC;
namespace System { class Object; }

#define KPCHPLEJCKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88BB30)
#define KPCHPLEJCKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88BB70)
#define KPCHPLEJCKC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E88BB80)

inline static constexpr unsigned int KPCHPLEJCKC___c_TypeDefinitionIndex = 30619;

	class KPCHPLEJCKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x220A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCHPLEJCKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHPLEJCKC___C_CTOR_OFFSET))(this);
		}

		::KPCHPLEJCKC* __cctor_b__38_0()
		{
			return ((::KPCHPLEJCKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHPLEJCKC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
