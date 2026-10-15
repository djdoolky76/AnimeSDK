#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SpritePreset; }
namespace System { class String; }

#define BCIIIJAPEMN_AEBDDMOIFEP_OFFSET UNITYSDK_OFFSET(0x15EAA470)
#define BCIIIJAPEMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15EAA6B0)
#define BCIIIJAPEMN_JEHDGCMDDBC_OFFSET UNITYSDK_OFFSET(0x15EAA200)
#define BCIIIJAPEMN_NDNOIBMCAAG_OFFSET UNITYSDK_OFFSET(0x15EAA570)
#define BCIIIJAPEMN_NIGMOFOLENC_OFFSET UNITYSDK_OFFSET(0x15EAA500)
#define BCIIIJAPEMN_POCPBOGGOFD_OFFSET UNITYSDK_OFFSET(0x15EAA360)

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
