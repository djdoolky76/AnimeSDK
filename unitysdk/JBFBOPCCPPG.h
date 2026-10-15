#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBFBOPCCPPG_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x1656A480)
#define JBFBOPCCPPG_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0x1656A540)
#define JBFBOPCCPPG_CTOR_OFFSET UNITYSDK_OFFSET(0x16569820)
#define JBFBOPCCPPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165698C0)
#define JBFBOPCCPPG_MNMBEHACALN_OFFSET UNITYSDK_OFFSET(0x1656A310)
#define JBFBOPCCPPG_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x16569E50)
#define JBFBOPCCPPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165699F0)
#define JBFBOPCCPPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1656A2C0)
#define JBFBOPCCPPG_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0x1656A610)
#define JBFBOPCCPPG_TICK_OFFSET UNITYSDK_OFFSET(0x1656A0C0)

inline static constexpr unsigned int JBFBOPCCPPG_TypeDefinitionIndex = 58275;

	class JBFBOPCCPPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::String* NCCEFIDOIHM; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x28
		::RPG::GameCore::PlayOptionTalk* OFKGLJOAMLD; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x38
		::System::Boolean BKPCHGDNEFH; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayOptionTalk*))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_TICK_OFFSET))(this, a1);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Boolean MNMBEHACALN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_MNMBEHACALN_OFFSET))(this, a1);
		}

		::System::Void CEDHPNMJGOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_CEDHPNMJGOP_OFFSET))(this, a1);
		}

		::System::Void PBNOCMEKDDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBFBOPCCPPG_PBNOCMEKDDI_OFFSET))(this, a1);
		}

	};
