#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFCLDMJJGN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MBAFPLGAJPG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CGLDHAKAEPA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A586C00)
#define CGLDHAKAEPA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5869C0)
#define CGLDHAKAEPA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A586B40)
#define CGLDHAKAEPA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A586CE0)
#define CGLDHAKAEPA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5869D0)
#define CGLDHAKAEPA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A586E60)
#define CGLDHAKAEPA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5870B0)
#define CGLDHAKAEPA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A586610)
#define CGLDHAKAEPA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A587090)
#define CGLDHAKAEPA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5865F0)
#define CGLDHAKAEPA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5868D0)
#define CGLDHAKAEPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A586E10)

inline static constexpr unsigned int CGLDHAKAEPA_TypeDefinitionIndex = 10740;

class CGLDHAKAEPA : public ::System::Object
{
public:
	::BCFCLDMJJGN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::MBAFPLGAJPG*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHAKAEPA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_FINALIZE_OFFSET))(this);
	}

	::MBAFPLGAJPG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MBAFPLGAJPG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLDHAKAEPA_CHLEALKAOJO_OFFSET))(this);
	}
};
