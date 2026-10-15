#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KCOAIPGGMGJ;
namespace RPG::GameCore { class ConvincePlayOptionTalk; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJJKCMHLACD_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xB7A38A0)
#define BJJKCMHLACD_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0xB7A3990)
#define BJJKCMHLACD_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A2A60)
#define BJJKCMHLACD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7A2B00)
#define BJJKCMHLACD_EAHLKOGJFOA_OFFSET UNITYSDK_OFFSET(0xB7A3130)
#define BJJKCMHLACD_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0xB7A2B50)
#define BJJKCMHLACD_HGOJNJLHINC_OFFSET UNITYSDK_OFFSET(0xB7A3830)
#define BJJKCMHLACD_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0xB7A2CE0)
#define BJJKCMHLACD_MNMBEHACALN_OFFSET UNITYSDK_OFFSET(0xB7A36C0)
#define BJJKCMHLACD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7A2E70)
#define BJJKCMHLACD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7A3390)
#define BJJKCMHLACD_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0xB7A3A60)
#define BJJKCMHLACD_PPICFLIBIPB_OFFSET UNITYSDK_OFFSET(0xB7A3B00)
#define BJJKCMHLACD_TICK_OFFSET UNITYSDK_OFFSET(0xB7A33E0)

inline static constexpr unsigned int BJJKCMHLACD_TypeDefinitionIndex = 52711;

	class BJJKCMHLACD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x20
		::System::String* NCCEFIDOIHM; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x30
		::RPG::GameCore::ConvincePlayOptionTalk* OFKGLJOAMLD; // 0x38
		::System::Boolean BKPCHGDNEFH; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvincePlayOptionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvincePlayOptionTalk*))((::PBYTE)hIl2Cpp + BJJKCMHLACD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJKCMHLACD_DISPOSE_OFFSET))(this);
		}

		::System::Void LMEHGELGFBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJKCMHLACD_LMEHGELGFBA_OFFSET))(this);
		}

		::System::Void FFAMPICKBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJKCMHLACD_FFAMPICKBJD_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJKCMHLACD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJKCMHLACD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJJKCMHLACD_TICK_OFFSET))(this, a1);
		}

		::System::Void HGOJNJLHINC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJJKCMHLACD_HGOJNJLHINC_OFFSET))(this, a1);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJJKCMHLACD_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Boolean MNMBEHACALN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJJKCMHLACD_MNMBEHACALN_OFFSET))(this, a1);
		}

		::System::Void CEDHPNMJGOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJJKCMHLACD_CEDHPNMJGOP_OFFSET))(this, a1);
		}

		::System::Void PBNOCMEKDDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJJKCMHLACD_PBNOCMEKDDI_OFFSET))(this, a1);
		}

		::System::Void EAHLKOGJFOA(::KCOAIPGGMGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCOAIPGGMGJ*))((::PBYTE)hIl2Cpp + BJJKCMHLACD_EAHLKOGJFOA_OFFSET))(this, a1);
		}

		::System::Void PPICFLIBIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJKCMHLACD_PPICFLIBIPB_OFFSET))(this);
		}

	};
