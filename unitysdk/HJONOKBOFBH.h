#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OPNCCPCJHMP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class GIOPLKCJHMP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HJONOKBOFBH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4DFEA0)
#define HJONOKBOFBH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4DFC20)
#define HJONOKBOFBH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4DFC30)
#define HJONOKBOFBH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4DFCF0)
#define HJONOKBOFBH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4DFE20)
#define HJONOKBOFBH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4DFFD0)
#define HJONOKBOFBH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4E0440)
#define HJONOKBOFBH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4DF8A0)
#define HJONOKBOFBH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B4E0420)
#define HJONOKBOFBH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4DF880)
#define HJONOKBOFBH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4DFB30)
#define HJONOKBOFBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DFF80)

inline static constexpr unsigned int HJONOKBOFBH_TypeDefinitionIndex = 9566;

class HJONOKBOFBH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::GIOPLKCJHMP*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x20
	::OPNCCPCJHMP DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONOKBOFBH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONOKBOFBH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONOKBOFBH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONOKBOFBH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONOKBOFBH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HJONOKBOFBH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HJONOKBOFBH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONOKBOFBH_BHLAEBMEOLO_OFFSET))(this);
	}

	::GIOPLKCJHMP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF, ::System::Int32 OIKFFGKDHME)
	{
		return ((::GIOPLKCJHMP*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HJONOKBOFBH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF, OIKFFGKDHME);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONOKBOFBH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJONOKBOFBH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HJONOKBOFBH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
