#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJKMADGICGD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DAPBCNINEGH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GNKCCLAGLHG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152D2670)
#define GNKCCLAGLHG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152D23F0)
#define GNKCCLAGLHG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152D2400)
#define GNKCCLAGLHG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152D24C0)
#define GNKCCLAGLHG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152D25F0)
#define GNKCCLAGLHG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x152D27A0)
#define GNKCCLAGLHG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152D29F0)
#define GNKCCLAGLHG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152D2040)
#define GNKCCLAGLHG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x152D29D0)
#define GNKCCLAGLHG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152D2020)
#define GNKCCLAGLHG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152D2300)
#define GNKCCLAGLHG__CTOR_OFFSET UNITYSDK_OFFSET(0x152D2750)

inline static constexpr unsigned int GNKCCLAGLHG_TypeDefinitionIndex = 16992;

class GNKCCLAGLHG : public ::System::Object
{
public:
	::Il2CppArray<::DAPBCNINEGH*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::EJKMADGICGD DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKCCLAGLHG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_BHLAEBMEOLO_OFFSET))(this);
	}

	::DAPBCNINEGH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DAPBCNINEGH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKCCLAGLHG_NAMKJOJBAOA_OFFSET))(this);
	}
};
