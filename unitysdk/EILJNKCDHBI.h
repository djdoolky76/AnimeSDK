#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/OAKNLJAECNP.h"
#include "unitysdk/System/Object.h"

class AJDIJJMIALB;
class GAEIDHINJCL;
namespace System { class String; }

#define EILJNKCDHBI_PGHAJOMNDDJ_1_OFFSET UNITYSDK_OFFSET(0x11A88EF0)
#define EILJNKCDHBI_PGHAJOMNDDJ_2_OFFSET UNITYSDK_OFFSET(0x11A89120)
#define EILJNKCDHBI_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x11A88E80)

inline static constexpr unsigned int EILJNKCDHBI_TypeDefinitionIndex = 38760;

class EILJNKCDHBI : public ::System::Object
{
public:
	static ::System::Void PGHAJOMNDDJ(::AJDIJJMIALB* HHIJHDFHPOI, ::System::Boolean FDNPHCHDJPB)
	{
		return ((::System::Void(*)(::AJDIJJMIALB*, ::System::Boolean))((::PBYTE)hIl2Cpp + EILJNKCDHBI_PGHAJOMNDDJ_OFFSET))(HHIJHDFHPOI, FDNPHCHDJPB);
	}

	static ::System::Void PGHAJOMNDDJ_1(::System::String* GOOPBFLJPEM, ::OAKNLJAECNP DDKDDMKDJGA, ::MoleMole::Config::ScreenEffectType GBNHOODFDFD, ::MoleMole::Config::ShaderCustomType LEJHFCNHEBB, ::System::String* EOLMKNCAMNB, ::System::Boolean FDNPHCHDJPB)
	{
		return ((::System::Void(*)(::System::String*, ::OAKNLJAECNP, ::MoleMole::Config::ScreenEffectType, ::MoleMole::Config::ShaderCustomType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EILJNKCDHBI_PGHAJOMNDDJ_1_OFFSET))(GOOPBFLJPEM, DDKDDMKDJGA, GBNHOODFDFD, LEJHFCNHEBB, EOLMKNCAMNB, FDNPHCHDJPB);
	}

	static ::System::Void PGHAJOMNDDJ_2(::GAEIDHINJCL* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::GAEIDHINJCL*))((::PBYTE)hIl2Cpp + EILJNKCDHBI_PGHAJOMNDDJ_2_OFFSET))(HHIJHDFHPOI);
	}
};
