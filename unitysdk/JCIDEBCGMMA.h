#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAJPFEFBGHN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NODJLGNBFID;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JCIDEBCGMMA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152F3FB0)
#define JCIDEBCGMMA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152F3D30)
#define JCIDEBCGMMA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152F3D40)
#define JCIDEBCGMMA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152F3E00)
#define JCIDEBCGMMA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152F3F30)
#define JCIDEBCGMMA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152F4390)
#define JCIDEBCGMMA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152F40E0)
#define JCIDEBCGMMA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152F3980)
#define JCIDEBCGMMA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152F45C0)
#define JCIDEBCGMMA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152F3960)
#define JCIDEBCGMMA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152F3C40)
#define JCIDEBCGMMA__CTOR_OFFSET UNITYSDK_OFFSET(0x152F4090)

inline static constexpr unsigned int JCIDEBCGMMA_TypeDefinitionIndex = 11651;

class JCIDEBCGMMA : public ::System::Object
{
public:
	::Il2CppArray<::NODJLGNBFID*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::EAJPFEFBGHN DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIDEBCGMMA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_CHLEALKAOJO_OFFSET))(this);
	}

	::NODJLGNBFID* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NODJLGNBFID*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIDEBCGMMA_NAMKJOJBAOA_OFFSET))(this);
	}
};
