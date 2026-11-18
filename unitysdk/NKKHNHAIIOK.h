#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MGGIELGCJGI.h"
#include "unitysdk/System/Object.h"

class KBBCJMDKEJJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NKKHNHAIIOK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B32EFA0)
#define NKKHNHAIIOK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B32ED60)
#define NKKHNHAIIOK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B32EEE0)
#define NKKHNHAIIOK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B32F080)
#define NKKHNHAIIOK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B32ED70)
#define NKKHNHAIIOK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B32F200)
#define NKKHNHAIIOK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B32E9B0)
#define NKKHNHAIIOK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B32E990)
#define NKKHNHAIIOK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B32EC70)
#define NKKHNHAIIOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32F1B0)

inline static constexpr unsigned int NKKHNHAIIOK_TypeDefinitionIndex = 9704;

class NKKHNHAIIOK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::MGGIELGCJGI DHDJDGFNBOA; // 0x28
	::Il2CppArray<::KBBCJMDKEJJ*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKHNHAIIOK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NKKHNHAIIOK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
