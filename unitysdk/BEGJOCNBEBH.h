#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOAFKPDDJDJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ANHBNMIKPCE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BEGJOCNBEBH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BE4D20)
#define BEGJOCNBEBH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BE4AA0)
#define BEGJOCNBEBH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BE4AB0)
#define BEGJOCNBEBH_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19BE5300)
#define BEGJOCNBEBH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BE4B70)
#define BEGJOCNBEBH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BE4CA0)
#define BEGJOCNBEBH_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19BE5120)
#define BEGJOCNBEBH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19BE4E70)
#define BEGJOCNBEBH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BE4700)
#define BEGJOCNBEBH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19BE4E50)
#define BEGJOCNBEBH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BE46E0)
#define BEGJOCNBEBH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BE49C0)
#define BEGJOCNBEBH__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE4E00)

inline static constexpr unsigned int BEGJOCNBEBH_TypeDefinitionIndex = 13953;

class BEGJOCNBEBH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::EOAFKPDDJDJ DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::ANHBNMIKPCE*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ANHBNMIKPCE* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::ANHBNMIKPCE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::ANHBNMIKPCE*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::ANHBNMIKPCE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGJOCNBEBH_EJABHIAHIAN_OFFSET))(this);
	}
};
