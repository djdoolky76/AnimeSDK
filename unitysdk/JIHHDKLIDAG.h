#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHPJBIKDFNG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FMLJBCBAPCF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JIHHDKLIDAG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1748C810)
#define JIHHDKLIDAG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1748C5E0)
#define JIHHDKLIDAG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1748C750)
#define JIHHDKLIDAG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1748C8F0)
#define JIHHDKLIDAG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1748C5F0)
#define JIHHDKLIDAG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1748CA70)
#define JIHHDKLIDAG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1748CCC0)
#define JIHHDKLIDAG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1748C240)
#define JIHHDKLIDAG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1748CCA0)
#define JIHHDKLIDAG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1748C220)
#define JIHHDKLIDAG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1748C500)
#define JIHHDKLIDAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1748CA20)

inline static constexpr unsigned int JIHHDKLIDAG_TypeDefinitionIndex = 11060;

class JIHHDKLIDAG : public ::System::Object
{
public:
	::HHPJBIKDFNG DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::FMLJBCBAPCF*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHHDKLIDAG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_FINALIZE_OFFSET))(this);
	}

	::FMLJBCBAPCF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FMLJBCBAPCF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHHDKLIDAG_NAMKJOJBAOA_OFFSET))(this);
	}
};
