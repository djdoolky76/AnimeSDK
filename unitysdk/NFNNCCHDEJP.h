#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELNPCMBKJNM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HDHELFDOAKE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NFNNCCHDEJP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B329BC0)
#define NFNNCCHDEJP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B329940)
#define NFNNCCHDEJP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B329950)
#define NFNNCCHDEJP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B329A10)
#define NFNNCCHDEJP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B329B40)
#define NFNNCCHDEJP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B329FC0)
#define NFNNCCHDEJP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B329CF0)
#define NFNNCCHDEJP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B329590)
#define NFNNCCHDEJP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B329FA0)
#define NFNNCCHDEJP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B329570)
#define NFNNCCHDEJP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B329850)
#define NFNNCCHDEJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B329CA0)

inline static constexpr unsigned int NFNNCCHDEJP_TypeDefinitionIndex = 10533;

class NFNNCCHDEJP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::ELNPCMBKJNM DHDJDGFNBOA; // 0x18
	::Il2CppArray<::HDHELFDOAKE*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNCCHDEJP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_NAMKJOJBAOA_OFFSET))(this);
	}

	::HDHELFDOAKE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HDHELFDOAKE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNNCCHDEJP_CHLEALKAOJO_OFFSET))(this);
	}
};
