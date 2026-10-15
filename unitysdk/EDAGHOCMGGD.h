#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOJGFBONKL;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define EDAGHOCMGGD_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x1330F3F0)
#define EDAGHOCMGGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1330F4E0)

inline static constexpr unsigned int EDAGHOCMGGD_TypeDefinitionIndex = 64156;

	class EDAGHOCMGGD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGHOCMGGD_CTOR_OFFSET))(this);
		}

		::HPOJGFBONKL* BEJAJNEFHIB(::RPG::GameCore::TextDynamicParamBase* a1)
		{
			return ((::HPOJGFBONKL*(*)(::PVOID, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + EDAGHOCMGGD_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
