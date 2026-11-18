#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NBPLAIEIIFK.h"
#include "unitysdk/System/Object.h"

class GPICKEBGFJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKLOLEDHJED_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAA7880)
#define NKLOLEDHJED_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAA7640)
#define NKLOLEDHJED_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAA77C0)
#define NKLOLEDHJED_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAA7960)
#define NKLOLEDHJED_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAA7650)
#define NKLOLEDHJED_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAA7AA0)
#define NKLOLEDHJED_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAA7290)
#define NKLOLEDHJED_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAA7270)
#define NKLOLEDHJED_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAA7550)
#define NKLOLEDHJED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA7A90)

inline static constexpr unsigned int NKLOLEDHJED_TypeDefinitionIndex = 15819;

class NKLOLEDHJED : public ::System::Object
{
public:
	::Il2CppArray<::GPICKEBGFJP*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::NBPLAIEIIFK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLOLEDHJED__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLOLEDHJED_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLOLEDHJED_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NKLOLEDHJED_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NKLOLEDHJED_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLOLEDHJED_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLOLEDHJED_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLOLEDHJED_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NKLOLEDHJED_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLOLEDHJED_CHLEALKAOJO_OFFSET))(this);
	}
};
