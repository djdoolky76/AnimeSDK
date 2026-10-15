#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHIDPEDODEN;
class MGBHKCMHDOK;
class NDPFOOJIAIJ;

#define OFAEFNFLDLL_CIBJNMNLKMJ_OFFSET UNITYSDK_OFFSET(0xBE31A50)

inline static constexpr unsigned int OFAEFNFLDLL_TypeDefinitionIndex = 64394;

	class OFAEFNFLDLL : public ::System::Object
	{
	public:
		static ::MGBHKCMHDOK* CIBJNMNLKMJ(::IHIDPEDODEN* a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::MGBHKCMHDOK*(*)(::IHIDPEDODEN*, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + OFAEFNFLDLL_CIBJNMNLKMJ_OFFSET))(a1, a2);
		}

	};
