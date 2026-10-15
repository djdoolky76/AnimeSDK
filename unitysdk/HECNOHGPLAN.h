#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class BABKFMGGJAM;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define HECNOHGPLAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C3B7F0)
#define HECNOHGPLAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C3B210)
#define HECNOHGPLAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C3B220)
#define HECNOHGPLAN_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15C3B7E0)
#define HECNOHGPLAN_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x15C3B790)
#define HECNOHGPLAN_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15C3B630)
#define HECNOHGPLAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C3B310)
#define HECNOHGPLAN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C3B580)
#define HECNOHGPLAN_TICK_OFFSET UNITYSDK_OFFSET(0x15C3B5D0)

inline static constexpr unsigned int HECNOHGPLAN_TypeDefinitionIndex = 53283;

	class HECNOHGPLAN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::BABKFMGGJAM* OFKGLJOAMLD; // 0x28
		static ::RPG::GameCore::StringHash* StaticGet_LIKAKCCGEGG()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "HECNOHGPLAN")->GetStaticField(0x2BA0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BABKFMGGJAM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BABKFMGGJAM*))((::PBYTE)hIl2Cpp + HECNOHGPLAN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HECNOHGPLAN_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNOHGPLAN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNOHGPLAN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNOHGPLAN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HECNOHGPLAN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNOHGPLAN_ONSKIP_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNOHGPLAN_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNOHGPLAN_GET_FORCESKIP_OFFSET))(this);
		}

	};
