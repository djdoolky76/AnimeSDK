#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANMGHDIKANH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IDNMMONPFAL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LHELFFIIJIA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AD5AF70)
#define LHELFFIIJIA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AD5AD30)
#define LHELFFIIJIA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AD5AEB0)
#define LHELFFIIJIA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AD5B050)
#define LHELFFIIJIA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AD5AD40)
#define LHELFFIIJIA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AD5B1D0)
#define LHELFFIIJIA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AD5A980)
#define LHELFFIIJIA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AD5A960)
#define LHELFFIIJIA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AD5AC40)
#define LHELFFIIJIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5B180)

inline static constexpr unsigned int LHELFFIIJIA_TypeDefinitionIndex = 11856;

class LHELFFIIJIA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::IDNMMONPFAL*>* OJMBOGGMIKO; // 0x28
	::ANMGHDIKANH DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHELFFIIJIA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHELFFIIJIA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHELFFIIJIA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LHELFFIIJIA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LHELFFIIJIA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHELFFIIJIA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHELFFIIJIA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHELFFIIJIA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHELFFIIJIA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LHELFFIIJIA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
