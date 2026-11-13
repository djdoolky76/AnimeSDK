#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJJBALMBMFD;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System { class String; }

#define JEEOODCIFBM_DLGFMPNEHGO_OFFSET UNITYSDK_OFFSET(0x13064610)
#define JEEOODCIFBM_ECIAEOJIOKI_OFFSET UNITYSDK_OFFSET(0x13063DB0)
#define JEEOODCIFBM_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x130643B0)

inline static constexpr unsigned int JEEOODCIFBM_TypeDefinitionIndex = 76735;

	class JEEOODCIFBM : public ::System::Object
	{
	public:
		static ::System::String* ECIAEOJIOKI(::RPG::Client::NavMap::ITrackPointInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + JEEOODCIFBM_ECIAEOJIOKI_OFFSET))(a1);
		}

		static ::System::Boolean KKKIONIDKFA(::RPG::Client::NavMap::ITrackPointInfo* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + JEEOODCIFBM_KKKIONIDKFA_OFFSET))(a1);
		}

		static ::System::Boolean DLGFMPNEHGO(::BJJBALMBMFD* a1)
		{
			return ((::System::Boolean(*)(::BJJBALMBMFD*))((::PBYTE)hIl2Cpp + JEEOODCIFBM_DLGFMPNEHGO_OFFSET))(a1);
		}

	};
