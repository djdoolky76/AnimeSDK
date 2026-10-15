#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudienceGroupInstance_FJBBJCJGFNF.h"
namespace RPG::Client { class AudienceLayoutConfig; }
namespace RPG::GameCore { class LevelCurveInstance; }

#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ODOOPNMEJCA_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B1E10)
#define RPG_CLIENT_AUDIENCEGROUPINSTANCE_ODOOPNMEJCA_EEOOMIBEMNH_OFFSET UNITYSDK_OFFSET(0xC6B1E30)

namespace RPG::Client
{
	class AudienceGroupInstance_ODOOPNMEJCA : public ::RPG::Client::AudienceGroupInstance_FJBBJCJGFNF
	{
	public:
		::RPG::Client::AudienceLayoutConfig* EABKOHGCHFP; // 0x10
		::System::Single BJPFKNECHPL; // 0x18
		::System::Single NKPKPNKBBAP; // 0x1C
		::System::Single NPAFMEBNFOB; // 0x20
		::System::Void _ctor(::RPG::Client::AudienceLayoutConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudienceLayoutConfig*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ODOOPNMEJCA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EEOOMIBEMNH(::RPG::GameCore::LevelCurveInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCurveInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEGROUPINSTANCE_ODOOPNMEJCA_EEOOMIBEMNH_OFFSET))(this, a1);
		}

	};
}
