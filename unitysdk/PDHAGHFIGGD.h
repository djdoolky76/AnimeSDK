#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PDHAGHFIGGD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x178B7610)
#define PDHAGHFIGGD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x178B7520)
#define PDHAGHFIGGD_OHMIEELKGFG_OFFSET UNITYSDK_OFFSET(0x178B7840)

inline static constexpr unsigned int PDHAGHFIGGD_TypeDefinitionIndex = 89515;

class PDHAGHFIGGD : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIFishV2** StaticGet_ELFPJBCPFCJ()
	{
		return (::MoleMole::ConfigUIFishV2**)Il2CppClass::FromTypeDefinitionIndex(PDHAGHFIGGD_TypeDefinitionIndex)->GetStaticField(0x478B0);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PDHAGHFIGGD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PDHAGHFIGGD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigUIFishV2* OHMIEELKGFG()
	{
		return ((::MoleMole::ConfigUIFishV2*(*)())((::PBYTE)hIl2Cpp + PDHAGHFIGGD_OHMIEELKGFG_OFFSET))();
	}
};
