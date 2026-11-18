#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEHNELIGGBA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MFNIGGONGAG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HDAMOGLBNMO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17BF79F0)
#define HDAMOGLBNMO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17BF7770)
#define HDAMOGLBNMO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17BF7780)
#define HDAMOGLBNMO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17BF7840)
#define HDAMOGLBNMO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17BF7970)
#define HDAMOGLBNMO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17BF7B40)
#define HDAMOGLBNMO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17BF7D70)
#define HDAMOGLBNMO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17BF73D0)
#define HDAMOGLBNMO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17BF7B20)
#define HDAMOGLBNMO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17BF73B0)
#define HDAMOGLBNMO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17BF7690)
#define HDAMOGLBNMO__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF7AD0)

inline static constexpr unsigned int HDAMOGLBNMO_TypeDefinitionIndex = 10909;

class HDAMOGLBNMO : public ::System::Object
{
public:
	::CEHNELIGGBA DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::MFNIGGONGAG*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAMOGLBNMO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_NAMKJOJBAOA_OFFSET))(this);
	}

	::MFNIGGONGAG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MFNIGGONGAG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HDAMOGLBNMO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
