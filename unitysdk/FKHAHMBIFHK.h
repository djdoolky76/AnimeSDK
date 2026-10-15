#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPOJGFBONKL;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define FKHAHMBIFHK_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x157F3D70)
#define FKHAHMBIFHK_CTOR_OFFSET UNITYSDK_OFFSET(0x157F3E60)

	class FKHAHMBIFHK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHAHMBIFHK_CTOR_OFFSET))(this);
		}

		::HPOJGFBONKL* BEJAJNEFHIB(::RPG::GameCore::TextDynamicParamBase* a1)
		{
			return ((::HPOJGFBONKL*(*)(::PVOID, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + FKHAHMBIFHK_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};
