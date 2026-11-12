#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGMNKINFKFH.h"
#include "unitysdk/System/Object.h"
class CMLICLCEIOK;
namespace RPG::AvatarSystem { class AvatarExEidolon; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AMKFCICPGNH_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x163F3DE0)
#define AMKFCICPGNH_CTOR_OFFSET UNITYSDK_OFFSET(0x163F3D10)
#define AMKFCICPGNH_FOBELLNLIDL_OFFSET UNITYSDK_OFFSET(0x163F3F30)

inline static constexpr unsigned int AMKFCICPGNH_TypeDefinitionIndex = 63986;

	class AMKFCICPGNH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::DGMNKINFKFH, ::RPG::AvatarSystem::AvatarExEidolon*>* LFCDDNKKIIK; // 0x10
		::CMLICLCEIOK* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::CMLICLCEIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMLICLCEIOK*))((::PBYTE)hIl2Cpp + AMKFCICPGNH_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarExEidolon* ACMKLFOMPFC(::DGMNKINFKFH a1)
		{
			return ((::RPG::AvatarSystem::AvatarExEidolon*(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + AMKFCICPGNH_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::AvatarExEidolon* FOBELLNLIDL(::DGMNKINFKFH a1)
		{
			return ((::RPG::AvatarSystem::AvatarExEidolon*(*)(::PVOID, ::DGMNKINFKFH))((::PBYTE)hIl2Cpp + AMKFCICPGNH_FOBELLNLIDL_OFFSET))(this, a1);
		}

	};
