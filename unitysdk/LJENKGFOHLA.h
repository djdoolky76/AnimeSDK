#pragma once
#include "unitysdk/unitysdk.h"
class NJFHGODIBPN;
class NJFHGODIBPN_BNDKBMLLKBO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SO_FaceTo; }
namespace RPG::GameCore { class TaskContext; }

#define LJENKGFOHLA_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF7D6F0)
#define LJENKGFOHLA_CGPDEAONKDE_OFFSET UNITYSDK_OFFSET(0xBF7D610)
#define LJENKGFOHLA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF7CE90)
#define LJENKGFOHLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF7CF30)
#define LJENKGFOHLA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF7D660)
#define LJENKGFOHLA_TICK_OFFSET UNITYSDK_OFFSET(0xBF7D500)

inline static constexpr unsigned int LJENKGFOHLA_TypeDefinitionIndex = 53223;

	class LJENKGFOHLA
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x40
		::NJFHGODIBPN* HNHCPOJKNCC; // 0x48
		::NJFHGODIBPN_BNDKBMLLKBO* HDIAPOOCACN; // 0x50
		::System::UInt32 LCAOJIDMINA; // 0x58
		::System::Single OPBDPOCJCKB; // 0x5C
		static ::System::Single* StaticGet_MNGOKJIFOOH()
		{
			return (::System::Single*)UnitySDK::FromName("", "LJENKGFOHLA")->GetStaticField(0x14750);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_FaceTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_FaceTo*))((::PBYTE)hIl2Cpp + LJENKGFOHLA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJENKGFOHLA_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJENKGFOHLA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJENKGFOHLA_TICK_OFFSET))(this, a1);
		}

		::System::Void CGPDEAONKDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJENKGFOHLA_CGPDEAONKDE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJENKGFOHLA_ONTASKRESET_OFFSET))(this);
		}

	};
