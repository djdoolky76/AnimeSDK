#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OFCDBKCIJLA.h"
#include "unitysdk/System/Object.h"

class OIOIHFLCLHC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KOHGGAPAEEB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18DF1820)
#define KOHGGAPAEEB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18DF15A0)
#define KOHGGAPAEEB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18DF15B0)
#define KOHGGAPAEEB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18DF1670)
#define KOHGGAPAEEB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18DF17A0)
#define KOHGGAPAEEB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18DF1950)
#define KOHGGAPAEEB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18DF1200)
#define KOHGGAPAEEB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18DF11E0)
#define KOHGGAPAEEB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18DF14C0)
#define KOHGGAPAEEB__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF1900)

inline static constexpr unsigned int KOHGGAPAEEB_TypeDefinitionIndex = 9536;

class KOHGGAPAEEB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::OIOIHFLCLHC*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::OFCDBKCIJLA DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHGGAPAEEB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHGGAPAEEB_CHLEALKAOJO_OFFSET))(this);
	}
};
