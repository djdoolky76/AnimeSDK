#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompatKey.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GLAJJDPBHLL.h"

#define KDHGAGHBHJB_GIJHLAMGKAG_OFFSET UNITYSDK_OFFSET(0x1B5C03B0)
#define KDHGAGHBHJB_HJJABNINJDB_OFFSET UNITYSDK_OFFSET(0x1B5C0290)
#define KDHGAGHBHJB_IEJDJJIAMCB_OFFSET UNITYSDK_OFFSET(0x1B5C02F0)
#define KDHGAGHBHJB_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1B5C0420)
#define KDHGAGHBHJB_LHJBNOCGOPP_OFFSET UNITYSDK_OFFSET(0x1B5C0470)
#define KDHGAGHBHJB_PDFHFPMNFNA_OFFSET UNITYSDK_OFFSET(0x1B5C0100)

inline static constexpr unsigned int KDHGAGHBHJB_TypeDefinitionIndex = 63602;

	class KDHGAGHBHJB : public ::System::Object
	{
	public:
		static ::System::Boolean PDFHFPMNFNA(::RPG::GameCore::StageRegionVisualState a1, ::GLAJJDPBHLL a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StageRegionVisualState, ::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + KDHGAGHBHJB_PDFHFPMNFNA_OFFSET))(a1, a2);
		}

		static ::GLAJJDPBHLL HJJABNINJDB(::RPG::GameCore::StageRegionVisualState a1)
		{
			return ((::GLAJJDPBHLL(*)(::RPG::GameCore::StageRegionVisualState))((::PBYTE)hIl2Cpp + KDHGAGHBHJB_HJJABNINJDB_OFFSET))(a1);
		}

		static ::RPG::GameCore::StageRegionVisualState IEJDJJIAMCB(::GLAJJDPBHLL a1)
		{
			return ((::RPG::GameCore::StageRegionVisualState(*)(::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + KDHGAGHBHJB_IEJDJJIAMCB_OFFSET))(a1);
		}

		static ::RPG::Client::CompatKey GIJHLAMGKAG(::GLAJJDPBHLL a1)
		{
			return ((::RPG::Client::CompatKey(*)(::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + KDHGAGHBHJB_GIJHLAMGKAG_OFFSET))(a1);
		}

		static ::System::Boolean KKKIONIDKFA(::GLAJJDPBHLL a1)
		{
			return ((::System::Boolean(*)(::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + KDHGAGHBHJB_KKKIONIDKFA_OFFSET))(a1);
		}

		static ::GLAJJDPBHLL LHJBNOCGOPP(::GLAJJDPBHLL a1, ::GLAJJDPBHLL a2)
		{
			return ((::GLAJJDPBHLL(*)(::GLAJJDPBHLL, ::GLAJJDPBHLL))((::PBYTE)hIl2Cpp + KDHGAGHBHJB_LHJBNOCGOPP_OFFSET))(a1, a2);
		}

	};
