#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KGNOFNGFOFJ.h"
#include "unitysdk/System/Object.h"

class PAPNFKBAHFN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMKIPBNAMOG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152FA4F0)
#define JMKIPBNAMOG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152FA2B0)
#define JMKIPBNAMOG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152FA430)
#define JMKIPBNAMOG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152FA5D0)
#define JMKIPBNAMOG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152FA2C0)
#define JMKIPBNAMOG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152FA710)
#define JMKIPBNAMOG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152F9F00)
#define JMKIPBNAMOG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152F9EE0)
#define JMKIPBNAMOG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152FA1C0)
#define JMKIPBNAMOG__CTOR_OFFSET UNITYSDK_OFFSET(0x152FA700)

inline static constexpr unsigned int JMKIPBNAMOG_TypeDefinitionIndex = 13555;

class JMKIPBNAMOG : public ::System::Object
{
public:
	::KGNOFNGFOFJ DHDJDGFNBOA; // 0x10
	::Il2CppArray<::PAPNFKBAHFN*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIPBNAMOG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIPBNAMOG_CHLEALKAOJO_OFFSET))(this);
	}
};
