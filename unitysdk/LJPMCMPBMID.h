#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKHODACFIMB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KGINIMEIKCA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LJPMCMPBMID_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B304DF0)
#define LJPMCMPBMID_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B304B70)
#define LJPMCMPBMID_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B304B80)
#define LJPMCMPBMID_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B304C40)
#define LJPMCMPBMID_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B304D70)
#define LJPMCMPBMID_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B3051F0)
#define LJPMCMPBMID_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B304F20)
#define LJPMCMPBMID_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B3047D0)
#define LJPMCMPBMID_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B3051D0)
#define LJPMCMPBMID_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B3047B0)
#define LJPMCMPBMID_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B304A90)
#define LJPMCMPBMID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B304ED0)

inline static constexpr unsigned int LJPMCMPBMID_TypeDefinitionIndex = 10137;

class LJPMCMPBMID : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::KGINIMEIKCA*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::CKHODACFIMB DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPMCMPBMID__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPMCMPBMID_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPMCMPBMID_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPMCMPBMID_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPMCMPBMID_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LJPMCMPBMID_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LJPMCMPBMID_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPMCMPBMID_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LJPMCMPBMID_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPMCMPBMID_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPMCMPBMID_CHLEALKAOJO_OFFSET))(this);
	}

	::KGINIMEIKCA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KGINIMEIKCA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJPMCMPBMID_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
