#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SpritePreset; }
namespace System { class String; }

#define BCIIIJAPEMN_AEBDDMOIFEP_OFFSET UNITYSDK_OFFSET(0x15E9D650)
#define BCIIIJAPEMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E9D890)
#define BCIIIJAPEMN_JEHDGCMDDBC_OFFSET UNITYSDK_OFFSET(0x15E9D3E0)
#define BCIIIJAPEMN_NDNOIBMCAAG_OFFSET UNITYSDK_OFFSET(0x15E9D750)
#define BCIIIJAPEMN_NIGMOFOLENC_OFFSET UNITYSDK_OFFSET(0x15E9D6E0)
#define BCIIIJAPEMN_POCPBOGGOFD_OFFSET UNITYSDK_OFFSET(0x15E9D540)

inline static constexpr unsigned int BCIIIJAPEMN_TypeDefinitionIndex = 69028;

	class BCIIIJAPEMN : public ::System::Object
	{
	public:
		// static const ::System::String* INGDEEGMFHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIIIJAPEMN_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::SpritePreset* JEHDGCMDDBC(::System::String* a1)
		{
			return ((::RPG::GameCore::SpritePreset*(*)(::System::String*))((::PBYTE)hIl2Cpp + BCIIIJAPEMN_JEHDGCMDDBC_OFFSET))(a1);
		}

		static ::System::String* AEBDDMOIFEP()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BCIIIJAPEMN_AEBDDMOIFEP_OFFSET))();
		}

		static ::System::String* NIGMOFOLENC()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BCIIIJAPEMN_NIGMOFOLENC_OFFSET))();
		}

		static ::System::String* NDNOIBMCAAG(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BCIIIJAPEMN_NDNOIBMCAAG_OFFSET))(a1);
		}

		static ::System::String* POCPBOGGOFD(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BCIIIJAPEMN_POCPBOGGOFD_OFFSET))(a1);
		}

	};
