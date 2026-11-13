#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OBFCJHPPJFE;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }

#define KFDJFELEEGB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x176D4260)
#define KFDJFELEEGB_CTOR_OFFSET UNITYSDK_OFFSET(0x176D4310)

inline static constexpr unsigned int KFDJFELEEGB_TypeDefinitionIndex = 64042;

	class KFDJFELEEGB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDJFELEEGB_CTOR_OFFSET))(this);
		}

		::OBFCJHPPJFE* BPLPBPMEODA(::Il2CppArray<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*>* a1)
		{
			return ((::OBFCJHPPJFE*(*)(::PVOID, ::Il2CppArray<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + KFDJFELEEGB_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
