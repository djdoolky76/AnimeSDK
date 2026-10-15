#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define OFDPGLDGBJG_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0xBE36BD0)
#define OFDPGLDGBJG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE363B0)
#define OFDPGLDGBJG_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0xBE363E0)
#define OFDPGLDGBJG_JENEIKCAPGI_OFFSET UNITYSDK_OFFSET(0xBE36B80)

inline static constexpr unsigned int OFDPGLDGBJG_TypeDefinitionIndex = 62522;

	class OFDPGLDGBJG : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarPropertyType ANAKLGDMHEA; // 0x10
		::RPG::GameCore::AvatarPropertyType HGFIMHFOKNL; // 0x14
		::RPG::GameCore::AvatarPropertyType KALLAOMAHEB; // 0x18
		::RPG::GameCore::AvatarPropertyType MJGCJCPOJBM; // 0x1C
		::RPG::GameCore::AvatarPropertyType BFCNHGJAKFL; // 0x20
		::RPG::GameCore::AvatarPropertyType JJPKJHBGAEC; // 0x24
		::RPG::GameCore::AvatarPropertyType FMKJGJOKPNP; // 0x28
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3, ::RPG::GameCore::AvatarPropertyType a4, ::RPG::GameCore::AvatarPropertyType a5, ::RPG::GameCore::AvatarPropertyType a6, ::RPG::GameCore::AvatarPropertyType a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + OFDPGLDGBJG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + OFDPGLDGBJG_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + OFDPGLDGBJG_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint JENEIKCAPGI(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + OFDPGLDGBJG_JENEIKCAPGI_OFFSET))(this, a1);
		}

	};
