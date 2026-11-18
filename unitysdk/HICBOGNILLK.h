#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOIGPNFFIPG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HOAOJDJJHFB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HICBOGNILLK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17474F10)
#define HICBOGNILLK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17474CD0)
#define HICBOGNILLK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17474E50)
#define HICBOGNILLK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17474FF0)
#define HICBOGNILLK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17474CE0)
#define HICBOGNILLK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17475170)
#define HICBOGNILLK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17474920)
#define HICBOGNILLK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17474900)
#define HICBOGNILLK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17474BE0)
#define HICBOGNILLK__CTOR_OFFSET UNITYSDK_OFFSET(0x17475120)

inline static constexpr unsigned int HICBOGNILLK_TypeDefinitionIndex = 13861;

class HICBOGNILLK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::BOIGPNFFIPG DHDJDGFNBOA; // 0x18
	::Il2CppArray<::HOAOJDJJHFB*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBOGNILLK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBOGNILLK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBOGNILLK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HICBOGNILLK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HICBOGNILLK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBOGNILLK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBOGNILLK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBOGNILLK_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HICBOGNILLK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICBOGNILLK_CHLEALKAOJO_OFFSET))(this);
	}
};
