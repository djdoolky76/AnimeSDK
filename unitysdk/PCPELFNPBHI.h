#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define PCPELFNPBHI_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0xC00AB60)
#define PCPELFNPBHI_CTOR_OFFSET UNITYSDK_OFFSET(0xC00A800)
#define PCPELFNPBHI_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0xC00A810)

inline static constexpr unsigned int PCPELFNPBHI_TypeDefinitionIndex = 62514;

	class PCPELFNPBHI : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType ANPAHODBCOB; // 0x10
		::RPG::GameCore::AvatarPropertyType BFPOCEDAOMA; // 0x14
		::RPG::GameCore::AvatarPropertyType GGKLKCAMNJK; // 0x18
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + PCPELFNPBHI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + PCPELFNPBHI_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + PCPELFNPBHI_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
