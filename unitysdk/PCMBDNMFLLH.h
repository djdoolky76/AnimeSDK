#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LJPNGLOBEBG.h"
#include "unitysdk/System/Object.h"

class DNNCABMOJKG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PCMBDNMFLLH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EC83080)
#define PCMBDNMFLLH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EC82E00)
#define PCMBDNMFLLH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EC82E10)
#define PCMBDNMFLLH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EC82ED0)
#define PCMBDNMFLLH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EC83000)
#define PCMBDNMFLLH_KIPLFEENCNN_OFFSET UNITYSDK_OFFSET(0x1EC831B0)
#define PCMBDNMFLLH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EC833A0)
#define PCMBDNMFLLH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EC82A60)
#define PCMBDNMFLLH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EC82A40)
#define PCMBDNMFLLH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EC82D20)
#define PCMBDNMFLLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC83160)

inline static constexpr unsigned int PCMBDNMFLLH_TypeDefinitionIndex = 15961;

class PCMBDNMFLLH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::LJPNGLOBEBG DHDJDGFNBOA; // 0x18
	::Il2CppArray<::DNNCABMOJKG*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMBDNMFLLH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_BHLAEBMEOLO_OFFSET))(this);
	}

	::DNNCABMOJKG* KIPLFEENCNN(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DNNCABMOJKG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_KIPLFEENCNN_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PCMBDNMFLLH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
