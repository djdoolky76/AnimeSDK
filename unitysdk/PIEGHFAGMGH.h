#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayResultData; }
namespace System { class String; }

#define PIEGHFAGMGH_BJMCAOMINGI_OFFSET UNITYSDK_OFFSET(0xC2566F0)
#define PIEGHFAGMGH_EJIAKJJEDCE_OFFSET UNITYSDK_OFFSET(0xC256790)
#define PIEGHFAGMGH_ELBDEBBHPDM_OFFSET UNITYSDK_OFFSET(0xC2565A0)
#define PIEGHFAGMGH_LKFIIHEDMNO_OFFSET UNITYSDK_OFFSET(0xC256640)
#define PIEGHFAGMGH_MEMIHEGEKPP_OFFSET UNITYSDK_OFFSET(0xC256BA0)
#define PIEGHFAGMGH_NLBMJMACJLC_OFFSET UNITYSDK_OFFSET(0xC2568E0)
#define PIEGHFAGMGH_PJDMGODCIJK_OFFSET UNITYSDK_OFFSET(0xC256AB0)

inline static constexpr unsigned int PIEGHFAGMGH_TypeDefinitionIndex = 73768;

	class PIEGHFAGMGH : public ::System::Object
	{
	public:
		// static const ::System::String* FECPALJEKNG; // 0x0
		// static const ::System::String* NBPNEGKOCDO; // 0x0
		static ::System::String* ELBDEBBHPDM(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PIEGHFAGMGH_ELBDEBBHPDM_OFFSET))(a1);
		}

		static ::System::String* BJMCAOMINGI(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PIEGHFAGMGH_BJMCAOMINGI_OFFSET))(a1);
		}

		static ::System::String* EJIAKJJEDCE(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PIEGHFAGMGH_EJIAKJJEDCE_OFFSET))(a1);
		}

		static ::System::Boolean NLBMJMACJLC(::System::String* a1, ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*))((::PBYTE)hIl2Cpp + PIEGHFAGMGH_NLBMJMACJLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean PJDMGODCIJK(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PIEGHFAGMGH_PJDMGODCIJK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MEMIHEGEKPP(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::OpenWorld::PVSRuntimeReplayResultData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PIEGHFAGMGH_MEMIHEGEKPP_OFFSET))(a1, a2, a3);
		}

		static ::System::String* LKFIIHEDMNO(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PIEGHFAGMGH_LKFIIHEDMNO_OFFSET))(a1);
		}

	};
