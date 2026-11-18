#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DELCPLBGDBC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LILDAFNCEPF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PCPOCAPALDG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB40460)
#define PCPOCAPALDG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB401E0)
#define PCPOCAPALDG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB401F0)
#define PCPOCAPALDG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB402B0)
#define PCPOCAPALDG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB403E0)
#define PCPOCAPALDG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB40590)
#define PCPOCAPALDG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB407E0)
#define PCPOCAPALDG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB3FE30)
#define PCPOCAPALDG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB407C0)
#define PCPOCAPALDG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB3FE10)
#define PCPOCAPALDG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB400F0)
#define PCPOCAPALDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB40540)

inline static constexpr unsigned int PCPOCAPALDG_TypeDefinitionIndex = 14954;

class PCPOCAPALDG : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::DELCPLBGDBC DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::LILDAFNCEPF*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPOCAPALDG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPOCAPALDG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPOCAPALDG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPOCAPALDG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPOCAPALDG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PCPOCAPALDG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PCPOCAPALDG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPOCAPALDG_BHLAEBMEOLO_OFFSET))(this);
	}

	::LILDAFNCEPF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LILDAFNCEPF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCPOCAPALDG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPOCAPALDG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PCPOCAPALDG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCPOCAPALDG_CHLEALKAOJO_OFFSET))(this);
	}
};
