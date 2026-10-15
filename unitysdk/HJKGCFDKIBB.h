#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define HJKGCFDKIBB_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0x15D28BB0)
#define HJKGCFDKIBB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D28A20)
#define HJKGCFDKIBB_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0x15D28A30)

inline static constexpr unsigned int HJKGCFDKIBB_TypeDefinitionIndex = 62517;

	class HJKGCFDKIBB : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType GGKLKCAMNJK; // 0x10
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + HJKGCFDKIBB_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + HJKGCFDKIBB_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + HJKGCFDKIBB_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
