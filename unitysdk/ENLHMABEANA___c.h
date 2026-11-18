#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKOEPKBKAMO;
namespace System { template <typename T> class Action_1; }

#define ENLHMABEANA___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x14182060)
#define ENLHMABEANA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14182010)
#define ENLHMABEANA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14182050)

inline static constexpr unsigned int ENLHMABEANA___c_TypeDefinitionIndex = 92066;

class ENLHMABEANA___c : public ::System::Object
{
public:
	static ::System::Action_1<::AKOEPKBKAMO*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::AKOEPKBKAMO*>**)Il2CppClass::FromTypeDefinitionIndex(ENLHMABEANA___c_TypeDefinitionIndex)->GetStaticField(0x37680);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ENLHMABEANA___c_TypeDefinitionIndex)->GetStaticField(0x37688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENLHMABEANA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLHMABEANA___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::AKOEPKBKAMO* JHPFMIFAKDE)
	{
		return ((::System::Void(*)(::PVOID, ::AKOEPKBKAMO*))((::PBYTE)hIl2Cpp + ENLHMABEANA___C_AIKNDJKJEKN_OFFSET))(this, JHPFMIFAKDE);
	}
};
