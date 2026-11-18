#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBPBDNCGLOP;
namespace System { template <typename T> class Action_1; }

#define IIMGGFACCFP___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x197CB2E0)
#define IIMGGFACCFP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197CB290)
#define IIMGGFACCFP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197CB2D0)

inline static constexpr unsigned int IIMGGFACCFP___c_TypeDefinitionIndex = 73105;

class IIMGGFACCFP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IIMGGFACCFP___c_TypeDefinitionIndex)->GetStaticField(0x3B360);
	}
	static ::System::Action_1<::MBPBDNCGLOP*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::MBPBDNCGLOP*>**)Il2CppClass::FromTypeDefinitionIndex(IIMGGFACCFP___c_TypeDefinitionIndex)->GetStaticField(0x3B368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIMGGFACCFP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMGGFACCFP___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::MBPBDNCGLOP* BIDIJJLLLLP)
	{
		return ((::System::Void(*)(::PVOID, ::MBPBDNCGLOP*))((::PBYTE)hIl2Cpp + IIMGGFACCFP___C_PLACCFJJGGK_OFFSET))(this, BIDIJJLLLLP);
	}
};
