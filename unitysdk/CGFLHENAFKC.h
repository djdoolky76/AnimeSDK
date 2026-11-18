#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PPGLCOBNGHE.h"
#include "unitysdk/System/Object.h"

class MNHHJEJBNAH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CGFLHENAFKC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17F0CFD0)
#define CGFLHENAFKC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17F0CD90)
#define CGFLHENAFKC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17F0CF10)
#define CGFLHENAFKC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F0D0B0)
#define CGFLHENAFKC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17F0CDA0)
#define CGFLHENAFKC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17F0D230)
#define CGFLHENAFKC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17F0D480)
#define CGFLHENAFKC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17F0C9E0)
#define CGFLHENAFKC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17F0D460)
#define CGFLHENAFKC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17F0C9C0)
#define CGFLHENAFKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17F0CCA0)
#define CGFLHENAFKC__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0D1E0)

inline static constexpr unsigned int CGFLHENAFKC_TypeDefinitionIndex = 15399;

class CGFLHENAFKC : public ::System::Object
{
public:
	::Il2CppArray<::MNHHJEJBNAH*>* OJMBOGGMIKO; // 0x10
	::PPGLCOBNGHE DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLHENAFKC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLHENAFKC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLHENAFKC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CGFLHENAFKC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CGFLHENAFKC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLHENAFKC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLHENAFKC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLHENAFKC_FINALIZE_OFFSET))(this);
	}

	::MNHHJEJBNAH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MNHHJEJBNAH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGFLHENAFKC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CGFLHENAFKC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLHENAFKC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFLHENAFKC_NAMKJOJBAOA_OFFSET))(this);
	}
};
