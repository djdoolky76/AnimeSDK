#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOJGFBONKL;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define DMJJMNFKIIL_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xFEC30F0)
#define DMJJMNFKIIL_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC3200)

inline static constexpr unsigned int DMJJMNFKIIL_TypeDefinitionIndex = 64154;

	class DMJJMNFKIIL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJJMNFKIIL_CTOR_OFFSET))(this);
		}

		::HPOJGFBONKL* BEJAJNEFHIB(::RPG::GameCore::TextDynamicParamBase* a1)
		{
			return ((::HPOJGFBONKL*(*)(::PVOID, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + DMJJMNFKIIL_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
