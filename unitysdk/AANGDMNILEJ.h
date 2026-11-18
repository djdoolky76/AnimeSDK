#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABECOJENIEA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DMNOFMOEOOK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AANGDMNILEJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A159630)
#define AANGDMNILEJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A1593B0)
#define AANGDMNILEJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A1593C0)
#define AANGDMNILEJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A159480)
#define AANGDMNILEJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A1595B0)
#define AANGDMNILEJ_KIPLFEENCNN_OFFSET UNITYSDK_OFFSET(0x1A159760)
#define AANGDMNILEJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A159980)
#define AANGDMNILEJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A159010)
#define AANGDMNILEJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A158FF0)
#define AANGDMNILEJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A1592D0)
#define AANGDMNILEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A159710)

inline static constexpr unsigned int AANGDMNILEJ_TypeDefinitionIndex = 17600;

class AANGDMNILEJ : public ::System::Object
{
public:
	::ABECOJENIEA DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::DMNOFMOEOOK*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANGDMNILEJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AANGDMNILEJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANGDMNILEJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANGDMNILEJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANGDMNILEJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AANGDMNILEJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AANGDMNILEJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANGDMNILEJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::DMNOFMOEOOK* KIPLFEENCNN(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DMNOFMOEOOK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AANGDMNILEJ_KIPLFEENCNN_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AANGDMNILEJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANGDMNILEJ_CHLEALKAOJO_OFFSET))(this);
	}
};
