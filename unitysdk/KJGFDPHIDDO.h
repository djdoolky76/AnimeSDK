#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIFHHEKGLMJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GPCGJHHNGLD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KJGFDPHIDDO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19D9A1E0)
#define KJGFDPHIDDO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19D99FB0)
#define KJGFDPHIDDO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19D9A120)
#define KJGFDPHIDDO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19D9A2C0)
#define KJGFDPHIDDO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19D99FC0)
#define KJGFDPHIDDO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19D9A630)
#define KJGFDPHIDDO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19D9A460)
#define KJGFDPHIDDO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19D99C10)
#define KJGFDPHIDDO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19D9A440)
#define KJGFDPHIDDO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19D99BF0)
#define KJGFDPHIDDO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19D99ED0)
#define KJGFDPHIDDO__CTOR_OFFSET UNITYSDK_OFFSET(0x19D9A3F0)

inline static constexpr unsigned int KJGFDPHIDDO_TypeDefinitionIndex = 13734;

class KJGFDPHIDDO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::GPCGJHHNGLD*>* OJMBOGGMIKO; // 0x18
	::AIFHHEKGLMJ DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFDPHIDDO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GPCGJHHNGLD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GPCGJHHNGLD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJGFDPHIDDO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
