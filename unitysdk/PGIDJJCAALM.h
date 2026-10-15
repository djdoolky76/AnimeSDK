#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIFFMGIAHL;
class PIHNNIFOPOC;
namespace RPG::AvatarSystem { class IAvatar; }

#define PGIDJJCAALM_CTOR_OFFSET UNITYSDK_OFFSET(0xC220E90)
#define PGIDJJCAALM_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0xC220C50)
#define PGIDJJCAALM_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0xC220C00)
#define PGIDJJCAALM_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xC220B00)

inline static constexpr unsigned int PGIDJJCAALM_TypeDefinitionIndex = 65579;

	class PGIDJJCAALM : public ::System::Object
	{
	public:
		::FJIFFMGIAHL* JAPKCFJEKCH; // 0x10
		::System::UInt32 LNNJLAHPHPH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIDJJCAALM_CTOR_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPG::AvatarSystem::IAvatar* a1, ::FJIFFMGIAHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FJIFFMGIAHL*))((::PBYTE)hIl2Cpp + PGIDJJCAALM_KPKCFMCJBCF_OFFSET))(this, a1, a2);
		}

		::System::Boolean JAGPJGOOALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIDJJCAALM_JAGPJGOOALH_OFFSET))(this);
		}

		::PIHNNIFOPOC* HFIDHKKOEOA()
		{
			return ((::PIHNNIFOPOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIDJJCAALM_HFIDHKKOEOA_OFFSET))(this);
		}

	};
