#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPDFGPCONFI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GHDKDEGBEAE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MCHNCNNGOGF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C082920)
#define MCHNCNNGOGF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C0826A0)
#define MCHNCNNGOGF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0826B0)
#define MCHNCNNGOGF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C082770)
#define MCHNCNNGOGF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C0828A0)
#define MCHNCNNGOGF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C082D20)
#define MCHNCNNGOGF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C082A50)
#define MCHNCNNGOGF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0822F0)
#define MCHNCNNGOGF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C082D00)
#define MCHNCNNGOGF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0822D0)
#define MCHNCNNGOGF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C0825B0)
#define MCHNCNNGOGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C082A00)

inline static constexpr unsigned int MCHNCNNGOGF_TypeDefinitionIndex = 12973;

class MCHNCNNGOGF : public ::System::Object
{
public:
	::Il2CppArray<::GHDKDEGBEAE*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::DPDFGPCONFI DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNCNNGOGF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_NAMKJOJBAOA_OFFSET))(this);
	}

	::GHDKDEGBEAE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GHDKDEGBEAE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHNCNNGOGF_CHLEALKAOJO_OFFSET))(this);
	}
};
