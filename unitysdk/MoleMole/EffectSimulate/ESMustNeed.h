#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"

namespace System { class String; }

#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B8C8C50)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_HMMEALPCJPH_OFFSET UNITYSDK_OFFSET(0x1B8C8BF0)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_IJABPPNBIJK_OFFSET UNITYSDK_OFFSET(0x1B8C8E70)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_JBFEMLOGBIF_OFFSET UNITYSDK_OFFSET(0x1B8C8CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_KIJHCBGNMJA_OFFSET UNITYSDK_OFFSET(0x1B8C8D40)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_LLLIDJKOBEC_OFFSET UNITYSDK_OFFSET(0x1B8C8DD0)
#define MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C8CF0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMustNeed_TypeDefinitionIndex = 45901;

	class ESMustNeed : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		::System::String* logStr; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED__CTOR_OFFSET))(this);
		}

		::System::Void HMMEALPCJPH(::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_HMMEALPCJPH_OFFSET))(this, PBCAAADNEPK);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Boolean JBFEMLOGBIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_JBFEMLOGBIF_OFFSET))(this);
		}

		::System::Boolean KIJHCBGNMJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_KIJHCBGNMJA_OFFSET))(this);
		}

		::System::Void LLLIDJKOBEC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_LLLIDJKOBEC_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void IJABPPNBIJK(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMUSTNEED_IJABPPNBIJK_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
