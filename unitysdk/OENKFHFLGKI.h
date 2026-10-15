#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNPJMKLDDJA.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class MHEPLMICGAO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrackNpcVisionConfig; }
namespace RPG::GameCore { class TransformComponent; }

#define OENKFHFLGKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2C240)
#define OENKFHFLGKI_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xBE2CAD0)
#define OENKFHFLGKI_GET_USEFORVISION_OFFSET UNITYSDK_OFFSET(0xBE2CB10)
#define OENKFHFLGKI_GET_VISIONTAG_OFFSET UNITYSDK_OFFSET(0xBE2CAF0)
#define OENKFHFLGKI_NGKHCGOIPEC_OFFSET UNITYSDK_OFFSET(0xBE2C630)
#define OENKFHFLGKI_OICMACAMLAA_OFFSET UNITYSDK_OFFSET(0xBE2C4E0)
#define OENKFHFLGKI_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xBE2CAE0)
#define OENKFHFLGKI_SET_USEFORVISION_OFFSET UNITYSDK_OFFSET(0xBE2CB20)
#define OENKFHFLGKI_SET_VISIONTAG_OFFSET UNITYSDK_OFFSET(0xBE2CB00)

inline static constexpr unsigned int OENKFHFLGKI_TypeDefinitionIndex = 53549;

	class OENKFHFLGKI : public ::JNPJMKLDDJA
	{
	public:
		::System::Boolean _UseForVision_k__BackingField; // 0x60
		::System::Byte _padding0[0x3];
		::RPG::GameCore::VisionZoneTag _VisionTag_k__BackingField; // 0x64
		::UnityEngine::Quaternion LFPEIILLEIG; // 0x68
		::System::UInt32 _Priority_k__BackingField; // 0x78
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::TrackNpcVisionConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::TrackNpcVisionConfig*))((::PBYTE)hIl2Cpp + OENKFHFLGKI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OICMACAMLAA(::RPG::GameCore::GameEntity* a1, ::MHEPLMICGAO* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MHEPLMICGAO*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OENKFHFLGKI_OICMACAMLAA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NGKHCGOIPEC(::MHEPLMICGAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + OENKFHFLGKI_NGKHCGOIPEC_OFFSET))(this, a1);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OENKFHFLGKI_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OENKFHFLGKI_SET_PRIORITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::VisionZoneTag get_VisionTag()
		{
			return ((::RPG::GameCore::VisionZoneTag(*)(::PVOID))((::PBYTE)hIl2Cpp + OENKFHFLGKI_GET_VISIONTAG_OFFSET))(this);
		}

		::System::Void set_VisionTag(::RPG::GameCore::VisionZoneTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VisionZoneTag))((::PBYTE)hIl2Cpp + OENKFHFLGKI_SET_VISIONTAG_OFFSET))(this, a1);
		}

		::System::Boolean get_UseForVision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OENKFHFLGKI_GET_USEFORVISION_OFFSET))(this);
		}

		::System::Void set_UseForVision(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OENKFHFLGKI_SET_USEFORVISION_OFFSET))(this, a1);
		}

	};
