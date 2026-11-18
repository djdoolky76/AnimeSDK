#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NDCPBAGEPAJ.h"
#include "unitysdk/System/Object.h"

class FMFPJIDACLN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGPAFINHKJB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB2C290)
#define OGPAFINHKJB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB2C060)
#define OGPAFINHKJB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB2C1D0)
#define OGPAFINHKJB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB2C370)
#define OGPAFINHKJB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB2C070)
#define OGPAFINHKJB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB2C4B0)
#define OGPAFINHKJB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB2BCC0)
#define OGPAFINHKJB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB2BCA0)
#define OGPAFINHKJB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB2BF80)
#define OGPAFINHKJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB2C4A0)

inline static constexpr unsigned int OGPAFINHKJB_TypeDefinitionIndex = 13391;

class OGPAFINHKJB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::FMFPJIDACLN*>* OJMBOGGMIKO; // 0x20
	::NDCPBAGEPAJ DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPAFINHKJB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPAFINHKJB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPAFINHKJB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OGPAFINHKJB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OGPAFINHKJB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPAFINHKJB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPAFINHKJB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPAFINHKJB_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPAFINHKJB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OGPAFINHKJB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
