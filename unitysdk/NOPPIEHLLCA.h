#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/POEHKJOBHLN.h"
#include "unitysdk/System/Object.h"

class OAHBEIDHNDF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NOPPIEHLLCA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0CE3C0)
#define NOPPIEHLLCA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0CE190)
#define NOPPIEHLLCA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D0CE300)
#define NOPPIEHLLCA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0CE4A0)
#define NOPPIEHLLCA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0CE1A0)
#define NOPPIEHLLCA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1D0CE810)
#define NOPPIEHLLCA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D0CE640)
#define NOPPIEHLLCA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D0CDDF0)
#define NOPPIEHLLCA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1D0CE620)
#define NOPPIEHLLCA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0CDDD0)
#define NOPPIEHLLCA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0CE0B0)
#define NOPPIEHLLCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CE5D0)

inline static constexpr unsigned int NOPPIEHLLCA_TypeDefinitionIndex = 12759;

class NOPPIEHLLCA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::OAHBEIDHNDF*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::POEHKJOBHLN DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPPIEHLLCA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::OAHBEIDHNDF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OAHBEIDHNDF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOPPIEHLLCA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
