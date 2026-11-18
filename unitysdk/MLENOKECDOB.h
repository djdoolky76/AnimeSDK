#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDEAONEHGOO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CFGFGIBNKKN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MLENOKECDOB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCE16C0)
#define MLENOKECDOB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CCE1480)
#define MLENOKECDOB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CCE1600)
#define MLENOKECDOB_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1CCE1B20)
#define MLENOKECDOB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CCE17A0)
#define MLENOKECDOB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CCE1490)
#define MLENOKECDOB_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1CCE1940)
#define MLENOKECDOB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CCE1BF0)
#define MLENOKECDOB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCE10D0)
#define MLENOKECDOB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CCE1920)
#define MLENOKECDOB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CCE10B0)
#define MLENOKECDOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCE1390)
#define MLENOKECDOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE18D0)

inline static constexpr unsigned int MLENOKECDOB_TypeDefinitionIndex = 14645;

class MLENOKECDOB : public ::System::Object
{
public:
	::GDEAONEHGOO DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::Il2CppArray<::CFGFGIBNKKN*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MLENOKECDOB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MLENOKECDOB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB_NAMKJOJBAOA_OFFSET))(this);
	}

	::CFGFGIBNKKN* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::CFGFGIBNKKN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MLENOKECDOB_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::CFGFGIBNKKN*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::CFGFGIBNKKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLENOKECDOB_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MLENOKECDOB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
