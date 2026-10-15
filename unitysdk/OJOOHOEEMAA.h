#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class BattleShowUIPageParam; }
namespace RPG::Client { class BattleShowUIPageTextParam; }
namespace RPG::GameCore { class ShowUIPage; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJOOHOEEMAA_AEKMIFNKDDD_OFFSET UNITYSDK_OFFSET(0xBEC93B0)
#define OJOOHOEEMAA_BFFIPFJOGGC_OFFSET UNITYSDK_OFFSET(0xBEC8C90)
#define OJOOHOEEMAA_BJMAELDANHJ_OFFSET UNITYSDK_OFFSET(0xBEC90E0)
#define OJOOHOEEMAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEC89C0)
#define OJOOHOEEMAA_DDEOLOMNAFC_OFFSET UNITYSDK_OFFSET(0xBEC9320)
#define OJOOHOEEMAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEC89D0)
#define OJOOHOEEMAA_FELIIKEJGKC_OFFSET UNITYSDK_OFFSET(0xBEC8D40)
#define OJOOHOEEMAA_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0xBEC8A80)
#define OJOOHOEEMAA_LFADDLHMBJM_OFFSET UNITYSDK_OFFSET(0xBEC91B0)
#define OJOOHOEEMAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEC8B10)
#define OJOOHOEEMAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEC9020)
#define OJOOHOEEMAA_TICK_OFFSET UNITYSDK_OFFSET(0xBEC8FC0)

inline static constexpr unsigned int OJOOHOEEMAA_TypeDefinitionIndex = 58707;

	class OJOOHOEEMAA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowUIPage* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Boolean POPKOMHDLAD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUIPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUIPage*))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BJMAELDANHJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_BJMAELDANHJ_OFFSET))(this, a1);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::Boolean BFFIPFJOGGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_BFFIPFJOGGC_OFFSET))(this);
		}

		::RPG::Client::BattleShowUIPageParam* FELIIKEJGKC()
		{
			return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_FELIIKEJGKC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>* LFADDLHMBJM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleShowUIPageTextParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_LFADDLHMBJM_OFFSET))(this);
		}

		::RPG::Client::BattleShowUIPageTextParam* DDEOLOMNAFC(::RPG::GameCore::UITextNode* a1)
		{
			return ((::RPG::Client::BattleShowUIPageTextParam*(*)(::PVOID, ::RPG::GameCore::UITextNode*))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_DDEOLOMNAFC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* AEKMIFNKDDD(::RPG::GameCore::UITextNode* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::UITextNode*))((::PBYTE)hIl2Cpp + OJOOHOEEMAA_AEKMIFNKDDD_OFFSET))(this, a1);
		}

	};
