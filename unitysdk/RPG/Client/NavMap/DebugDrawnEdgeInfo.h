#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/DebugDrawnInfo.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
class GIJPBMMNJKO;
class GLDDJECCBAO;
namespace RPG::Client::NavMap { class DebugDrawnEdgeInfo; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_ABNKIIKKKAC_OFFSET UNITYSDK_OFFSET(0xD93AC30)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xD93A2B0)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD93B0F0)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xD93A390)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_IHKAFGIFFFP_OFFSET UNITYSDK_OFFSET(0xD93A450)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_JICCNCMHKAO_OFFSET UNITYSDK_OFFSET(0xD93A900)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_LDAIPNHKBOB_OFFSET UNITYSDK_OFFSET(0xD93A590)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_LLCNLGGKCHP_OFFSET UNITYSDK_OFFSET(0xD93AF60)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_LPPCNBGIDHP_OFFSET UNITYSDK_OFFSET(0xD93AC80)
#define RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_SETFIXEDCOLOR_OFFSET UNITYSDK_OFFSET(0xD93AEB0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int DebugDrawnEdgeInfo_TypeDefinitionIndex = 74543;

	class DebugDrawnEdgeInfo : public ::RPG::Client::NavMap::DebugDrawnInfo
	{
	public:
		::GLDDJECCBAO* FAMAMHNKCNP; // 0x30
		::GIJPBMMNJKO* CLDPMCOPEPO; // 0x38
		::GIJPBMMNJKO* HDBINKPIEKI; // 0x40
		::UnityEngine::LineRenderer* MPNDOCBAHHN; // 0x48
		::System::Nullable_1<::UnityEngine::Color> DBGOJLFEJKF; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::DebugDrawnEdgeInfo* Create(::GLDDJECCBAO* a1)
		{
			return ((::RPG::Client::NavMap::DebugDrawnEdgeInfo*(*)(::GLDDJECCBAO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_CREATE_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND(::GLDDJECCBAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLDDJECCBAO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_DIOEAJEHHND_OFFSET))(this, a1);
		}

		::System::Void IHKAFGIFFFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_IHKAFGIFFFP_OFFSET))(this);
		}

		::System::Void ABNKIIKKKAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_ABNKIIKKKAC_OFFSET))(this);
		}

		::System::Void JICCNCMHKAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_JICCNCMHKAO_OFFSET))(this);
		}

		::System::Void SetFixedColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_SETFIXEDCOLOR_OFFSET))(this, a1);
		}

		::System::Void LPPCNBGIDHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_LPPCNBGIDHP_OFFSET))(this);
		}

		static ::UnityEngine::Color LLCNLGGKCHP(::GIJPBMMNJKO* a1)
		{
			return ((::UnityEngine::Color(*)(::GIJPBMMNJKO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_LLCNLGGKCHP_OFFSET))(a1);
		}

		::System::Void LDAIPNHKBOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_DEBUGDRAWNEDGEINFO_LDAIPNHKBOB_OFFSET))(this);
		}

	};
}
