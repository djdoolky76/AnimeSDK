#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBOJACNHEC;
class ODNBCBEINNC;
namespace RPG::Client { class RogueTournClassicRoomTypeData; }

#define AKJILFAGADN_BNGLDMFFPDF_OFFSET UNITYSDK_OFFSET(0x12CCFF90)
#define AKJILFAGADN_JHLGANONJBP_OFFSET UNITYSDK_OFFSET(0x12CCFFE0)

inline static constexpr unsigned int AKJILFAGADN_TypeDefinitionIndex = 67645;

	class AKJILFAGADN : public ::System::Object
	{
	public:
		static ::System::Boolean BNGLDMFFPDF(::ODNBCBEINNC* a1)
		{
			return ((::System::Boolean(*)(::ODNBCBEINNC*))((::PBYTE)hIl2Cpp + AKJILFAGADN_BNGLDMFFPDF_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournClassicRoomTypeData* JHLGANONJBP(::EBBOJACNHEC* a1)
		{
			return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::EBBOJACNHEC*))((::PBYTE)hIl2Cpp + AKJILFAGADN_JHLGANONJBP_OFFSET))(a1);
		}

	};
