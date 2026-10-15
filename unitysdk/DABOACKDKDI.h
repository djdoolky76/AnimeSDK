#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define DABOACKDKDI_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0xDFBBD50)
#define DABOACKDKDI_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBB620)
#define DABOACKDKDI_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0xDFBB650)

	class DABOACKDKDI : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType ANPAHODBCOB; // 0x10
		::RPG::GameCore::AvatarPropertyType GBPCKJBAAAA; // 0x14
		::RPG::GameCore::AvatarPropertyType KNBEPFPCEBB; // 0x18
		::RPG::GameCore::AvatarPropertyType GGKLKCAMNJK; // 0x1C
		::RPG::GameCore::AvatarPropertyType BFPOCEDAOMA; // 0x20
		::RPG::GameCore::AvatarPropertyType GBKKAELNFAO; // 0x24
		::RPG::GameCore::AvatarPropertyType DJIPGJLJLDP; // 0x28
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3, ::RPG::GameCore::AvatarPropertyType a4, ::RPG::GameCore::AvatarPropertyType a5, ::RPG::GameCore::AvatarPropertyType a6, ::RPG::GameCore::AvatarPropertyType a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + DABOACKDKDI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + DABOACKDKDI_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + DABOACKDKDI_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
