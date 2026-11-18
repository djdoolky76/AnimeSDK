#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PHFCIBBCLDL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class GHHPOILEBPJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FKDKCEHLFGK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4C59E0)
#define FKDKCEHLFGK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4C57A0)
#define FKDKCEHLFGK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4C5920)
#define FKDKCEHLFGK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4C5AC0)
#define FKDKCEHLFGK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4C57B0)
#define FKDKCEHLFGK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4C5DE0)
#define FKDKCEHLFGK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4C5C40)
#define FKDKCEHLFGK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4C5420)
#define FKDKCEHLFGK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4C5400)
#define FKDKCEHLFGK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4C56B0)
#define FKDKCEHLFGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C5BF0)

inline static constexpr unsigned int FKDKCEHLFGK_TypeDefinitionIndex = 16735;

class FKDKCEHLFGK : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x20
	::PHFCIBBCLDL DHDJDGFNBOA; // 0x28
	::Il2CppArray<::GHHPOILEBPJ*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDKCEHLFGK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GHHPOILEBPJ* IFDPKDOFOJD(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::GHHPOILEBPJ*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FKDKCEHLFGK_IFDPKDOFOJD_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}
};
