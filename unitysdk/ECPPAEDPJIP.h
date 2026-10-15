#pragma once
#include "unitysdk/unitysdk.h"
class GFNEIHJFCEK;
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::GameCore { class TaskContext; }

#define ECPPAEDPJIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1330E7D0)
#define ECPPAEDPJIP_JNHLKDAJJFJ_OFFSET UNITYSDK_OFFSET(0x1330EA40)
#define ECPPAEDPJIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1330E800)

	class ECPPAEDPJIP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GFNEIHJFCEK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GFNEIHJFCEK*))((::PBYTE)hIl2Cpp + ECPPAEDPJIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPPAEDPJIP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JNHLKDAJJFJ(::RPG::Client::MonoEffectPluginFollow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + ECPPAEDPJIP_JNHLKDAJJFJ_OFFSET))(this, a1);
		}

	};
