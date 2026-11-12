#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
class JBFFCBPMKEF;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }

#define OBPMHOLHOHG_CLEAR_OFFSET UNITYSDK_OFFSET(0xC655E30)
#define OBPMHOLHOHG_CTOR_OFFSET UNITYSDK_OFFSET(0xC6572D0)
#define OBPMHOLHOHG_DAKBNPLDGNE_OFFSET UNITYSDK_OFFSET(0xC656400)
#define OBPMHOLHOHG_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0xC656880)
#define OBPMHOLHOHG_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0xC657170)
#define OBPMHOLHOHG_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC657250)
#define OBPMHOLHOHG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC657270)
#define OBPMHOLHOHG_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xC6572B0)
#define OBPMHOLHOHG_GET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xC657290)
#define OBPMHOLHOHG_HBFCDJDFNIP_OFFSET UNITYSDK_OFFSET(0xC657030)
#define OBPMHOLHOHG_IBLKCPJDJHB_OFFSET UNITYSDK_OFFSET(0xC656000)
#define OBPMHOLHOHG_JCKDNNGALEO_OFFSET UNITYSDK_OFFSET(0xC6570F0)
#define OBPMHOLHOHG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC655F90)
#define OBPMHOLHOHG_KBLOAMDMOKD_OFFSET UNITYSDK_OFFSET(0xC6562A0)
#define OBPMHOLHOHG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC655BE0)
#define OBPMHOLHOHG_LGIEDINBDNK_OFFSET UNITYSDK_OFFSET(0xC656180)
#define OBPMHOLHOHG_MANPCEGDDJO_OFFSET UNITYSDK_OFFSET(0xC6565A0)
#define OBPMHOLHOHG_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC655F40)
#define OBPMHOLHOHG_OHKOLMODGMD_OFFSET UNITYSDK_OFFSET(0xC6571F0)
#define OBPMHOLHOHG_OLCFKOCBAJJ_OFFSET UNITYSDK_OFFSET(0xC656DE0)
#define OBPMHOLHOHG_SET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC657260)
#define OBPMHOLHOHG_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC657280)
#define OBPMHOLHOHG_SET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xC6572C0)
#define OBPMHOLHOHG_SET_LEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xC6572A0)

inline static constexpr unsigned int OBPMHOLHOHG_TypeDefinitionIndex = 78828;

	class OBPMHOLHOHG : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* PANCIANJJAI; // 0x10
		::Entitas::IEntity* KAKEIDJDNHJ; // 0x18
		::RPG::GameCore::LevelGraphConfig* _Config_k__BackingField; // 0x20
		::RPG::GameCore::LevelGraph* _LevelGraph_k__BackingField; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::GameEntity* EHIFMPNLNON; // 0x38
		::System::String* _ConfigPath_k__BackingField; // 0x40
		::JBFFCBPMKEF* _CustomData_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::RPG::GameCore::LevelGraphValueSource* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Entitas::IEntity*, ::System::String*, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_CLEAR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IBLKCPJDJHB(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_IBLKCPJDJHB_OFFSET))(this, a1, a2);
		}

		::System::Void LGIEDINBDNK(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_LGIEDINBDNK_OFFSET))(this, a1, a2);
		}

		::System::Boolean KBLOAMDMOKD(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_KBLOAMDMOKD_OFFSET))(this, a1, a2);
		}

		::System::Boolean DAKBNPLDGNE(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_DAKBNPLDGNE_OFFSET))(this, a1, a2);
		}

		::System::Void MANPCEGDDJO(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_MANPCEGDDJO_OFFSET))(this, a1, a2);
		}

		::System::Void OLCFKOCBAJJ(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_OLCFKOCBAJJ_OFFSET))(this, a1, a2);
		}

		static ::System::Void DCADIANHPFD(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_DCADIANHPFD_OFFSET))(a1, a2);
		}

		::System::Void HBFCDJDFNIP(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_HBFCDJDFNIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JCKDNNGALEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_JCKDNNGALEO_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Boolean OHKOLMODGMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_OHKOLMODGMD_OFFSET))(this);
		}

		::System::String* get_ConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_GET_CONFIGPATH_OFFSET))(this);
		}

		::System::Void set_ConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_SET_CONFIGPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGraphConfig* get_Config()
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::LevelGraphConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphConfig*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGraph* get_LevelGraph()
		{
			return ((::RPG::GameCore::LevelGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_GET_LEVELGRAPH_OFFSET))(this);
		}

		::System::Void set_LevelGraph(::RPG::GameCore::LevelGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_SET_LEVELGRAPH_OFFSET))(this, a1);
		}

		::JBFFCBPMKEF* get_CustomData()
		{
			return ((::JBFFCBPMKEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_GET_CUSTOMDATA_OFFSET))(this);
		}

		::System::Void set_CustomData(::JBFFCBPMKEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFFCBPMKEF*))((::PBYTE)hIl2Cpp + OBPMHOLHOHG_SET_CUSTOMDATA_OFFSET))(this, a1);
		}

	};
