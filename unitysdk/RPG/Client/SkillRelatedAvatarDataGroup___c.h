#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SkillRelatedAvatarData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0E5780)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE0E57C0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C___INIT_B__4_0_OFFSET UNITYSDK_OFFSET(0xE0E57D0)

namespace RPG::Client
{
	class SkillRelatedAvatarDataGroup___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::SkillRelatedAvatarData*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::SkillRelatedAvatarData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F150);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __Init_b__4_0(::RPG::Client::SkillRelatedAvatarData* a1, ::RPG::Client::SkillRelatedAvatarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SkillRelatedAvatarData*, ::RPG::Client::SkillRelatedAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATAGROUP___C___INIT_B__4_0_OFFSET))(this, a1, a2);
		}

	};
}
