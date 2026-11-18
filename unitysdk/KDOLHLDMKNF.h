#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLJLOIHOKNH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ACNPNHHFOOK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDOLHLDMKNF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BD6760)
#define KDOLHLDMKNF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BD6520)
#define KDOLHLDMKNF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BD66A0)
#define KDOLHLDMKNF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BD6840)
#define KDOLHLDMKNF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BD6530)
#define KDOLHLDMKNF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BD6A40)
#define KDOLHLDMKNF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BD6CE0)
#define KDOLHLDMKNF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BD61D0)
#define KDOLHLDMKNF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BD6CC0)
#define KDOLHLDMKNF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BD61B0)
#define KDOLHLDMKNF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BD6430)
#define KDOLHLDMKNF__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD6970)

inline static constexpr unsigned int KDOLHLDMKNF_TypeDefinitionIndex = 17772;

class KDOLHLDMKNF : public ::System::Object
{
public:
	::Il2CppArray<::ACNPNHHFOOK*>* OJMBOGGMIKO; // 0x10
	::BLJLOIHOKNH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHLDMKNF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_FINALIZE_OFFSET))(this);
	}

	::ACNPNHHFOOK* IFDPKDOFOJD(::System::String* MGMDLMBEDJF)
	{
		return ((::ACNPNHHFOOK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDOLHLDMKNF_NAMKJOJBAOA_OFFSET))(this);
	}
};
