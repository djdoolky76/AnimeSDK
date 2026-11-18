#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowCanvasData; }
namespace MoleMole::Config { class ConfigFlowCanvasLevelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBIEOBANNMN_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0xE13C0A0)
#define OBIEOBANNMN_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xE13C150)
#define OBIEOBANNMN_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xE13C520)
#define OBIEOBANNMN_FDPPPHDIACI_OFFSET UNITYSDK_OFFSET(0xE13C780)
#define OBIEOBANNMN_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0xE13C3A0)
#define OBIEOBANNMN_PNMHFPPBGPF_OFFSET UNITYSDK_OFFSET(0xE13C630)
#define OBIEOBANNMN__CCTOR_OFFSET UNITYSDK_OFFSET(0xE13BF80)

inline static constexpr unsigned int OBIEOBANNMN_TypeDefinitionIndex = 85756;

class OBIEOBANNMN : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>** StaticGet_PNLFCEMCAOH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*>**)Il2CppClass::FromTypeDefinitionIndex(OBIEOBANNMN_TypeDefinitionIndex)->GetStaticField(0x3F830);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>** StaticGet_MNHAEDMDHFE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigFlowCanvasData*>**)Il2CppClass::FromTypeDefinitionIndex(OBIEOBANNMN_TypeDefinitionIndex)->GetStaticField(0x3F838);
	}
	static ::System::Boolean* StaticGet_IGEBMMPDKJI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OBIEOBANNMN_TypeDefinitionIndex)->GetStaticField(0xEAE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBIEOBANNMN__CCTOR_OFFSET))();
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBIEOBANNMN_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBIEOBANNMN_HDLGEDBNEIP_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OBIEOBANNMN_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigFlowCanvasData* PNMHFPPBGPF(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigFlowCanvasData*(*)(::System::String*))((::PBYTE)hIl2Cpp + OBIEOBANNMN_PNMHFPPBGPF_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Boolean FDPPPHDIACI(::System::Int32 MCOHLHMKLIP, ::MoleMole::Config::ConfigFlowCanvasLevelData*& AJMCCOEAIFE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::ConfigFlowCanvasLevelData*&))((::PBYTE)hIl2Cpp + OBIEOBANNMN_FDPPPHDIACI_OFFSET))(MCOHLHMKLIP, AJMCCOEAIFE);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OBIEOBANNMN_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
