#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define EBFOCIMBMDD_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0x13AA06B0)
#define EBFOCIMBMDD_CTOR_OFFSET UNITYSDK_OFFSET(0x13AA0350)
#define EBFOCIMBMDD_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0x13AA0360)

inline static constexpr unsigned int EBFOCIMBMDD_TypeDefinitionIndex = 63929;

	class EBFOCIMBMDD : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType GGKLKCAMNJK; // 0x10
		::RPG::GameCore::AvatarPropertyType DEJJHJMEBEE; // 0x14
		::RPG::GameCore::AvatarPropertyType NMKLKFLLIML; // 0x18
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + EBFOCIMBMDD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + EBFOCIMBMDD_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + EBFOCIMBMDD_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
