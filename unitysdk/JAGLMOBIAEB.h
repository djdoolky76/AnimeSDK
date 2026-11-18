#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGINNPINAGM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EPFKJKGOGFP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JAGLMOBIAEB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152F1930)
#define JAGLMOBIAEB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152F1700)
#define JAGLMOBIAEB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152F1870)
#define JAGLMOBIAEB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152F1A10)
#define JAGLMOBIAEB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152F1710)
#define JAGLMOBIAEB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152F1D80)
#define JAGLMOBIAEB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152F1B90)
#define JAGLMOBIAEB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152F1360)
#define JAGLMOBIAEB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152F1D60)
#define JAGLMOBIAEB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152F1340)
#define JAGLMOBIAEB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152F1620)
#define JAGLMOBIAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x152F1B40)

inline static constexpr unsigned int JAGLMOBIAEB_TypeDefinitionIndex = 15204;

class JAGLMOBIAEB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::AGINNPINAGM DHDJDGFNBOA; // 0x18
	::Il2CppArray<::EPFKJKGOGFP*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGLMOBIAEB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_NAMKJOJBAOA_OFFSET))(this);
	}

	::EPFKJKGOGFP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EPFKJKGOGFP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JAGLMOBIAEB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
