#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCBMLFHGCJK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PNFGDMEAHOO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HHDMHLFIKHM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B610FF0)
#define HHDMHLFIKHM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B610DB0)
#define HHDMHLFIKHM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B610F30)
#define HHDMHLFIKHM_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1B611250)
#define HHDMHLFIKHM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B6110D0)
#define HHDMHLFIKHM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B610DC0)
#define HHDMHLFIKHM_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1B611340)
#define HHDMHLFIKHM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B611550)
#define HHDMHLFIKHM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B610A00)
#define HHDMHLFIKHM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B611320)
#define HHDMHLFIKHM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B6109E0)
#define HHDMHLFIKHM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B610CC0)
#define HHDMHLFIKHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B611200)

inline static constexpr unsigned int HHDMHLFIKHM_TypeDefinitionIndex = 10310;

class HHDMHLFIKHM : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::PNFGDMEAHOO*>* OJMBOGGMIKO; // 0x18
	::CCBMLFHGCJK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::PNFGDMEAHOO*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::PNFGDMEAHOO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_NAMKJOJBAOA_OFFSET))(this);
	}

	::PNFGDMEAHOO* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::PNFGDMEAHOO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HHDMHLFIKHM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
