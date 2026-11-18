#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NKIKOGPBNOH.h"
#include "unitysdk/System/Object.h"

class MBHPJGHBFIM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HNFKDMMLLMB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5CE7A0)
#define HNFKDMMLLMB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5CE560)
#define HNFKDMMLLMB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5CE6E0)
#define HNFKDMMLLMB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5CE880)
#define HNFKDMMLLMB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5CE570)
#define HNFKDMMLLMB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5CEA00)
#define HNFKDMMLLMB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5CE1B0)
#define HNFKDMMLLMB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5CE190)
#define HNFKDMMLLMB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5CE470)
#define HNFKDMMLLMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CE9B0)

inline static constexpr unsigned int HNFKDMMLLMB_TypeDefinitionIndex = 9686;

class HNFKDMMLLMB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::NKIKOGPBNOH DHDJDGFNBOA; // 0x20
	::Il2CppArray<::MBHPJGHBFIM*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKDMMLLMB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HNFKDMMLLMB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
