#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDFHMBPCIEL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PHLGBJFLLCI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MKPGLNBEFAF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1910D0F0)
#define MKPGLNBEFAF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1910CEB0)
#define MKPGLNBEFAF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1910D030)
#define MKPGLNBEFAF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1910D1D0)
#define MKPGLNBEFAF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1910CEC0)
#define MKPGLNBEFAF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1910D350)
#define MKPGLNBEFAF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1910D5A0)
#define MKPGLNBEFAF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1910CB00)
#define MKPGLNBEFAF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1910D580)
#define MKPGLNBEFAF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1910CAE0)
#define MKPGLNBEFAF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1910CDC0)
#define MKPGLNBEFAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1910D300)

inline static constexpr unsigned int MKPGLNBEFAF_TypeDefinitionIndex = 15899;

class MKPGLNBEFAF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::HDFHMBPCIEL DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::PHLGBJFLLCI*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPGLNBEFAF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_CHLEALKAOJO_OFFSET))(this);
	}

	::PHLGBJFLLCI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PHLGBJFLLCI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPGLNBEFAF_NAMKJOJBAOA_OFFSET))(this);
	}
};
