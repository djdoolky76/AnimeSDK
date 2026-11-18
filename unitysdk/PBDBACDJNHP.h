#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAFCKJIHFBK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AJIMGKPDCLO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PBDBACDJNHP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EDBC580)
#define PBDBACDJNHP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EDBC210)
#define PBDBACDJNHP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EDBC390)
#define PBDBACDJNHP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EDBC450)
#define PBDBACDJNHP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EDBC220)
#define PBDBACDJNHP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EDBC6B0)
#define PBDBACDJNHP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EDBBE60)
#define PBDBACDJNHP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EDBBE40)
#define PBDBACDJNHP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EDBC120)
#define PBDBACDJNHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDBC660)

inline static constexpr unsigned int PBDBACDJNHP_TypeDefinitionIndex = 17468;

class PBDBACDJNHP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::AJIMGKPDCLO*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::DAFCKJIHFBK DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDBACDJNHP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDBACDJNHP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDBACDJNHP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PBDBACDJNHP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PBDBACDJNHP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDBACDJNHP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDBACDJNHP_FINALIZE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDBACDJNHP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PBDBACDJNHP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDBACDJNHP_CHLEALKAOJO_OFFSET))(this);
	}
};
