#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAFDECKDCOB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IPIMLFNDMMM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DDFNKGNLKNB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19508940)
#define DDFNKGNLKNB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19508710)
#define DDFNKGNLKNB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19508880)
#define DDFNKGNLKNB_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19508D90)
#define DDFNKGNLKNB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19508A20)
#define DDFNKGNLKNB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19508720)
#define DDFNKGNLKNB_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19508E60)
#define DDFNKGNLKNB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19508BA0)
#define DDFNKGNLKNB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19508370)
#define DDFNKGNLKNB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19508D70)
#define DDFNKGNLKNB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19508350)
#define DDFNKGNLKNB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19508630)
#define DDFNKGNLKNB__CTOR_OFFSET UNITYSDK_OFFSET(0x19508B50)

inline static constexpr unsigned int DDFNKGNLKNB_TypeDefinitionIndex = 17008;

class DDFNKGNLKNB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::BAFDECKDCOB DHDJDGFNBOA; // 0x20
	::Il2CppArray<::IPIMLFNDMMM*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::IPIMLFNDMMM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::IPIMLFNDMMM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_EJABHIAHIAN_OFFSET))(this);
	}

	::IPIMLFNDMMM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::IPIMLFNDMMM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDFNKGNLKNB_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
