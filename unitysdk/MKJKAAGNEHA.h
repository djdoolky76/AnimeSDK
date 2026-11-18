#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOJGHEILGA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FONFMNBCANP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKJKAAGNEHA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C08B6D0)
#define MKJKAAGNEHA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C08B490)
#define MKJKAAGNEHA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C08B610)
#define MKJKAAGNEHA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C08B7B0)
#define MKJKAAGNEHA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C08B4A0)
#define MKJKAAGNEHA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C08B8F0)
#define MKJKAAGNEHA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C08B0E0)
#define MKJKAAGNEHA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C08B0C0)
#define MKJKAAGNEHA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C08B3A0)
#define MKJKAAGNEHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08B8E0)

inline static constexpr unsigned int MKJKAAGNEHA_TypeDefinitionIndex = 17193;

class MKJKAAGNEHA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::FONFMNBCANP*>* OJMBOGGMIKO; // 0x20
	::HNOJGHEILGA DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKAAGNEHA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MKJKAAGNEHA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
