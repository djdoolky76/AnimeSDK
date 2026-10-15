#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOJGFBONKL;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define GLLCIGOHGIG_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x15ABBC80)
#define GLLCIGOHGIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABBD70)

inline static constexpr unsigned int GLLCIGOHGIG_TypeDefinitionIndex = 82141;

	class GLLCIGOHGIG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLCIGOHGIG_CTOR_OFFSET))(this);
		}

		::HPOJGFBONKL* BEJAJNEFHIB(::RPG::GameCore::TextDynamicParamBase* a1)
		{
			return ((::HPOJGFBONKL*(*)(::PVOID, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + GLLCIGOHGIG_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
