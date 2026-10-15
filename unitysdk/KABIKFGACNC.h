#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"
class HHPILEGPJKC;
class HOGGFNELOEL;
class KABIKFGACNC;
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define KABIKFGACNC_AJMKPPIAPMF_1_OFFSET UNITYSDK_OFFSET(0x1C537DC0)
#define KABIKFGACNC_AJMKPPIAPMF_OFFSET UNITYSDK_OFFSET(0x1C537210)
#define KABIKFGACNC_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x1C537660)
#define KABIKFGACNC_BPGGIGIEHBE_OFFSET UNITYSDK_OFFSET(0x1C538190)
#define KABIKFGACNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C537130)
#define KABIKFGACNC_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C5371E0)
#define KABIKFGACNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C536FD0)
#define KABIKFGACNC_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x1C537870)
#define KABIKFGACNC_EDPAFEPNAEE_OFFSET UNITYSDK_OFFSET(0x1C538130)
#define KABIKFGACNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C5377C0)
#define KABIKFGACNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C5376C0)
#define KABIKFGACNC_IIHHCDKBGGB_OFFSET UNITYSDK_OFFSET(0x1C538120)
#define KABIKFGACNC_KBCNLKABBIK_OFFSET UNITYSDK_OFFSET(0x1C537CF0)
#define KABIKFGACNC_KHIJIGMGGOP_OFFSET UNITYSDK_OFFSET(0x1C5381B0)
#define KABIKFGACNC_LIPECGPCPEP_OFFSET UNITYSDK_OFFSET(0x1C538040)
#define KABIKFGACNC_LLMIFCGMJBK_OFFSET UNITYSDK_OFFSET(0x1C537E10)
#define KABIKFGACNC_MPJBJLDPBBN_OFFSET UNITYSDK_OFFSET(0x1C5381A0)
#define KABIKFGACNC_PFOPMNJALPF_OFFSET UNITYSDK_OFFSET(0x1C538090)
#define KABIKFGACNC_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C537A50)
#define KABIKFGACNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C5375E0)

	class KABIKFGACNC : public ::System::Object
	{
	public:
		::HOGGFNELOEL* NFJDKCOENIJ; // 0x10
		::Il2CppArray<::System::Object*>* PGDBJIDJNBA; // 0x18
		::RPG::Client::CompilerFramework::DiagnosticSeverity AHADOKFBBMN; // 0x20
		::RPG::Client::CompilerFramework::DiagnosticSeverity GNDPJBDKIMB; // 0x24
		::System::Int32 KFEIPJJCELM; // 0x28
		::System::Void _ctor(::HOGGFNELOEL* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HOGGFNELOEL*, ::System::Int32))((::PBYTE)hIl2Cpp + KABIKFGACNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::HOGGFNELOEL* a1, ::System::Int32 a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HOGGFNELOEL*, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KABIKFGACNC_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::KABIKFGACNC* a1, ::RPG::Client::CompilerFramework::DiagnosticSeverity a2)
		{
			return ((::System::Void(*)(::PVOID, ::KABIKFGACNC*, ::RPG::Client::CompilerFramework::DiagnosticSeverity))((::PBYTE)hIl2Cpp + KABIKFGACNC_CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::HHPILEGPJKC* AJMKPPIAPMF(::System::Int32 a1, ::RPG::Client::CompilerFramework::DiagnosticSeverity a2, ::HOGGFNELOEL* a3)
		{
			return ((::HHPILEGPJKC*(*)(::System::Int32, ::RPG::Client::CompilerFramework::DiagnosticSeverity, ::HOGGFNELOEL*))((::PBYTE)hIl2Cpp + KABIKFGACNC_AJMKPPIAPMF_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIKFGACNC_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIKFGACNC_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KABIKFGACNC_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KABIKFGACNC_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::String* BDJPPIMOJBH(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KABIKFGACNC_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		::System::Boolean DGCGLNOLDIB(::KABIKFGACNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KABIKFGACNC*))((::PBYTE)hIl2Cpp + KABIKFGACNC_DGCGLNOLDIB_OFFSET))(this, a1);
		}

		::KABIKFGACNC* KBCNLKABBIK(::RPG::Client::CompilerFramework::DiagnosticSeverity a1)
		{
			return ((::KABIKFGACNC*(*)(::PVOID, ::RPG::Client::CompilerFramework::DiagnosticSeverity))((::PBYTE)hIl2Cpp + KABIKFGACNC_KBCNLKABBIK_OFFSET))(this, a1);
		}

		::HHPILEGPJKC* AJMKPPIAPMF_1()
		{
			return ((::HHPILEGPJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIKFGACNC_AJMKPPIAPMF_1_OFFSET))(this);
		}

		::System::String* LLMIFCGMJBK(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KABIKFGACNC_LLMIFCGMJBK_OFFSET))(this, a1);
		}

		::KABIKFGACNC* PFOPMNJALPF(::RPG::Client::CompilerFramework::DiagnosticSeverity a1)
		{
			return ((::KABIKFGACNC*(*)(::PVOID, ::RPG::Client::CompilerFramework::DiagnosticSeverity))((::PBYTE)hIl2Cpp + KABIKFGACNC_PFOPMNJALPF_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* LIPECGPCPEP(::System::IFormatProvider* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + KABIKFGACNC_LIPECGPCPEP_OFFSET))(this, a1);
		}

		::System::Int32 IIHHCDKBGGB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIKFGACNC_IIHHCDKBGGB_OFFSET))(this);
		}

		::System::String* EDPAFEPNAEE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIKFGACNC_EDPAFEPNAEE_OFFSET))(this);
		}

		::RPG::Client::CompilerFramework::DiagnosticSeverity BPGGIGIEHBE()
		{
			return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIKFGACNC_BPGGIGIEHBE_OFFSET))(this);
		}

		::RPG::Client::CompilerFramework::DiagnosticSeverity MPJBJLDPBBN()
		{
			return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIKFGACNC_MPJBJLDPBBN_OFFSET))(this);
		}

		::System::String* KHIJIGMGGOP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KABIKFGACNC_KHIJIGMGGOP_OFFSET))(this);
		}

	};
