#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJMNGMNHFDM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IKPIPFFFFMP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AIEGENLDPEK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x194EB0F0)
#define AIEGENLDPEK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x194EAEB0)
#define AIEGENLDPEK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x194EB030)
#define AIEGENLDPEK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x194EB1D0)
#define AIEGENLDPEK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x194EAEC0)
#define AIEGENLDPEK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x194EB540)
#define AIEGENLDPEK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x194EB350)
#define AIEGENLDPEK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x194EAB00)
#define AIEGENLDPEK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x194EB520)
#define AIEGENLDPEK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x194EAAE0)
#define AIEGENLDPEK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x194EADC0)
#define AIEGENLDPEK__CTOR_OFFSET UNITYSDK_OFFSET(0x194EB300)

inline static constexpr unsigned int AIEGENLDPEK_TypeDefinitionIndex = 10804;

class AIEGENLDPEK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::CJMNGMNHFDM DHDJDGFNBOA; // 0x20
	::Il2CppArray<::IKPIPFFFFMP*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGENLDPEK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGENLDPEK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGENLDPEK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AIEGENLDPEK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AIEGENLDPEK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGENLDPEK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGENLDPEK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGENLDPEK_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AIEGENLDPEK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGENLDPEK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEGENLDPEK_CHLEALKAOJO_OFFSET))(this);
	}

	::IKPIPFFFFMP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IKPIPFFFFMP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIEGENLDPEK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
