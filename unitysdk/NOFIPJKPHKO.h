#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKBGBADHJHO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IBDADAFOKJN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NOFIPJKPHKO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAAE140)
#define NOFIPJKPHKO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAADF10)
#define NOFIPJKPHKO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAAE080)
#define NOFIPJKPHKO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAAE220)
#define NOFIPJKPHKO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAADF20)
#define NOFIPJKPHKO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAAE590)
#define NOFIPJKPHKO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAAE3C0)
#define NOFIPJKPHKO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAADB70)
#define NOFIPJKPHKO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAAE3A0)
#define NOFIPJKPHKO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAADB50)
#define NOFIPJKPHKO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAADE30)
#define NOFIPJKPHKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAE350)

inline static constexpr unsigned int NOFIPJKPHKO_TypeDefinitionIndex = 16204;

class NOFIPJKPHKO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::HKBGBADHJHO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::IBDADAFOKJN*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFIPJKPHKO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_CHLEALKAOJO_OFFSET))(this);
	}

	::IBDADAFOKJN* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IBDADAFOKJN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOFIPJKPHKO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
