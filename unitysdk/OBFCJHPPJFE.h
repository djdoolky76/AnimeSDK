#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }

#define OBFCJHPPJFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB7D260)
#define OBFCJHPPJFE_GET_PROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AB7D240)
#define OBFCJHPPJFE_SET_PROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AB7D250)

inline static constexpr unsigned int OBFCJHPPJFE_TypeDefinitionIndex = 53012;

	class OBFCJHPPJFE : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* _PropertyContext_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFCJHPPJFE_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* get_PropertyContext()
		{
			return ((::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFCJHPPJFE_GET_PROPERTYCONTEXT_OFFSET))(this);
		}

		::System::Void set_PropertyContext(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + OBFCJHPPJFE_SET_PROPERTYCONTEXT_OFFSET))(this, a1);
		}

	};
