#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/System/Object.h"

#define BAHEINMHOAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA30CC0)

inline static constexpr unsigned int BAHEINMHOAC_TypeDefinitionIndex = 43920;

	class BAHEINMHOAC : public ::System::Object
	{
	public:
		::System::Int32 CFLIKPOOPIH; // 0x10
		::System::UInt32 JLDPHHBOBJL; // 0x14
		::System::Boolean ODMJCCEFDFH; // 0x18
		::System::Boolean IGMFNFFLLNN; // 0x19
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::RoadRash::EEngineState LDNGPJDDKJL; // 0x1C
		::System::Int32 EKFHMKPFDEK; // 0x20
		::System::Single HGPFIOAAKFD; // 0x24
		::System::Int32 KADGONJCMBF; // 0x28
		::System::UInt32 OABMCDAPEKH; // 0x2C
		::System::Single EAMODMLMCAO; // 0x30
		::System::Boolean NNDJHLDHHEL; // 0x34
		::System::Boolean JDEFJGPKMBO; // 0x35
		::System::Boolean OMMJMPEAHKC; // 0x36
		::System::Boolean HLJBGAECJMH; // 0x37
		::System::Boolean FJIICAOODMB; // 0x38
		::System::Boolean EBONNIAENPA; // 0x39
		::System::Boolean EGNBKFMJOEH; // 0x3A
		::System::Byte _padding1[0x1];
		::System::Int32 GPCCPOPFCNP; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHEINMHOAC_CTOR_OFFSET))(this);
		}

	};
