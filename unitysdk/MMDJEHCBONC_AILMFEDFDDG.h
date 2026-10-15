#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMDJEHCBONC.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
class HHPILEGPJKC;
class IPADOJLOLPH;
class MMDJEHCBONC;
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MMDJEHCBONC_AILMFEDFDDG_BPGGIGIEHBE_OFFSET UNITYSDK_OFFSET(0x1C53ACA0)
#define MMDJEHCBONC_AILMFEDFDDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53ACE0)
#define MMDJEHCBONC_AILMFEDFDDG_DANJFOLEJAN_OFFSET UNITYSDK_OFFSET(0x1C53ACB0)
#define MMDJEHCBONC_AILMFEDFDDG_DDNLOMLLDFH_OFFSET UNITYSDK_OFFSET(0x1C53ACC0)
#define MMDJEHCBONC_AILMFEDFDDG_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1C539960)
#define MMDJEHCBONC_AILMFEDFDDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C53A6F0)
#define MMDJEHCBONC_AILMFEDFDDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C53AB60)
#define MMDJEHCBONC_AILMFEDFDDG_IGAKEJNBNPK_OFFSET UNITYSDK_OFFSET(0x1C53AC90)
#define MMDJEHCBONC_AILMFEDFDDG_JJPAFAAGOND_OFFSET UNITYSDK_OFFSET(0x1C53ACD0)
#define MMDJEHCBONC_AILMFEDFDDG_LLMIFCGMJBK_OFFSET UNITYSDK_OFFSET(0x1C5396D0)

	class MMDJEHCBONC_AILMFEDFDDG : public ::MMDJEHCBONC
	{
	public:
		::IPADOJLOLPH* GMKAIEDIPHM; // 0x10
		::HHPILEGPJKC* DFKDLADMCEG; // 0x18
		::Il2CppArray<::System::Object*>* CKJCMGLIGCC; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::IPADOJLOLPH*>* ILKDLOKCKMK; // 0x28
		::RPG::Client::CompilerFramework::DiagnosticSeverity HKMKDCPGEMP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_CTOR_OFFSET))(this);
		}

		::System::String* LLMIFCGMJBK(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_LLMIFCGMJBK_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::MMDJEHCBONC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMDJEHCBONC*))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_EQUALS_OFFSET))(this, a1);
		}

		::HHPILEGPJKC* IGAKEJNBNPK()
		{
			return ((::HHPILEGPJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_IGAKEJNBNPK_OFFSET))(this);
		}

		::System::String* EIOMMLPIAKP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_EIOMMLPIAKP_OFFSET))(this);
		}

		::RPG::Client::CompilerFramework::DiagnosticSeverity BPGGIGIEHBE()
		{
			return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_BPGGIGIEHBE_OFFSET))(this);
		}

		::IPADOJLOLPH* DANJFOLEJAN()
		{
			return ((::IPADOJLOLPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_DANJFOLEJAN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IPADOJLOLPH*>* DDNLOMLLDFH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IPADOJLOLPH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_DDNLOMLLDFH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* JJPAFAAGOND()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDJEHCBONC_AILMFEDFDDG_JJPAFAAGOND_OFFSET))(this);
		}

	};
