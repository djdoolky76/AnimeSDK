#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLODHBGJNEA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JMPAGPKPKBH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DFJDNJNOJEJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1950A2C0)
#define DFJDNJNOJEJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1950A080)
#define DFJDNJNOJEJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1950A200)
#define DFJDNJNOJEJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1950A3A0)
#define DFJDNJNOJEJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1950A090)
#define DFJDNJNOJEJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1950A710)
#define DFJDNJNOJEJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1950A520)
#define DFJDNJNOJEJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19509CD0)
#define DFJDNJNOJEJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1950A6F0)
#define DFJDNJNOJEJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19509CB0)
#define DFJDNJNOJEJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19509F90)
#define DFJDNJNOJEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1950A4D0)

inline static constexpr unsigned int DFJDNJNOJEJ_TypeDefinitionIndex = 15259;

class DFJDNJNOJEJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::BLODHBGJNEA DHDJDGFNBOA; // 0x18
	::Il2CppArray<::JMPAGPKPKBH*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::JMPAGPKPKBH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JMPAGPKPKBH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJDNJNOJEJ_CHLEALKAOJO_OFFSET))(this);
	}
};
