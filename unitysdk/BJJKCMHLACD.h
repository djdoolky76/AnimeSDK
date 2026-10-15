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

#define BJJKCMHLACD_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xB79EAE0)
#define BJJKCMHLACD_CEDHPNMJGOP_OFFSET UNITYSDK_OFFSET(0xB79EBD0)
#define BJJKCMHLACD_CTOR_OFFSET UNITYSDK_OFFSET(0xB79DCA0)
#define BJJKCMHLACD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB79DD40)
#define BJJKCMHLACD_EAHLKOGJFOA_OFFSET UNITYSDK_OFFSET(0xB79E370)
#define BJJKCMHLACD_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0xB79DD90)
#define BJJKCMHLACD_HGOJNJLHINC_OFFSET UNITYSDK_OFFSET(0xB79EA70)
#define BJJKCMHLACD_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0xB79DF20)
#define BJJKCMHLACD_MNMBEHACALN_OFFSET UNITYSDK_OFFSET(0xB79E900)
#define BJJKCMHLACD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB79E0B0)
#define BJJKCMHLACD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB79E5D0)
#define BJJKCMHLACD_PBNOCMEKDDI_OFFSET UNITYSDK_OFFSET(0xB79ECA0)
#define BJJKCMHLACD_PPICFLIBIPB_OFFSET UNITYSDK_OFFSET(0xB79ED40)
#define BJJKCMHLACD_TICK_OFFSET UNITYSDK_OFFSET(0xB79E620)

inline static constexpr unsigned int BJJKCMHLACD_TypeDefinitionIndex = 52711;

	class BJJKCMHLACD : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* AMDDFDJAHCG; // 0x18
		::RPG::GameCore::ConvincePlayOptionTalk* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* PFFPBHGNEFM; // 0x30
		::System::String* NCCEFIDOIHM; // 0x38
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
