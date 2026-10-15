#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GHCECAKHKJP;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyContext_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KNIDNEIKABJ_CALCULATEVALUE_OFFSET UNITYSDK_OFFSET(0xB586670)
#define KNIDNEIKABJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB586B80)
#define KNIDNEIKABJ_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0xB586650)
#define KNIDNEIKABJ_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0xB586660)

inline static constexpr unsigned int KNIDNEIKABJ_TypeDefinitionIndex = 62711;

	class KNIDNEIKABJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::GHCECAKHKJP*>* _Properties_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIDNEIKABJ_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GHCECAKHKJP*>* get_Properties()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GHCECAKHKJP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIDNEIKABJ_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void set_Properties(::System::Collections::Generic::IReadOnlyList_1<::GHCECAKHKJP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::GHCECAKHKJP*>*))((::PBYTE)hIl2Cpp + KNIDNEIKABJ_SET_PROPERTIES_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CalculateValue(::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyContext_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KNIDNEIKABJ_CALCULATEVALUE_OFFSET))(this, a1);
		}

	};
