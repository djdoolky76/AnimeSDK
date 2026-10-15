#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGGDOPNKDLK_CDFEPGGALDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B9980)
#define BGGDOPNKDLK_CDFEPGGALDB_DEAJHKKGEPF_OFFSET UNITYSDK_OFFSET(0x1C5BD6D0)
#define BGGDOPNKDLK_CDFEPGGALDB_HLBIMAKDDFJ_OFFSET UNITYSDK_OFFSET(0x1C5BD680)

inline static constexpr unsigned int BGGDOPNKDLK_CDFEPGGALDB_TypeDefinitionIndex = 37262;

	class BGGDOPNKDLK_CDFEPGGALDB : public ::System::Object
	{
	public:
		::System::UInt32 PNICPEMCAAJ; // 0x10
		::System::Boolean CKGOOGKPMPP; // 0x14
		::System::Boolean LFHAEPJOOLD; // 0x15
		::System::Boolean KFJFIOGODAA; // 0x16
		::System::Byte _padding0[0x1];
		::System::Int32 GDBDMANBEAE; // 0x18
		::System::Int32 LJDHGFECMHJ; // 0x1C
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
