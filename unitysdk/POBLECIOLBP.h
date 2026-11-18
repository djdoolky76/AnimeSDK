#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFOLGIGEEOM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GJNMIIHAADA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POBLECIOLBP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EC89C10)
#define POBLECIOLBP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EC899D0)
#define POBLECIOLBP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EC89B50)
#define POBLECIOLBP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EC89CF0)
#define POBLECIOLBP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EC899E0)
#define POBLECIOLBP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EC89E30)
#define POBLECIOLBP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EC89620)
#define POBLECIOLBP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EC89600)
#define POBLECIOLBP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EC898E0)
#define POBLECIOLBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC89E20)

inline static constexpr unsigned int POBLECIOLBP_TypeDefinitionIndex = 16587;

class POBLECIOLBP : public ::System::Object
{
public:
	::EFOLGIGEEOM DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::GJNMIIHAADA*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLECIOLBP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLECIOLBP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLECIOLBP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + POBLECIOLBP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + POBLECIOLBP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLECIOLBP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLECIOLBP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLECIOLBP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + POBLECIOLBP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBLECIOLBP_CHLEALKAOJO_OFFSET))(this);
	}
};
