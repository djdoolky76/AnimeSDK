#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKFLCJDKMFI_AONCBINCDON_OFFSET UNITYSDK_OFFSET(0xC2B5830)
#define PKFLCJDKMFI_BFKCFGPNDLP_OFFSET UNITYSDK_OFFSET(0xC2B5C90)
#define PKFLCJDKMFI_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B4D80)
#define PKFLCJDKMFI_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC2B51E0)
#define PKFLCJDKMFI_FGNGLGLALGK_OFFSET UNITYSDK_OFFSET(0xC2B5F80)
#define PKFLCJDKMFI_GAJPFIMBIHL_OFFSET UNITYSDK_OFFSET(0xC2B5AE0)
#define PKFLCJDKMFI_GPLGLJEKLFA_OFFSET UNITYSDK_OFFSET(0xC2B5DC0)
#define PKFLCJDKMFI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC2B4D90)
#define PKFLCJDKMFI_LIOJPMLBODD_OFFSET UNITYSDK_OFFSET(0xC2B4E30)
#define PKFLCJDKMFI_MKDPLHMKCJB_OFFSET UNITYSDK_OFFSET(0xC2B5C00)
#define PKFLCJDKMFI_NEFACCAADIP_OFFSET UNITYSDK_OFFSET(0xC2B58F0)
#define PKFLCJDKMFI_OMLAIALDLEO_OFFSET UNITYSDK_OFFSET(0xC2B5740)
#define PKFLCJDKMFI_OOBLHLACAKI_OFFSET UNITYSDK_OFFSET(0xC2B5EA0)

	class PKFLCJDKMFI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple>* BPCONKNPIBM; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x20
		::System::Single NGLKHNFDPLE; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_EXECUTE_OFFSET))(this);
		}

		::System::Void GAJPFIMBIHL(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_GAJPFIMBIHL_OFFSET))(this, a1, a2);
		}

		::System::Void GPLGLJEKLFA(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_GPLGLJEKLFA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OOBLHLACAKI(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_OOBLHLACAKI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NEFACCAADIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_NEFACCAADIP_OFFSET))(this);
		}

		::System::Void LIOJPMLBODD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_LIOJPMLBODD_OFFSET))(this);
		}

		::System::Void OMLAIALDLEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_OMLAIALDLEO_OFFSET))(this);
		}

		::System::Single FGNGLGLALGK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_FGNGLGLALGK_OFFSET))(this);
		}

		::System::Void AONCBINCDON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_AONCBINCDON_OFFSET))(this);
		}

		::System::Void BFKCFGPNDLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_BFKCFGPNDLP_OFFSET))(this);
		}

		::System::Void MKDPLHMKCJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFLCJDKMFI_MKDPLHMKCJB_OFFSET))(this);
		}

	};
