#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKFLCJDKMFI_AONCBINCDON_OFFSET UNITYSDK_OFFSET(0x147B94F0)
#define PKFLCJDKMFI_BFKCFGPNDLP_OFFSET UNITYSDK_OFFSET(0x147B9960)
#define PKFLCJDKMFI_CTOR_OFFSET UNITYSDK_OFFSET(0x147B8A40)
#define PKFLCJDKMFI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x147B8EA0)
#define PKFLCJDKMFI_FGNGLGLALGK_OFFSET UNITYSDK_OFFSET(0x147B9C50)
#define PKFLCJDKMFI_GAJPFIMBIHL_OFFSET UNITYSDK_OFFSET(0x147B97B0)
#define PKFLCJDKMFI_GPLGLJEKLFA_OFFSET UNITYSDK_OFFSET(0x147B9A90)
#define PKFLCJDKMFI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x147B8A50)
#define PKFLCJDKMFI_LIOJPMLBODD_OFFSET UNITYSDK_OFFSET(0x147B8AF0)
#define PKFLCJDKMFI_MKDPLHMKCJB_OFFSET UNITYSDK_OFFSET(0x147B98D0)
#define PKFLCJDKMFI_NEFACCAADIP_OFFSET UNITYSDK_OFFSET(0x147B95B0)
#define PKFLCJDKMFI_OMLAIALDLEO_OFFSET UNITYSDK_OFFSET(0x147B9400)
#define PKFLCJDKMFI_OOBLHLACAKI_OFFSET UNITYSDK_OFFSET(0x147B9B70)

inline static constexpr unsigned int PKFLCJDKMFI_TypeDefinitionIndex = 78907;

	class PKFLCJDKMFI : public ::System::Object
	{
	public:
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* BPCONKNPIBM; // 0x20
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
