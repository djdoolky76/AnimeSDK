#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IODPEALFDPF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ANCKDPOLJPM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MIGMONCKHDI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17345C20)
#define MIGMONCKHDI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x173459F0)
#define MIGMONCKHDI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17345B60)
#define MIGMONCKHDI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17345D00)
#define MIGMONCKHDI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17345A00)
#define MIGMONCKHDI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17345E80)
#define MIGMONCKHDI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17345650)
#define MIGMONCKHDI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17345630)
#define MIGMONCKHDI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17345910)
#define MIGMONCKHDI__CTOR_OFFSET UNITYSDK_OFFSET(0x17345E30)

inline static constexpr unsigned int MIGMONCKHDI_TypeDefinitionIndex = 9379;

class MIGMONCKHDI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::ANCKDPOLJPM*>* OJMBOGGMIKO; // 0x20
	::IODPEALFDPF DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGMONCKHDI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGMONCKHDI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGMONCKHDI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIGMONCKHDI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MIGMONCKHDI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGMONCKHDI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGMONCKHDI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGMONCKHDI_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIGMONCKHDI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGMONCKHDI_CHLEALKAOJO_OFFSET))(this);
	}
};
