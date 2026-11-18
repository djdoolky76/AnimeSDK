#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OIDFGLGKJPO.h"
#include "unitysdk/System/Object.h"

class GGEFBCOOEFC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNKKHODBNEH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C0B73F0)
#define PNKKHODBNEH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C0B71C0)
#define PNKKHODBNEH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C0B7330)
#define PNKKHODBNEH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B74D0)
#define PNKKHODBNEH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C0B71D0)
#define PNKKHODBNEH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C0B7610)
#define PNKKHODBNEH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C0B6E20)
#define PNKKHODBNEH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C0B6E00)
#define PNKKHODBNEH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C0B70E0)
#define PNKKHODBNEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B7600)

inline static constexpr unsigned int PNKKHODBNEH_TypeDefinitionIndex = 16105;

class PNKKHODBNEH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::OIDFGLGKJPO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::GGEFBCOOEFC*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKHODBNEH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKHODBNEH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKHODBNEH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PNKKHODBNEH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PNKKHODBNEH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKHODBNEH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKHODBNEH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKHODBNEH_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNKKHODBNEH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PNKKHODBNEH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
