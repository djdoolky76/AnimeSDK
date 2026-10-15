#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyEffectType.h"
#include "unitysdk/System/Object.h"
class IGMFNNJNHDF;
namespace RPG::GameCore { class MonopolyEventEffectRow; }

#define IGMFNNJNHDF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16411740)
#define IGMFNNJNHDF_CTOR_OFFSET UNITYSDK_OFFSET(0x164117F0)
#define IGMFNNJNHDF_GET_ID_OFFSET UNITYSDK_OFFSET(0x16411920)
#define IGMFNNJNHDF_IBJGNMPDEOJ_OFFSET UNITYSDK_OFFSET(0x16411800)
#define IGMFNNJNHDF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x164118D0)
#define IGMFNNJNHDF_SET_ID_OFFSET UNITYSDK_OFFSET(0x16411930)

inline static constexpr unsigned int IGMFNNJNHDF_TypeDefinitionIndex = 66252;

	class IGMFNNJNHDF : public ::System::Object
	{
	public:
		::RPG::GameCore::MonopolyEventEffectRow* IBPBJBOKKMF; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMFNNJNHDF_CTOR_OFFSET))(this);
		}

		static ::IGMFNNJNHDF* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::IGMFNNJNHDF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IGMFNNJNHDF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean IBJGNMPDEOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMFNNJNHDF_IBJGNMPDEOJ_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMFNNJNHDF_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGMFNNJNHDF_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyEffectType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::MonopolyEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMFNNJNHDF_JBIOGKPHKKC_OFFSET))(this);
		}

	};
