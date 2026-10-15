#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEBBBNOOCFO_MIOENLNKAHL_CIFEELIJDMM_OFFSET UNITYSDK_OFFSET(0xC026470)
#define PEBBBNOOCFO_MIOENLNKAHL_CTOR_OFFSET UNITYSDK_OFFSET(0xC0261B0)

inline static constexpr unsigned int PEBBBNOOCFO_MIOENLNKAHL_TypeDefinitionIndex = 60603;

	class PEBBBNOOCFO_MIOENLNKAHL : public ::System::Object
	{
	public:
		::System::String* POECNOICAHL; // 0x10
		::System::String* JLCLCMGLKKG; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MapRotation::EffectType, ::System::Collections::Generic::List_1<::System::Object*>*>* OFCKNBEAIDL; // 0x20
		::System::UInt32 FCFGHOHHJLE; // 0x28
		::System::Boolean OCEMLKIOEEH; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 GJPPHJMHBPF; // 0x30
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_MIOENLNKAHL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CIFEELIJDMM(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::MapRotationEntityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + PEBBBNOOCFO_MIOENLNKAHL_CIFEELIJDMM_OFFSET))(this, a1, a2, a3);
		}

	};
