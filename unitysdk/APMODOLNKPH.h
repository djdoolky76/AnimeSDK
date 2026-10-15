#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveConfig.h"
class APMODOLNKPH;

#define APMODOLNKPH_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0x1CCEEB40)
#define APMODOLNKPH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CCEEBD0)
#define APMODOLNKPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEECF0)

inline static constexpr unsigned int APMODOLNKPH_TypeDefinitionIndex = 24852;

	class APMODOLNKPH : public ::RPG::GameCore::FiveDimSplineMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMODOLNKPH_CTOR_OFFSET))(this);
		}

		static ::APMODOLNKPH* BGOMKDMBLKK(::System::Int32 a1)
		{
			return ((::APMODOLNKPH*(*)(::System::Int32))((::PBYTE)hIl2Cpp + APMODOLNKPH_BGOMKDMBLKK_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMODOLNKPH_CLEAR_OFFSET))(this);
		}

	};
