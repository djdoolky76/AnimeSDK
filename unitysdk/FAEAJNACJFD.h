#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MAKIMFGFGPE.h"
#include "unitysdk/System/Object.h"

class JMMLJCBJLJG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FAEAJNACJFD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16630030)
#define FAEAJNACJFD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1662FDF0)
#define FAEAJNACJFD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1662FF70)
#define FAEAJNACJFD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16630110)
#define FAEAJNACJFD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1662FE00)
#define FAEAJNACJFD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16630290)
#define FAEAJNACJFD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x166304E0)
#define FAEAJNACJFD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1662FA40)
#define FAEAJNACJFD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x166304C0)
#define FAEAJNACJFD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1662FA20)
#define FAEAJNACJFD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1662FD00)
#define FAEAJNACJFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16630240)

inline static constexpr unsigned int FAEAJNACJFD_TypeDefinitionIndex = 14993;

class FAEAJNACJFD : public ::System::Object
{
public:
	::Il2CppArray<::JMMLJCBJLJG*>* OJMBOGGMIKO; // 0x10
	::MAKIMFGFGPE DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAJNACJFD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAJNACJFD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAJNACJFD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FAEAJNACJFD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FAEAJNACJFD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAJNACJFD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAJNACJFD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAJNACJFD_FINALIZE_OFFSET))(this);
	}

	::JMMLJCBJLJG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JMMLJCBJLJG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAEAJNACJFD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FAEAJNACJFD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAJNACJFD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEAJNACJFD_NAMKJOJBAOA_OFFSET))(this);
	}
};
