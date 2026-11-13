#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIFFMGIAHL;
class PIHNNIFOPOC;
namespace RPG::AvatarSystem { class IAvatar; }

#define ECIKMEIPIGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D7D50)
#define ECIKMEIPIGB_HFIDHKKOEOA_OFFSET UNITYSDK_OFFSET(0x1C3D7BA0)
#define ECIKMEIPIGB_JAGPJGOOALH_OFFSET UNITYSDK_OFFSET(0x1C3D7A50)
#define ECIKMEIPIGB_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0x1C3D79F0)

inline static constexpr unsigned int ECIKMEIPIGB_TypeDefinitionIndex = 67496;

	class ECIKMEIPIGB : public ::System::Object
	{
	public:
		::FJIFFMGIAHL* JAPKCFJEKCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIKMEIPIGB_CTOR_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPG::AvatarSystem::IAvatar* a1, ::FJIFFMGIAHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FJIFFMGIAHL*))((::PBYTE)hIl2Cpp + ECIKMEIPIGB_KPKCFMCJBCF_OFFSET))(this, a1, a2);
		}

		::System::Boolean JAGPJGOOALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIKMEIPIGB_JAGPJGOOALH_OFFSET))(this);
		}

		::PIHNNIFOPOC* HFIDHKKOEOA()
		{
			return ((::PIHNNIFOPOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIKMEIPIGB_HFIDHKKOEOA_OFFSET))(this);
		}

	};
