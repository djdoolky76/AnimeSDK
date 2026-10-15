#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class INCBJBHPCFL;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMBFNOOBJFD_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xBF112E0)
#define OMBFNOOBJFD_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0xBF113A0)
#define OMBFNOOBJFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBF106A0)
#define OMBFNOOBJFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF10740)
#define OMBFNOOBJFD_MNMBEHACALN_OFFSET UNITYSDK_OFFSET(0xBF11170)
#define OMBFNOOBJFD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBF10CB0)
#define OMBFNOOBJFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF10870)
#define OMBFNOOBJFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF11120)
#define OMBFNOOBJFD_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0xBF11470)
#define OMBFNOOBJFD_TICK_OFFSET UNITYSDK_OFFSET(0xBF10F20)

inline static constexpr unsigned int OMBFNOOBJFD_TypeDefinitionIndex = 58266;

	class OMBFNOOBJFD : public ::GELIALJDFBL
	{
	public:
		::INCBJBHPCFL* OFKGLJOAMLD; // 0x18
		::System::String* NCCEFIDOIHM; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x38
		::System::Boolean BKPCHGDNEFH; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::INCBJBHPCFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::INCBJBHPCFL*))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_TICK_OFFSET))(this, a1);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Boolean MNMBEHACALN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_MNMBEHACALN_OFFSET))(this, a1);
		}

		::System::Void CEDHPNMJGOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_CEDHPNMJGOP_OFFSET))(this, a1);
		}

		::System::Void PBNOCMEKDDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMBFNOOBJFD_PBNOCMEKDDI_OFFSET))(this, a1);
		}

	};
