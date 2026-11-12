#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGGDOPNKDLK_CDFEPGGALDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B230)
#define BGGDOPNKDLK_CDFEPGGALDB_DEAJHKKGEPF_OFFSET UNITYSDK_OFFSET(0x1D73EF70)
#define BGGDOPNKDLK_CDFEPGGALDB_HLBIMAKDDFJ_OFFSET UNITYSDK_OFFSET(0x1D73EF20)

inline static constexpr unsigned int BGGDOPNKDLK_CDFEPGGALDB_TypeDefinitionIndex = 38190;

	class BGGDOPNKDLK_CDFEPGGALDB : public ::System::Object
	{
	public:
		::System::Boolean LFHAEPJOOLD; // 0x10
		::System::Boolean CKGOOGKPMPP; // 0x11
		::System::Boolean KFJFIOGODAA; // 0x12
		::System::Byte _padding0[0x1];
		::System::UInt32 PNICPEMCAAJ; // 0x14
		::System::Int32 LJDHGFECMHJ; // 0x18
		::System::Int32 GDBDMANBEAE; // 0x1C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_CDFEPGGALDB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HLBIMAKDDFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_CDFEPGGALDB_HLBIMAKDDFJ_OFFSET))(this);
		}

		::System::Boolean DEAJHKKGEPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_CDFEPGGALDB_DEAJHKKGEPF_OFFSET))(this);
		}

	};
