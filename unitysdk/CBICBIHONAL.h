#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAMGHMADMAF.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"

class HNPJNICKLOJ;
class OONBHFCCFPN;
namespace MoleMole::DisplayCase { class DisplayItemData; }
namespace System { class String; }

#define CBICBIHONAL_BOEFAEDEKAI_OFFSET UNITYSDK_OFFSET(0x10E2FDD0)
#define CBICBIHONAL_CJAMLDAGNKC_OFFSET UNITYSDK_OFFSET(0x10E2FF50)
#define CBICBIHONAL_DALBDFCIEIM_OFFSET UNITYSDK_OFFSET(0x10E2FC70)
#define CBICBIHONAL_PDPIABMDCAE_1_OFFSET UNITYSDK_OFFSET(0x10E2FBC0)
#define CBICBIHONAL_PDPIABMDCAE_OFFSET UNITYSDK_OFFSET(0x10E2FB30)

inline static constexpr unsigned int CBICBIHONAL_TypeDefinitionIndex = 66990;

class CBICBIHONAL : public ::System::Object
{
public:
	static ::System::String* PDPIABMDCAE(::FAMGHMADMAF OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::FAMGHMADMAF))((::PBYTE)hIl2Cpp + CBICBIHONAL_PDPIABMDCAE_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::String* PDPIABMDCAE_1(::MoleMole::DisplayCase::EDisplayItemSubType OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::MoleMole::DisplayCase::EDisplayItemSubType))((::PBYTE)hIl2Cpp + CBICBIHONAL_PDPIABMDCAE_1_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Void DALBDFCIEIM(::HNPJNICKLOJ* IPMMCGDMODG, ::MoleMole::DisplayCase::DisplayItemData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::HNPJNICKLOJ*, ::MoleMole::DisplayCase::DisplayItemData*))((::PBYTE)hIl2Cpp + CBICBIHONAL_DALBDFCIEIM_OFFSET))(IPMMCGDMODG, LJBPECKCCEA);
	}

	static ::OONBHFCCFPN* BOEFAEDEKAI(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::OONBHFCCFPN*(*)(::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + CBICBIHONAL_BOEFAEDEKAI_OFFSET))(IPMMCGDMODG);
	}

	static ::HNPJNICKLOJ* CJAMLDAGNKC(::System::Int32 MGMDLMBEDJF, ::MoleMole::DisplayCase::DisplayBaseTransformData LJBPECKCCEA)
	{
		return ((::HNPJNICKLOJ*(*)(::System::Int32, ::MoleMole::DisplayCase::DisplayBaseTransformData))((::PBYTE)hIl2Cpp + CBICBIHONAL_CJAMLDAGNKC_OFFSET))(MGMDLMBEDJF, LJBPECKCCEA);
	}
};
