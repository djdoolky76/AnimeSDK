#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MFLACNEIDIE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class EELNOFONLMD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EGELPGHPGOA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F47910)
#define EGELPGHPGOA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F476D0)
#define EGELPGHPGOA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F47850)
#define EGELPGHPGOA_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19F47D10)
#define EGELPGHPGOA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F479F0)
#define EGELPGHPGOA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F476E0)
#define EGELPGHPGOA_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19F47E00)
#define EGELPGHPGOA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F47B70)
#define EGELPGHPGOA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F47350)
#define EGELPGHPGOA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19F47DE0)
#define EGELPGHPGOA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F47330)
#define EGELPGHPGOA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F475E0)
#define EGELPGHPGOA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F47B20)

inline static constexpr unsigned int EGELPGHPGOA_TypeDefinitionIndex = 15766;

class EGELPGHPGOA : public ::System::Object
{
public:
	::MFLACNEIDIE DHDJDGFNBOA; // 0x10
	::Il2CppArray<::EELNOFONLMD*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EGELPGHPGOA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EGELPGHPGOA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EGELPGHPGOA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::EELNOFONLMD*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::EELNOFONLMD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGELPGHPGOA_CHLEALKAOJO_OFFSET))(this);
	}

	::EELNOFONLMD* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::EELNOFONLMD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGELPGHPGOA_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
