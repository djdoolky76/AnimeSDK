#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineData; }
namespace MoleMole { class TimelineData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJKLAILLDHG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16C1B230)
#define OJKLAILLDHG_DCGAMGFGDCF_OFFSET UNITYSDK_OFFSET(0x16C1A740)
#define OJKLAILLDHG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16C1B140)
#define OJKLAILLDHG_KCHMBHKELDL_OFFSET UNITYSDK_OFFSET(0x16C1A6F0)
#define OJKLAILLDHG_NHMGNHOPMJH_OFFSET UNITYSDK_OFFSET(0x16C1AEC0)
#define OJKLAILLDHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1A6E0)

inline static constexpr unsigned int OJKLAILLDHG_TypeDefinitionIndex = 59626;

class OJKLAILLDHG : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>** StaticGet_EPPIEDEOCBH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>**)Il2CppClass::FromTypeDefinitionIndex(OJKLAILLDHG_TypeDefinitionIndex)->GetStaticField(0x52420);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJKLAILLDHG__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>* KCHMBHKELDL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TimelineData*>*(*)())((::PBYTE)hIl2Cpp + OJKLAILLDHG_KCHMBHKELDL_OFFSET))();
	}

	static ::System::Void DCGAMGFGDCF(::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineData*>* MAFFABEOJJE)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineData*>*))((::PBYTE)hIl2Cpp + OJKLAILLDHG_DCGAMGFGDCF_OFFSET))(MAFFABEOJJE);
	}

	static ::MoleMole::TimelineData* NHMGNHOPMJH(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::TimelineData*(*)(::System::String*))((::PBYTE)hIl2Cpp + OJKLAILLDHG_NHMGNHOPMJH_OFFSET))(ANGLHCBLFNK);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OJKLAILLDHG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OJKLAILLDHG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
