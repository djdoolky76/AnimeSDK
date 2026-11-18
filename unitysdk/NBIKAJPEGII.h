#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCityHollowMap; }
namespace MoleMole::Config { class HollowPosConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NBIKAJPEGII_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x105A4EF0)
#define NBIKAJPEGII_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x105A5110)
#define NBIKAJPEGII_FGEMHBLDOON_OFFSET UNITYSDK_OFFSET(0x105A4B70)
#define NBIKAJPEGII_KPMDDBBDAJJ_OFFSET UNITYSDK_OFFSET(0x105A5200)

inline static constexpr unsigned int NBIKAJPEGII_TypeDefinitionIndex = 81590;

class NBIKAJPEGII : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCityHollowMap** StaticGet_INICMOELDOK()
	{
		return (::MoleMole::Config::ConfigCityHollowMap**)Il2CppClass::FromTypeDefinitionIndex(NBIKAJPEGII_TypeDefinitionIndex)->GetStaticField(0x42450);
	}

	static ::MoleMole::Config::HollowPosConfig* FGEMHBLDOON(::System::Int32 LKGAAIGDDBH, ::System::Int32 EMHHFFENFCI)
	{
		return ((::MoleMole::Config::HollowPosConfig*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NBIKAJPEGII_FGEMHBLDOON_OFFSET))(LKGAAIGDDBH, EMHHFFENFCI);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NBIKAJPEGII_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NBIKAJPEGII_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigCityHollowMap* KPMDDBBDAJJ()
	{
		return ((::MoleMole::Config::ConfigCityHollowMap*(*)())((::PBYTE)hIl2Cpp + NBIKAJPEGII_KPMDDBBDAJJ_OFFSET))();
	}
};
