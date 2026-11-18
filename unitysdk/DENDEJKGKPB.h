#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPDHDEPLGAI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BIEPEPAHBAG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DENDEJKGKPB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A551510)
#define DENDEJKGKPB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5512E0)
#define DENDEJKGKPB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A551450)
#define DENDEJKGKPB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5515F0)
#define DENDEJKGKPB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5512F0)
#define DENDEJKGKPB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A551730)
#define DENDEJKGKPB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A550F40)
#define DENDEJKGKPB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A550F20)
#define DENDEJKGKPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A551200)
#define DENDEJKGKPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A551720)

inline static constexpr unsigned int DENDEJKGKPB_TypeDefinitionIndex = 11655;

class DENDEJKGKPB : public ::System::Object
{
public:
	::CPDHDEPLGAI DHDJDGFNBOA; // 0x10
	::Il2CppArray<::BIEPEPAHBAG*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDEJKGKPB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDEJKGKPB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDEJKGKPB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DENDEJKGKPB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DENDEJKGKPB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDEJKGKPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDEJKGKPB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDEJKGKPB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DENDEJKGKPB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENDEJKGKPB_CHLEALKAOJO_OFFSET))(this);
	}
};
