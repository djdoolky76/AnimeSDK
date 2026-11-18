#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKECBEGEENJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JHEBOKAMEMA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FBKLBDPGGEO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B85F140)
#define FBKLBDPGGEO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B85EF00)
#define FBKLBDPGGEO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B85F080)
#define FBKLBDPGGEO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B85F220)
#define FBKLBDPGGEO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B85EF10)
#define FBKLBDPGGEO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B85F3A0)
#define FBKLBDPGGEO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B85EB50)
#define FBKLBDPGGEO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B85EB30)
#define FBKLBDPGGEO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B85EE10)
#define FBKLBDPGGEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85F350)

inline static constexpr unsigned int FBKLBDPGGEO_TypeDefinitionIndex = 16223;

class FBKLBDPGGEO : public ::System::Object
{
public:
	::Il2CppArray<::JHEBOKAMEMA*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::CKECBEGEENJ DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLBDPGGEO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FBKLBDPGGEO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
