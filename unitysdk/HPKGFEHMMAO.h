#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Nullable_1.h"

#define HPKGFEHMMAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CED6830)
#define HPKGFEHMMAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED6820)
#define HPKGFEHMMAO_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1CED6850)

inline static constexpr unsigned int HPKGFEHMMAO_TypeDefinitionIndex = 24849;

	class HPKGFEHMMAO : public ::System::Attribute
	{
	public:
		::System::Nullable_1<::RPG::GameCore::JsonEnumCategory> _Category_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKGFEHMMAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::GameCore::JsonEnumCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory))((::PBYTE)hIl2Cpp + HPKGFEHMMAO_CTOR_1_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::GameCore::JsonEnumCategory> get_Category()
		{
			return ((::System::Nullable_1<::RPG::GameCore::JsonEnumCategory>(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKGFEHMMAO_GET_CATEGORY_OFFSET))(this);
		}

	};
