#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APPOLHFNOMN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NJIDNJKCADP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BPAEEAFEHEF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17F02500)
#define BPAEEAFEHEF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17F02280)
#define BPAEEAFEHEF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17F02290)
#define BPAEEAFEHEF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F02350)
#define BPAEEAFEHEF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17F02480)
#define BPAEEAFEHEF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17F02630)
#define BPAEEAFEHEF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17F01EE0)
#define BPAEEAFEHEF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17F01EC0)
#define BPAEEAFEHEF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17F021A0)
#define BPAEEAFEHEF__CTOR_OFFSET UNITYSDK_OFFSET(0x17F025E0)

inline static constexpr unsigned int BPAEEAFEHEF_TypeDefinitionIndex = 17299;

class BPAEEAFEHEF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::NJIDNJKCADP*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::APPOLHFNOMN DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAEEAFEHEF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BPAEEAFEHEF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
