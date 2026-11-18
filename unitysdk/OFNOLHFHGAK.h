#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANCKBNPFDHN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PMEJPJOAEGO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OFNOLHFHGAK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x191355C0)
#define OFNOLHFHGAK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19135390)
#define OFNOLHFHGAK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19135500)
#define OFNOLHFHGAK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x191356A0)
#define OFNOLHFHGAK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x191353A0)
#define OFNOLHFHGAK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19135820)
#define OFNOLHFHGAK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19134FF0)
#define OFNOLHFHGAK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19134FD0)
#define OFNOLHFHGAK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x191352B0)
#define OFNOLHFHGAK__CTOR_OFFSET UNITYSDK_OFFSET(0x191357D0)

inline static constexpr unsigned int OFNOLHFHGAK_TypeDefinitionIndex = 14512;

class OFNOLHFHGAK : public ::System::Object
{
public:
	::ANCKBNPFDHN DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::PMEJPJOAEGO*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNOLHFHGAK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNOLHFHGAK_CHLEALKAOJO_OFFSET))(this);
	}
};
