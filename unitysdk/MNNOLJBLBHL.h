#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NNHHIEKDLKA.h"
#include "unitysdk/System/Object.h"

class HOMLOCNJMPE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MNNOLJBLBHL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18E11C50)
#define MNNOLJBLBHL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18E11A10)
#define MNNOLJBLBHL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18E11B90)
#define MNNOLJBLBHL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18E11D30)
#define MNNOLJBLBHL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18E11A20)
#define MNNOLJBLBHL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18E11EB0)
#define MNNOLJBLBHL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18E12100)
#define MNNOLJBLBHL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18E11660)
#define MNNOLJBLBHL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18E120E0)
#define MNNOLJBLBHL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18E11640)
#define MNNOLJBLBHL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18E11920)
#define MNNOLJBLBHL__CTOR_OFFSET UNITYSDK_OFFSET(0x18E11E60)

inline static constexpr unsigned int MNNOLJBLBHL_TypeDefinitionIndex = 12067;

class MNNOLJBLBHL : public ::System::Object
{
public:
	::NNHHIEKDLKA DHDJDGFNBOA; // 0x10
	::Il2CppArray<::HOMLOCNJMPE*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNOLJBLBHL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_FINALIZE_OFFSET))(this);
	}

	::HOMLOCNJMPE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HOMLOCNJMPE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNNOLJBLBHL_NAMKJOJBAOA_OFFSET))(this);
	}
};
