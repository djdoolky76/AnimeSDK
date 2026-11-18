#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NEGMBBEGKOO.h"
#include "unitysdk/System/Object.h"

class DGCEBECKPBA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAFBMCKJHKA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C195040)
#define OAFBMCKJHKA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C194E00)
#define OAFBMCKJHKA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C194F80)
#define OAFBMCKJHKA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C195120)
#define OAFBMCKJHKA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C194E10)
#define OAFBMCKJHKA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C195260)
#define OAFBMCKJHKA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C194A50)
#define OAFBMCKJHKA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C194A30)
#define OAFBMCKJHKA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C194D10)
#define OAFBMCKJHKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C195250)

inline static constexpr unsigned int OAFBMCKJHKA_TypeDefinitionIndex = 10944;

class OAFBMCKJHKA : public ::System::Object
{
public:
	::NEGMBBEGKOO DHDJDGFNBOA; // 0x10
	::Il2CppArray<::DGCEBECKPBA*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFBMCKJHKA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFBMCKJHKA_CHLEALKAOJO_OFFSET))(this);
	}
};
