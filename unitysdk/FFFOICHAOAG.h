#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayRogueOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFFOICHAOAG_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x15735EC0)
#define FFFOICHAOAG_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0x15735F80)
#define FFFOICHAOAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15735700)
#define FFFOICHAOAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157357A0)
#define FFFOICHAOAG_MNMBEHACALN_OFFSET UNITYSDK_OFFSET(0x15735D50)
#define FFFOICHAOAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157358D0)
#define FFFOICHAOAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15735B00)
#define FFFOICHAOAG_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0x15736050)
#define FFFOICHAOAG_TICK_OFFSET UNITYSDK_OFFSET(0x15735B50)

	class FFFOICHAOAG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x20
		::RPG::GameCore::PlayRogueOptionTalk* OFKGLJOAMLD; // 0x28
		::System::String* NCCEFIDOIHM; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x38
		::System::Boolean BKPCHGDNEFH; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayRogueOptionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayRogueOptionTalk*))((::PBYTE)hIl2Cpp + FFFOICHAOAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFOICHAOAG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFOICHAOAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFOICHAOAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFFOICHAOAG_TICK_OFFSET))(this, a1);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFFOICHAOAG_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Boolean MNMBEHACALN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFFOICHAOAG_MNMBEHACALN_OFFSET))(this, a1);
		}

		::System::Void CEDHPNMJGOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFFOICHAOAG_CEDHPNMJGOP_OFFSET))(this, a1);
		}

		::System::Void PBNOCMEKDDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFFOICHAOAG_PBNOCMEKDDI_OFFSET))(this, a1);
		}

	};
