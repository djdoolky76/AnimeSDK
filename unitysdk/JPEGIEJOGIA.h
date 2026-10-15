#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }

#define JPEGIEJOGIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB2BB9E0)
#define JPEGIEJOGIA_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xB2BB820)
#define JPEGIEJOGIA_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xB2BB780)

inline static constexpr unsigned int JPEGIEJOGIA_TypeDefinitionIndex = 65576;

	class JPEGIEJOGIA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEGIEJOGIA_CTOR_OFFSET))(this);
		}

		::System::Boolean JAGPJGOOALH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + JPEGIEJOGIA_JAGPJGOOALH_OFFSET))(this, a1);
		}

		::NHPAANINLPK* HFIDHKKOEOA(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::NHPAANINLPK*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + JPEGIEJOGIA_HFIDHKKOEOA_OFFSET))(this, a1);
		}

	};
