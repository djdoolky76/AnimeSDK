#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MNNEFECEBAF.h"
#include "unitysdk/System/Object.h"

class NDKNALMDCGD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFIECJEKFHP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1579E9A0)
#define DFIECJEKFHP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1579E760)
#define DFIECJEKFHP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1579E8E0)
#define DFIECJEKFHP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1579EA80)
#define DFIECJEKFHP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1579E770)
#define DFIECJEKFHP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1579EDD0)
#define DFIECJEKFHP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1579EC00)
#define DFIECJEKFHP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1579E3B0)
#define DFIECJEKFHP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1579F000)
#define DFIECJEKFHP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1579E390)
#define DFIECJEKFHP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1579E670)
#define DFIECJEKFHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1579EBB0)

inline static constexpr unsigned int DFIECJEKFHP_TypeDefinitionIndex = 16465;

class DFIECJEKFHP : public ::System::Object
{
public:
	::Il2CppArray<::NDKNALMDCGD*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::MNNEFECEBAF DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIECJEKFHP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIECJEKFHP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIECJEKFHP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFIECJEKFHP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFIECJEKFHP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIECJEKFHP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIECJEKFHP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIECJEKFHP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFIECJEKFHP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIECJEKFHP_CHLEALKAOJO_OFFSET))(this);
	}

	::NDKNALMDCGD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NDKNALMDCGD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFIECJEKFHP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFIECJEKFHP_NAMKJOJBAOA_OFFSET))(this);
	}
};
