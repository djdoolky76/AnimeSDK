#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEKPLCPCIKA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GLBKMFNCFHK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BEOPHGHHKCB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18777430)
#define BEOPHGHHKCB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187771C0)
#define BEOPHGHHKCB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18777370)
#define BEOPHGHHKCB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18777510)
#define BEOPHGHHKCB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x187771D0)
#define BEOPHGHHKCB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18777690)
#define BEOPHGHHKCB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18776E10)
#define BEOPHGHHKCB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18777900)
#define BEOPHGHHKCB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18776DF0)
#define BEOPHGHHKCB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x187770D0)
#define BEOPHGHHKCB__CTOR_OFFSET UNITYSDK_OFFSET(0x18777640)

inline static constexpr unsigned int BEOPHGHHKCB_TypeDefinitionIndex = 16064;

class BEOPHGHHKCB : public ::System::Object
{
public:
	::Il2CppArray<::GLBKMFNCFHK*>* OJMBOGGMIKO; // 0x10
	::AEKPLCPCIKA DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_CHLEALKAOJO_OFFSET))(this);
	}

	::GLBKMFNCFHK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GLBKMFNCFHK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOPHGHHKCB_NAMKJOJBAOA_OFFSET))(this);
	}
};
