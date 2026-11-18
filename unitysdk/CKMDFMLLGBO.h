#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOGOKNFKBCC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PFLMHMFLKLH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CKMDFMLLGBO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AD0890)
#define CKMDFMLLGBO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AD0650)
#define CKMDFMLLGBO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AD07D0)
#define CKMDFMLLGBO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AD0970)
#define CKMDFMLLGBO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AD0660)
#define CKMDFMLLGBO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AD0AF0)
#define CKMDFMLLGBO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AD0D40)
#define CKMDFMLLGBO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AD02A0)
#define CKMDFMLLGBO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AD0D20)
#define CKMDFMLLGBO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AD0280)
#define CKMDFMLLGBO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AD0560)
#define CKMDFMLLGBO__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD0AA0)

inline static constexpr unsigned int CKMDFMLLGBO_TypeDefinitionIndex = 12190;

class CKMDFMLLGBO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::PFLMHMFLKLH*>* OJMBOGGMIKO; // 0x28
	::FOGOKNFKBCC DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDFMLLGBO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_FINALIZE_OFFSET))(this);
	}

	::PFLMHMFLKLH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PFLMHMFLKLH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMDFMLLGBO_CHLEALKAOJO_OFFSET))(this);
	}
};
