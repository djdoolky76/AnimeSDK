#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCIMIOMOECN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PIHMLHJABHA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IEPFCFBGMIE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B622310)
#define IEPFCFBGMIE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B6220E0)
#define IEPFCFBGMIE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B622250)
#define IEPFCFBGMIE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B6223F0)
#define IEPFCFBGMIE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B6220F0)
#define IEPFCFBGMIE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B622570)
#define IEPFCFBGMIE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B621D40)
#define IEPFCFBGMIE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B621D20)
#define IEPFCFBGMIE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B622000)
#define IEPFCFBGMIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B622520)

inline static constexpr unsigned int IEPFCFBGMIE_TypeDefinitionIndex = 16918;

class IEPFCFBGMIE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::PIHMLHJABHA*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::GCIMIOMOECN DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPFCFBGMIE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IEPFCFBGMIE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
