#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFNIJLNGFGO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class INNMKLBJNOM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AFCELAMKBGO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x177460D0)
#define AFCELAMKBGO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17745E90)
#define AFCELAMKBGO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17746010)
#define AFCELAMKBGO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x177461B0)
#define AFCELAMKBGO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17745EA0)
#define AFCELAMKBGO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17746330)
#define AFCELAMKBGO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17745AE0)
#define AFCELAMKBGO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17745AC0)
#define AFCELAMKBGO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17745DA0)
#define AFCELAMKBGO__CTOR_OFFSET UNITYSDK_OFFSET(0x177462E0)

inline static constexpr unsigned int AFCELAMKBGO_TypeDefinitionIndex = 12592;

class AFCELAMKBGO : public ::System::Object
{
public:
	::Il2CppArray<::INNMKLBJNOM*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::GFNIJLNGFGO DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCELAMKBGO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCELAMKBGO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCELAMKBGO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AFCELAMKBGO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AFCELAMKBGO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCELAMKBGO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCELAMKBGO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCELAMKBGO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCELAMKBGO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AFCELAMKBGO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
