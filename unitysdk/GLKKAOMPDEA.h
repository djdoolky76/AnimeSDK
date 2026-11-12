#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define GLKKAOMPDEA_CTOR_OFFSET UNITYSDK_OFFSET(0x16A3E180)
#define GLKKAOMPDEA_GBIKMEMOECC_OFFSET UNITYSDK_OFFSET(0x16A3E190)
#define GLKKAOMPDEA_UPDATE_OFFSET UNITYSDK_OFFSET(0x16A3E230)

inline static constexpr unsigned int GLKKAOMPDEA_TypeDefinitionIndex = 66617;

	class GLKKAOMPDEA : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + GLKKAOMPDEA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GBIKMEMOECC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKKAOMPDEA_GBIKMEMOECC_OFFSET))(this);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + GLKKAOMPDEA_UPDATE_OFFSET))(this, a1);
		}

	};
