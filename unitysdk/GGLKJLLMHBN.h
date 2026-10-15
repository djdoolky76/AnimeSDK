#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class POKKCEHMFMJ;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define GGLKJLLMHBN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A0FB50)
#define GGLKJLLMHBN_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0x15A0F780)
#define GGLKJLLMHBN_GET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15A0F760)
#define GGLKJLLMHBN_HGONPBCKOGM_OFFSET UNITYSDK_OFFSET(0x15A0FAC0)
#define GGLKJLLMHBN_SET_PROPERTYREPOSITORY_OFFSET UNITYSDK_OFFSET(0x15A0F770)

inline static constexpr unsigned int GGLKJLLMHBN_TypeDefinitionIndex = 62715;

	class GGLKJLLMHBN
	{
	public:
		::POKKCEHMFMJ* _PropertyRepository_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLKJLLMHBN_CTOR_OFFSET))(this);
		}

		::POKKCEHMFMJ* get_PropertyRepository()
		{
			return ((::POKKCEHMFMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLKJLLMHBN_GET_PROPERTYREPOSITORY_OFFSET))(this);
		}

		::System::Void set_PropertyRepository(::POKKCEHMFMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POKKCEHMFMJ*))((::PBYTE)hIl2Cpp + GGLKJLLMHBN_SET_PROPERTYREPOSITORY_OFFSET))(this, a1);
		}

		::System::Void EIMIIHEDKFM(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GGLKJLLMHBN_EIMIIHEDKFM_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* HGONPBCKOGM(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + GGLKJLLMHBN_HGONPBCKOGM_OFFSET))(this, a1);
		}

	};
