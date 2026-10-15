#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/System/Object.h"

#define BAHEINMHOAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AFFC0)

	class BAHEINMHOAC : public ::System::Object
	{
	public:
		::System::Int32 CFLIKPOOPIH; // 0x10
		::System::Int32 EKFHMKPFDEK; // 0x14
		::System::Boolean FJIICAOODMB; // 0x18
		::System::Boolean ODMJCCEFDFH; // 0x19
		::System::Boolean NNDJHLDHHEL; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single HGPFIOAAKFD; // 0x1C
		::System::UInt32 JLDPHHBOBJL; // 0x20
		::RPG::Client::LittleGame::RoadRash::EEngineState LDNGPJDDKJL; // 0x24
		::System::Boolean EGNBKFMJOEH; // 0x28
		::System::Boolean IGMFNFFLLNN; // 0x29
		::System::Byte _padding1[0x2];
		::System::Int32 GPCCPOPFCNP; // 0x2C
		::System::UInt32 OABMCDAPEKH; // 0x30
		::System::Single EAMODMLMCAO; // 0x34
		::System::Boolean OMMJMPEAHKC; // 0x38
		::System::Boolean HLJBGAECJMH; // 0x39
		::System::Boolean EBONNIAENPA; // 0x3A
		::System::Boolean JDEFJGPKMBO; // 0x3B
		::System::Int32 KADGONJCMBF; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHEINMHOAC_CTOR_OFFSET))(this);
		}

	};
