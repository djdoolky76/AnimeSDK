#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIFFMGIAHL;
class PIHNNIFOPOC;
namespace RPG::AvatarSystem { class IAvatar; }

#define KADBJJAOMGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2CAC30)
#define KADBJJAOMGI_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xB2CAA50)
#define KADBJJAOMGI_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xB2CAA10)
#define KADBJJAOMGI_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xB2CA9B0)
#define KADBJJAOMGI_NDHGLMHLLIJ_OFFSET UNITYSDK_OFFSET(0xB2CA960)

inline static constexpr unsigned int KADBJJAOMGI_TypeDefinitionIndex = 65582;

	class KADBJJAOMGI : public ::System::Object
	{
	public:
		::FJIFFMGIAHL* JAPKCFJEKCH; // 0x10
		::System::Boolean MHEAIOMEGCA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADBJJAOMGI_CTOR_OFFSET))(this);
		}

		::System::Void NDHGLMHLLIJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KADBJJAOMGI_NDHGLMHLLIJ_OFFSET))(this, a1);
		}

		::System::Void KPKCFMCJBCF(::RPG::AvatarSystem::IAvatar* a1, ::FJIFFMGIAHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FJIFFMGIAHL*))((::PBYTE)hIl2Cpp + KADBJJAOMGI_KPKCFMCJBCF_OFFSET))(this, a1, a2);
		}

		::System::Boolean JAGPJGOOALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KADBJJAOMGI_JAGPJGOOALH_OFFSET))(this);
		}

		::PIHNNIFOPOC* HFIDHKKOEOA()
		{
			return ((::PIHNNIFOPOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADBJJAOMGI_HFIDHKKOEOA_OFFSET))(this);
		}

	};
