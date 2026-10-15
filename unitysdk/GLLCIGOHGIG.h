#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOJGFBONKL;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define GLLCIGOHGIG_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x15AB00D0)
#define GLLCIGOHGIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB01C0)

inline static constexpr unsigned int GLLCIGOHGIG_TypeDefinitionIndex = 82140;

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
