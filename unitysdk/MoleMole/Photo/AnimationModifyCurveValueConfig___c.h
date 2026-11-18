#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class AnimationModifyCurveValueItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C_DBEHCEHPHLI_OFFSET UNITYSDK_OFFSET(0x1249BEA0)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1249BE50)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1249BE90)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationModifyCurveValueConfig___c_TypeDefinitionIndex = 84642;

	class AnimationModifyCurveValueConfig___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AnimationModifyCurveValueConfig___c_TypeDefinitionIndex)->GetStaticField(0x34B30);
		}
		static ::System::Func_2<::MoleMole::Photo::AnimationModifyCurveValueItem*, ::Foundation::Unreal::FName>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::MoleMole::Photo::AnimationModifyCurveValueItem*, ::Foundation::Unreal::FName>**)Il2CppClass::FromTypeDefinitionIndex(AnimationModifyCurveValueConfig___c_TypeDefinitionIndex)->GetStaticField(0x34B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FName DBEHCEHPHLI(::MoleMole::Photo::AnimationModifyCurveValueItem* IPMMCGDMODG)
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID, ::MoleMole::Photo::AnimationModifyCurveValueItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG___C_DBEHCEHPHLI_OFFSET))(this, IPMMCGDMODG);
		}
	};
}
