#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJDCDEKBOAL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IBPCDEKGHCJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IFNAIONNKKO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B624F50)
#define IFNAIONNKKO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B624D20)
#define IFNAIONNKKO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B624E90)
#define IFNAIONNKKO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B625030)
#define IFNAIONNKKO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B624D30)
#define IFNAIONNKKO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B6251B0)
#define IFNAIONNKKO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B625410)
#define IFNAIONNKKO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B624980)
#define IFNAIONNKKO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B6253F0)
#define IFNAIONNKKO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B624960)
#define IFNAIONNKKO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B624C40)
#define IFNAIONNKKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B625160)

inline static constexpr unsigned int IFNAIONNKKO_TypeDefinitionIndex = 14575;

class IFNAIONNKKO : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::HJDCDEKBOAL DHDJDGFNBOA; // 0x18
	::Il2CppArray<::IBPCDEKGHCJ*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNAIONNKKO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNAIONNKKO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNAIONNKKO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFNAIONNKKO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IFNAIONNKKO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNAIONNKKO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNAIONNKKO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNAIONNKKO_FINALIZE_OFFSET))(this);
	}

	::IBPCDEKGHCJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IBPCDEKGHCJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFNAIONNKKO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IFNAIONNKKO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNAIONNKKO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNAIONNKKO_CHLEALKAOJO_OFFSET))(this);
	}
};
