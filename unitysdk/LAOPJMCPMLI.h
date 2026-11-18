#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCJPFIPIBIH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ACMLGICAJJE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LAOPJMCPMLI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA7FFD0)
#define LAOPJMCPMLI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA7FD50)
#define LAOPJMCPMLI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA7FD60)
#define LAOPJMCPMLI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA7FE20)
#define LAOPJMCPMLI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA7FF50)
#define LAOPJMCPMLI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA80100)
#define LAOPJMCPMLI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA7F9A0)
#define LAOPJMCPMLI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA7F980)
#define LAOPJMCPMLI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA7FC60)
#define LAOPJMCPMLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA800B0)

inline static constexpr unsigned int LAOPJMCPMLI_TypeDefinitionIndex = 12580;

class LAOPJMCPMLI : public ::System::Object
{
public:
	::Il2CppArray<::ACMLGICAJJE*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::CCJPFIPIBIH DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOPJMCPMLI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOPJMCPMLI_CHLEALKAOJO_OFFSET))(this);
	}
};
