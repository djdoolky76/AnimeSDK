#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBFMIJNOMAO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NIMJIJIDKDA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NGFNFHONGIM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x173524B0)
#define NGFNFHONGIM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17352230)
#define NGFNFHONGIM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17352240)
#define NGFNFHONGIM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17352300)
#define NGFNFHONGIM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17352430)
#define NGFNFHONGIM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17352890)
#define NGFNFHONGIM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x173525E0)
#define NGFNFHONGIM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17351E80)
#define NGFNFHONGIM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17352AC0)
#define NGFNFHONGIM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17351E60)
#define NGFNFHONGIM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17352140)
#define NGFNFHONGIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17352590)

inline static constexpr unsigned int NGFNFHONGIM_TypeDefinitionIndex = 11789;

class NGFNFHONGIM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::NIMJIJIDKDA*>* OJMBOGGMIKO; // 0x18
	::IBFMIJNOMAO DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFNFHONGIM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFNFHONGIM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFNFHONGIM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFNFHONGIM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFNFHONGIM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NGFNFHONGIM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NGFNFHONGIM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFNFHONGIM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NGFNFHONGIM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFNFHONGIM_CHLEALKAOJO_OFFSET))(this);
	}

	::NIMJIJIDKDA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NIMJIJIDKDA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGFNFHONGIM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFNFHONGIM_NAMKJOJBAOA_OFFSET))(this);
	}
};
