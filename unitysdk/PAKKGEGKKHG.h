#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityLayerMaskConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PAKKGEGKKHG_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x19493CF0)
#define PAKKGEGKKHG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19493AE0)
#define PAKKGEGKKHG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x194939F0)
#define PAKKGEGKKHG_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0x19493E60)

inline static constexpr unsigned int PAKKGEGKKHG_TypeDefinitionIndex = 47133;

class PAKKGEGKKHG : public ::System::Object
{
public:
	static ::MoleMole::HollowEntityLayerMaskConfig** StaticGet_EFFAONJBCOG()
	{
		return (::MoleMole::HollowEntityLayerMaskConfig**)Il2CppClass::FromTypeDefinitionIndex(PAKKGEGKKHG_TypeDefinitionIndex)->GetStaticField(0x39D80);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PAKKGEGKKHG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PAKKGEGKKHG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAKKGEGKKHG_CCGLEFMABEA_OFFSET))();
	}

	static ::MoleMole::HollowEntityLayerMaskConfig* GPAGOABIFFP()
	{
		return ((::MoleMole::HollowEntityLayerMaskConfig*(*)())((::PBYTE)hIl2Cpp + PAKKGEGKKHG_GPAGOABIFFP_OFFSET))();
	}
};
