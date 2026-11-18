#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LODHICFDGFO.h"
#include "unitysdk/NMIOIJEMKDM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define LGLAGDAJDAG_ABFNLJAFIBB_OFFSET UNITYSDK_OFFSET(0x126DB230)
#define LGLAGDAJDAG_IMGDNHFLHMH_OFFSET UNITYSDK_OFFSET(0x126DB1E0)

inline static constexpr unsigned int LGLAGDAJDAG_TypeDefinitionIndex = 66595;

class LGLAGDAJDAG : public ::System::Object
{
public:
	static ::NMIOIJEMKDM IMGDNHFLHMH(::LODHICFDGFO BKPODJDNEHN, ::NMIOIJEMKDM HNKBFDPDEJP)
	{
		return ((::NMIOIJEMKDM(*)(::LODHICFDGFO, ::NMIOIJEMKDM))((::PBYTE)hIl2Cpp + LGLAGDAJDAG_IMGDNHFLHMH_OFFSET))(BKPODJDNEHN, HNKBFDPDEJP);
	}

	static ::MoleMole::EntityHandle ABFNLJAFIBB(::System::String* IDOPOGOMOBE, ::UnityEngine::Vector3 DGENLLDACGD, ::MoleMole::EntityHandle HODAIDNDKHD, ::System::String* AELLPLBJELA, ::MoleMole::Config::ConfigPosRot* JMKFFMEAIEP, ::System::String* JMBNHKNMAND, ::LODHICFDGFO BKPODJDNEHN)
	{
		return ((::MoleMole::EntityHandle(*)(::System::String*, ::UnityEngine::Vector3, ::MoleMole::EntityHandle, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::LODHICFDGFO))((::PBYTE)hIl2Cpp + LGLAGDAJDAG_ABFNLJAFIBB_OFFSET))(IDOPOGOMOBE, DGENLLDACGD, HODAIDNDKHD, AELLPLBJELA, JMKFFMEAIEP, JMBNHKNMAND, BKPODJDNEHN);
	}
};
