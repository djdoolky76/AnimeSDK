#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LimaoNewsShowTalkText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EPCOGHIIHCG_CTOR_OFFSET UNITYSDK_OFFSET(0x155D0DC0)
#define EPCOGHIIHCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155D0DD0)
#define EPCOGHIIHCG_EPABMBIGIGK_OFFSET UNITYSDK_OFFSET(0x155D1100)
#define EPCOGHIIHCG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155D0E90)
#define EPCOGHIIHCG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155D1050)
#define EPCOGHIIHCG_TICK_OFFSET UNITYSDK_OFFSET(0x155D10A0)

inline static constexpr unsigned int EPCOGHIIHCG_TypeDefinitionIndex = 52946;

	class EPCOGHIIHCG : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LimaoNewsShowTalkText* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::LimaoNewsShowTalkText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::LimaoNewsShowTalkText*))((::PBYTE)hIl2Cpp + EPCOGHIIHCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCOGHIIHCG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCOGHIIHCG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCOGHIIHCG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPCOGHIIHCG_TICK_OFFSET))(this, a1);
		}

		::System::Void EPABMBIGIGK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPCOGHIIHCG_EPABMBIGIGK_OFFSET))(this, a1);
		}

	};
