#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GALDCCMAMNN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GBLGHIIBMED;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MHGBMOGLCJN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF5F100)
#define MHGBMOGLCJN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF5EEC0)
#define MHGBMOGLCJN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF5F040)
#define MHGBMOGLCJN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF5F1E0)
#define MHGBMOGLCJN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF5EED0)
#define MHGBMOGLCJN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BF5F530)
#define MHGBMOGLCJN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF5F360)
#define MHGBMOGLCJN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF5EB10)
#define MHGBMOGLCJN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF5F760)
#define MHGBMOGLCJN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF5EAF0)
#define MHGBMOGLCJN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF5EDD0)
#define MHGBMOGLCJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5F310)

inline static constexpr unsigned int MHGBMOGLCJN_TypeDefinitionIndex = 14829;

class MHGBMOGLCJN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::GALDCCMAMNN DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::GBLGHIIBMED*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGBMOGLCJN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_CHLEALKAOJO_OFFSET))(this);
	}

	::GBLGHIIBMED* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GBLGHIIBMED*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGBMOGLCJN_NAMKJOJBAOA_OFFSET))(this);
	}
};
