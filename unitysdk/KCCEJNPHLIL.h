#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEKPJANLOFD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OGCKEPEFBEM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KCCEJNPHLIL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B143F60)
#define KCCEJNPHLIL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B143D30)
#define KCCEJNPHLIL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B143EA0)
#define KCCEJNPHLIL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B144040)
#define KCCEJNPHLIL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B143D40)
#define KCCEJNPHLIL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B1441C0)
#define KCCEJNPHLIL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B143990)
#define KCCEJNPHLIL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B143970)
#define KCCEJNPHLIL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B143C50)
#define KCCEJNPHLIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B144170)

inline static constexpr unsigned int KCCEJNPHLIL_TypeDefinitionIndex = 11314;

class KCCEJNPHLIL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::IEKPJANLOFD DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::OGCKEPEFBEM*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEJNPHLIL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCEJNPHLIL_CHLEALKAOJO_OFFSET))(this);
	}
};
