#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CELCIDNLPPO;
namespace System { class Object; }

#define CELCIDNLPPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06BB30)
#define CELCIDNLPPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06BB60)
#define CELCIDNLPPO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E06BB70)

inline static constexpr unsigned int CELCIDNLPPO___c_TypeDefinitionIndex = 32389;

	class CELCIDNLPPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CELCIDNLPPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCIDNLPPO___C_CTOR_OFFSET))(this);
		}

		::CELCIDNLPPO* __cctor_b__18_0()
		{
			return ((::CELCIDNLPPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELCIDNLPPO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
