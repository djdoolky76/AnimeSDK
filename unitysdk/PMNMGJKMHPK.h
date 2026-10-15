#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define PMNMGJKMHPK_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0xC3284C0)
#define PMNMGJKMHPK_CTOR_OFFSET UNITYSDK_OFFSET(0xC328150)
#define PMNMGJKMHPK_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0xC328160)

inline static constexpr unsigned int PMNMGJKMHPK_TypeDefinitionIndex = 62524;

	class PMNMGJKMHPK : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* KGLOIHNOFCM; // 0x10
		::RPG::GameCore::AvatarPropertyType KALLAOMAHEB; // 0x18
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + PMNMGJKMHPK_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + PMNMGJKMHPK_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + PMNMGJKMHPK_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
