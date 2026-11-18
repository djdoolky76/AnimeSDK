#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/VideoQuality.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVideoQualitySetting; }
namespace System { class String; }

#define EIGPCGGHMGA_EFNHEMPBEMD_OFFSET UNITYSDK_OFFSET(0x1354C9B0)
#define EIGPCGGHMGA_GHAGMKDDHIB_OFFSET UNITYSDK_OFFSET(0x1354C650)
#define EIGPCGGHMGA_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x1354CB70)
#define EIGPCGGHMGA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1354C640)

inline static constexpr unsigned int EIGPCGGHMGA_TypeDefinitionIndex = 56191;

class EIGPCGGHMGA : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigVideoQualitySetting** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigVideoQualitySetting**)Il2CppClass::FromTypeDefinitionIndex(EIGPCGGHMGA_TypeDefinitionIndex)->GetStaticField(0x50780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIGPCGGHMGA__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::VideoQuality GHAGMKDDHIB(::System::String* LHIJMADONJC, ::MoleMole::Config::VideoQuality JFLDAALEMGB)
	{
		return ((::MoleMole::Config::VideoQuality(*)(::System::String*, ::MoleMole::Config::VideoQuality))((::PBYTE)hIl2Cpp + EIGPCGGHMGA_GHAGMKDDHIB_OFFSET))(LHIJMADONJC, JFLDAALEMGB);
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIGPCGGHMGA_HDLGEDBNEIP_OFFSET))();
	}

	static ::System::Void EFNHEMPBEMD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIGPCGGHMGA_EFNHEMPBEMD_OFFSET))();
	}
};
