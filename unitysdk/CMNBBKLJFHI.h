#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMGFLBOAJJI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LANJIIODFBK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CMNBBKLJFHI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1878E850)
#define CMNBBKLJFHI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1878E610)
#define CMNBBKLJFHI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1878E790)
#define CMNBBKLJFHI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1878E930)
#define CMNBBKLJFHI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1878E620)
#define CMNBBKLJFHI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1878EAB0)
#define CMNBBKLJFHI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1878E260)
#define CMNBBKLJFHI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1878E240)
#define CMNBBKLJFHI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1878E520)
#define CMNBBKLJFHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1878EA60)

inline static constexpr unsigned int CMNBBKLJFHI_TypeDefinitionIndex = 17495;

class CMNBBKLJFHI : public ::System::Object
{
public:
	::EMGFLBOAJJI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::LANJIIODFBK*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNBBKLJFHI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CMNBBKLJFHI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
