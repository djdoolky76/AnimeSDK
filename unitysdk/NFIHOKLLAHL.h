#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OBPPCHBAHFO.h"
#include "unitysdk/System/Object.h"

class NKPMGBBOEBF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NFIHOKLLAHL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FD3B10)
#define NFIHOKLLAHL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FD38D0)
#define NFIHOKLLAHL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FD3A50)
#define NFIHOKLLAHL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FD3BF0)
#define NFIHOKLLAHL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FD38E0)
#define NFIHOKLLAHL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FD3D70)
#define NFIHOKLLAHL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FD3520)
#define NFIHOKLLAHL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FD3500)
#define NFIHOKLLAHL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FD37E0)
#define NFIHOKLLAHL__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD3D20)

inline static constexpr unsigned int NFIHOKLLAHL_TypeDefinitionIndex = 11723;

class NFIHOKLLAHL : public ::System::Object
{
public:
	::Il2CppArray<::NKPMGBBOEBF*>* OJMBOGGMIKO; // 0x10
	::OBPPCHBAHFO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHOKLLAHL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFIHOKLLAHL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
