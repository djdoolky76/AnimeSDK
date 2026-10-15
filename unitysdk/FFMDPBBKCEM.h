#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayTarotBookOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFMDPBBKCEM_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x15746B10)
#define FFMDPBBKCEM_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0x15746B80)
#define FFMDPBBKCEM_CTOR_OFFSET UNITYSDK_OFFSET(0x157463B0)
#define FFMDPBBKCEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157466A0)
#define FFMDPBBKCEM_HPBLOCKNNGA_OFFSET UNITYSDK_OFFSET(0x157469A0)
#define FFMDPBBKCEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15746440)
#define FFMDPBBKCEM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157467F0)
#define FFMDPBBKCEM_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0x15746C50)
#define FFMDPBBKCEM_TICK_OFFSET UNITYSDK_OFFSET(0x15746880)

	class FFMDPBBKCEM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayTarotBookOptionTalk* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* FIEMBFNHGEH; // 0x28
		::System::String* HJLHFOPGJMI; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Boolean FJBAHEOKFII; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTarotBookOptionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTarotBookOptionTalk*))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_TICK_OFFSET))(this, a1);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Void CEDHPNMJGOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_CEDHPNMJGOP_OFFSET))(this, a1);
		}

		::System::Void PBNOCMEKDDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_PBNOCMEKDDI_OFFSET))(this, a1);
		}

		::System::Boolean HPBLOCKNNGA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFMDPBBKCEM_HPBLOCKNNGA_OFFSET))(this, a1);
		}

	};
