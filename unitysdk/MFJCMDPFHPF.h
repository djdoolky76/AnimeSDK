#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKGIFPMJAEP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CHPOOBNHCGO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MFJCMDPFHPF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19577B00)
#define MFJCMDPFHPF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195778D0)
#define MFJCMDPFHPF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19577A40)
#define MFJCMDPFHPF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19577BE0)
#define MFJCMDPFHPF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195778E0)
#define MFJCMDPFHPF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19577D60)
#define MFJCMDPFHPF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19577530)
#define MFJCMDPFHPF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19577510)
#define MFJCMDPFHPF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195777F0)
#define MFJCMDPFHPF__CTOR_OFFSET UNITYSDK_OFFSET(0x19577D10)

inline static constexpr unsigned int MFJCMDPFHPF_TypeDefinitionIndex = 11906;

class MFJCMDPFHPF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::CHPOOBNHCGO*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::DKGIFPMJAEP DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJCMDPFHPF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFJCMDPFHPF_CHLEALKAOJO_OFFSET))(this);
	}
};
