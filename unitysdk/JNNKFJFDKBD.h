#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJPCDMHCPPO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OMELLIFHFIB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JNNKFJFDKBD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1611C140)
#define JNNKFJFDKBD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1611BED0)
#define JNNKFJFDKBD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1611C080)
#define JNNKFJFDKBD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1611C220)
#define JNNKFJFDKBD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1611BEE0)
#define JNNKFJFDKBD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1611C3C0)
#define JNNKFJFDKBD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1611BB20)
#define JNNKFJFDKBD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1611C3A0)
#define JNNKFJFDKBD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1611BB00)
#define JNNKFJFDKBD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1611BDE0)
#define JNNKFJFDKBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1611C350)

inline static constexpr unsigned int JNNKFJFDKBD_TypeDefinitionIndex = 10676;

class JNNKFJFDKBD : public ::System::Object
{
public:
	::Il2CppArray<::OMELLIFHFIB*>* OJMBOGGMIKO; // 0x10
	::JJPCDMHCPPO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_CHLEALKAOJO_OFFSET))(this);
	}

	::OMELLIFHFIB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OMELLIFHFIB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNNKFJFDKBD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
