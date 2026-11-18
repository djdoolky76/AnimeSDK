#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHELBBGFPBA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IGNJNAIPEAO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LJBHIFBHJFE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1956B690)
#define LJBHIFBHJFE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1956B450)
#define LJBHIFBHJFE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1956B5D0)
#define LJBHIFBHJFE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1956B770)
#define LJBHIFBHJFE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1956B460)
#define LJBHIFBHJFE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1956B8F0)
#define LJBHIFBHJFE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1956B0A0)
#define LJBHIFBHJFE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1956B080)
#define LJBHIFBHJFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1956B360)
#define LJBHIFBHJFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1956B8A0)

inline static constexpr unsigned int LJBHIFBHJFE_TypeDefinitionIndex = 14156;

class LJBHIFBHJFE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::IGNJNAIPEAO*>* OJMBOGGMIKO; // 0x28
	::FHELBBGFPBA DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHIFBHJFE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LJBHIFBHJFE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
