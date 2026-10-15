#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/IJIMDIILCBF.h"
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class Object; }

#define NGPEOFDFFPC_HDAEIJLBDAO_OFFSET UNITYSDK_OFFSET(0xBBB3230)
#define NGPEOFDFFPC_HOLLMBLPIKJ_OFFSET UNITYSDK_OFFSET(0xBBB3160)
#define NGPEOFDFFPC_KMAKLLEGBHI_OFFSET UNITYSDK_OFFSET(0xBBB30E0)
#define NGPEOFDFFPC_PEDMCDCDBOK_OFFSET UNITYSDK_OFFSET(0xBBB31C0)

	class NGPEOFDFFPC : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarCommonRowWrap* KMAKLLEGBHI(::APCGKBOPGJL a1)
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::APCGKBOPGJL))((::PBYTE)hIl2Cpp + NGPEOFDFFPC_KMAKLLEGBHI_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarUltraSkillConfigRow* HOLLMBLPIKJ(::APCGKBOPGJL a1)
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::APCGKBOPGJL))((::PBYTE)hIl2Cpp + NGPEOFDFFPC_HOLLMBLPIKJ_OFFSET))(a1);
		}

		static ::IJIMDIILCBF PEDMCDCDBOK(::APCGKBOPGJL a1)
		{
			return ((::IJIMDIILCBF(*)(::APCGKBOPGJL))((::PBYTE)hIl2Cpp + NGPEOFDFFPC_PEDMCDCDBOK_OFFSET))(a1);
		}

		static ::System::Boolean HDAEIJLBDAO(::APCGKBOPGJL a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::APCGKBOPGJL, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NGPEOFDFFPC_HDAEIJLBDAO_OFFSET))(a1, a2, a3);
		}

	};
