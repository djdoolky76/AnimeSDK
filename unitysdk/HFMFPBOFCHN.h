#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PerformConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFMFPBOFCHN_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x146F8760)
#define HFMFPBOFCHN_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x146F8920)
#define HFMFPBOFCHN_MDNJKDIOBBP_OFFSET UNITYSDK_OFFSET(0x146F8A10)

inline static constexpr unsigned int HFMFPBOFCHN_TypeDefinitionIndex = 66795;

class HFMFPBOFCHN : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>** StaticGet_BPDEPOPFIGL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformConfig*>**)Il2CppClass::FromTypeDefinitionIndex(HFMFPBOFCHN_TypeDefinitionIndex)->GetStaticField(0x49D20);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HFMFPBOFCHN_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + HFMFPBOFCHN_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::PerformConfig* MDNJKDIOBBP(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::PerformConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HFMFPBOFCHN_MDNJKDIOBBP_OFFSET))(MGMDLMBEDJF);
	}
};
