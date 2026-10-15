#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MatchThreeBoardEnvTag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MatchThreeBoard; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MATCHTHREEBOARDENV_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xD58DA50)
#define RPG_CLIENT_MATCHTHREEBOARDENV_CTOR_OFFSET UNITYSDK_OFFSET(0xD58DDA0)
#define RPG_CLIENT_MATCHTHREEBOARDENV_DPGHDBPBMHA_OFFSET UNITYSDK_OFFSET(0xD58DB60)
#define RPG_CLIENT_MATCHTHREEBOARDENV_INIT_OFFSET UNITYSDK_OFFSET(0xD57FD90)
#define RPG_CLIENT_MATCHTHREEBOARDENV_NEDKFFOPPPC_OFFSET UNITYSDK_OFFSET(0xD58DBE0)
#define RPG_CLIENT_MATCHTHREEBOARDENV_SETGRIDTAG_OFFSET UNITYSDK_OFFSET(0xD5886A0)
#define RPG_CLIENT_MATCHTHREEBOARDENV_SETSIZE_OFFSET UNITYSDK_OFFSET(0xD58D8D0)

namespace RPG::Client
{
	class MatchThreeBoardEnv : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x18
		::System::Boolean FNHJIINKBPE; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::Animation* PMOJILOJEPE; // 0x28
		::UnityEngine::Transform* PFAHCGGPAJH; // 0x30
		// static const ::System::String* OPMPOFPNDEL; // 0x0
		// static const ::System::String* MPICEHIIPEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_INIT_OFFSET))(this, a1);
		}

		::System::Void SetGridTag(::RPG::Client::MatchThreeBoardEnvTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoardEnvTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_SETGRIDTAG_OFFSET))(this, a1);
		}

		::System::Void SetSize(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_SETSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void BIOBBNGDGDF(::RPG::Client::MatchThreeBoardEnvTag a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoardEnvTag, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_BIOBBNGDGDF_OFFSET))(this, a1, a2);
		}

		::System::Void DPGHDBPBMHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_DPGHDBPBMHA_OFFSET))(this);
		}

		::System::Void NEDKFFOPPPC(::RPG::Client::MatchThreeBoardEnvTag a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoardEnvTag, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARDENV_NEDKFFOPPPC_OFFSET))(this, a1, a2);
		}

	};
}
