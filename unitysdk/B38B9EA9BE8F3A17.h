#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace BF500EC7044DC6A8 { class F2FEEEEF75D4E56E; }

#define B38B9EA9BE8F3A17_B88A918F6773219C_OFFSET UNITYSDK_OFFSET(0x40BB810)
#define B38B9EA9BE8F3A17__CCTOR_OFFSET UNITYSDK_OFFSET(0x43D7EB0)

inline static constexpr unsigned int B38B9EA9BE8F3A17_TypeDefinitionIndex = 18673;

class B38B9EA9BE8F3A17 : public ::System::Object
{
public:
	static ::BF500EC7044DC6A8::F2FEEEEF75D4E56E** StaticGet_EE4CDADED94A39B1()
	{
		return (::BF500EC7044DC6A8::F2FEEEEF75D4E56E**)Il2CppClass::FromTypeDefinitionIndex(B38B9EA9BE8F3A17_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B38B9EA9BE8F3A17__CCTOR_OFFSET))();
	}

	static ::System::Boolean B88A918F6773219C(::UnityEngine::E46B881AA2636190& AACF09DD318E6D7A, ::UnityEngine::E46B881AA2636190 E77E6A79A5AC143F)
	{
		return ((::System::Boolean(*)(::UnityEngine::E46B881AA2636190&, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + B38B9EA9BE8F3A17_B88A918F6773219C_OFFSET))(AACF09DD318E6D7A, E77E6A79A5AC143F);
	}
};
