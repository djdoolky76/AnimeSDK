#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/System/Object.h"

#define BAHEINMHOAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AC630)

inline static constexpr unsigned int BAHEINMHOAC_TypeDefinitionIndex = 43920;

	class BAHEINMHOAC : public ::System::Object
	{
	public:
		::System::UInt32 JLDPHHBOBJL; // 0x10
		::System::Int32 CFLIKPOOPIH; // 0x14
		::RPG::Client::LittleGame::RoadRash::EEngineState LDNGPJDDKJL; // 0x18
		::System::Int32 GPCCPOPFCNP; // 0x1C
		::System::Single EAMODMLMCAO; // 0x20
		::System::Single HGPFIOAAKFD; // 0x24
		::System::Int32 EKFHMKPFDEK; // 0x28
		::System::Int32 KADGONJCMBF; // 0x2C
		::System::Boolean JDEFJGPKMBO; // 0x30
		::System::Boolean ODMJCCEFDFH; // 0x31
		::System::Boolean EBONNIAENPA; // 0x32
		::System::Byte _padding0[0x1];
		::System::UInt32 OABMCDAPEKH; // 0x34
		::System::Boolean IGMFNFFLLNN; // 0x38
		::System::Boolean HLJBGAECJMH; // 0x39
		::System::Boolean FJIICAOODMB; // 0x3A
		::System::Boolean EGNBKFMJOEH; // 0x3B
		::System::Boolean OMMJMPEAHKC; // 0x3C
		::System::Boolean NNDJHLDHHEL; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHEINMHOAC_CTOR_OFFSET))(this);
		}

	};
