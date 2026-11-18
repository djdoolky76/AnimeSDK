#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KKOCDIKKHAG;
class NFEGHPBLECO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CKKKFKNIGCB___C_EMOLFJFNEPL_OFFSET UNITYSDK_OFFSET(0x193E6050)
#define CKKKFKNIGCB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193E6000)
#define CKKKFKNIGCB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193E6040)

inline static constexpr unsigned int CKKKFKNIGCB___c_TypeDefinitionIndex = 46187;

class CKKKFKNIGCB___c : public ::System::Object
{
public:
	static ::System::Action_2<::KKOCDIKKHAG*, ::NFEGHPBLECO*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::KKOCDIKKHAG*, ::NFEGHPBLECO*>**)Il2CppClass::FromTypeDefinitionIndex(CKKKFKNIGCB___c_TypeDefinitionIndex)->GetStaticField(0x4B5E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CKKKFKNIGCB___c_TypeDefinitionIndex)->GetStaticField(0x4B5E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKKKFKNIGCB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKKFKNIGCB___C__CTOR_OFFSET))(this);
	}

	::System::Void EMOLFJFNEPL(::KKOCDIKKHAG* GBELIHABEDH, ::NFEGHPBLECO* HADCANECEPL)
	{
		return ((::System::Void(*)(::PVOID, ::KKOCDIKKHAG*, ::NFEGHPBLECO*))((::PBYTE)hIl2Cpp + CKKKFKNIGCB___C_EMOLFJFNEPL_OFFSET))(this, GBELIHABEDH, HADCANECEPL);
	}
};
