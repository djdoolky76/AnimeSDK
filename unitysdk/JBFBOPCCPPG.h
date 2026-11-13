#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PlayOptionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBFBOPCCPPG_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x19A6C9C0)
#define JBFBOPCCPPG_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0x19A6CA80)
#define JBFBOPCCPPG_CTOR_OFFSET UNITYSDK_OFFSET(0x19A6BD60)
#define JBFBOPCCPPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A6BE00)
#define JBFBOPCCPPG_MNMBEHACALN_OFFSET UNITYSDK_OFFSET(0x19A6C850)
#define JBFBOPCCPPG_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x19A6C390)
#define JBFBOPCCPPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A6BF30)
#define JBFBOPCCPPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19A6C800)
#define JBFBOPCCPPG_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0x19A6CB50)
#define JBFBOPCCPPG_TICK_OFFSET UNITYSDK_OFFSET(0x19A6C600)

inline static constexpr unsigned int JBFBOPCCPPG_TypeDefinitionIndex = 59531;

	class JBFBOPCCPPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x20
		::RPG::GameCore::PlayOptionTalk* OFKGLJOAMLD; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x30
		::System::String* NCCEFIDOIHM; // 0x38
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
