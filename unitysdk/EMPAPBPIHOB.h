#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDBJJOKAJHL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MGNIEFIGBKO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EMPAPBPIHOB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AAB560)
#define EMPAPBPIHOB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AAB330)
#define EMPAPBPIHOB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AAB4A0)
#define EMPAPBPIHOB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AAB640)
#define EMPAPBPIHOB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AAB340)
#define EMPAPBPIHOB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AAB7C0)
#define EMPAPBPIHOB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AAAF90)
#define EMPAPBPIHOB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AAAF70)
#define EMPAPBPIHOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AAB250)
#define EMPAPBPIHOB__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAB770)

inline static constexpr unsigned int EMPAPBPIHOB_TypeDefinitionIndex = 17681;

class EMPAPBPIHOB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::MGNIEFIGBKO*>* OJMBOGGMIKO; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::EDBJJOKAJHL DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPAPBPIHOB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPAPBPIHOB_CHLEALKAOJO_OFFSET))(this);
	}
};
