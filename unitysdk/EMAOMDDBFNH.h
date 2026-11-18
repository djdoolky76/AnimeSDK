#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFABNNCMHBF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JAMEGIPCNJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EMAOMDDBFNH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AAA8C0)
#define EMAOMDDBFNH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AAA640)
#define EMAOMDDBFNH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AAA650)
#define EMAOMDDBFNH_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x17AAAEA0)
#define EMAOMDDBFNH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AAA710)
#define EMAOMDDBFNH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AAA840)
#define EMAOMDDBFNH_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x17AAACA0)
#define EMAOMDDBFNH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AAA9F0)
#define EMAOMDDBFNH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AAA2A0)
#define EMAOMDDBFNH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17AAAE80)
#define EMAOMDDBFNH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AAA280)
#define EMAOMDDBFNH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AAA560)
#define EMAOMDDBFNH__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAA9A0)

inline static constexpr unsigned int EMAOMDDBFNH_TypeDefinitionIndex = 15439;

class EMAOMDDBFNH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::JAMEGIPCNJP*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::BFABNNCMHBF DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_CHLEALKAOJO_OFFSET))(this);
	}

	::JAMEGIPCNJP* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::JAMEGIPCNJP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::JAMEGIPCNJP*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::JAMEGIPCNJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAOMDDBFNH_EJABHIAHIAN_OFFSET))(this);
	}
};
