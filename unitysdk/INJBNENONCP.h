#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGDOJJMIFPB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ANIOHCNKFDM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define INJBNENONCP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x152EF860)
#define INJBNENONCP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x152EF630)
#define INJBNENONCP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x152EF7A0)
#define INJBNENONCP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x152EF940)
#define INJBNENONCP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x152EF640)
#define INJBNENONCP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152EFAC0)
#define INJBNENONCP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152EF290)
#define INJBNENONCP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x152EF270)
#define INJBNENONCP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152EF550)
#define INJBNENONCP__CTOR_OFFSET UNITYSDK_OFFSET(0x152EFA70)

inline static constexpr unsigned int INJBNENONCP_TypeDefinitionIndex = 9148;

class INJBNENONCP : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::ANIOHCNKFDM*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::AGDOJJMIFPB DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJBNENONCP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INJBNENONCP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJBNENONCP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + INJBNENONCP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + INJBNENONCP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJBNENONCP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJBNENONCP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJBNENONCP_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJBNENONCP_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + INJBNENONCP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
