#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace R3 { class Observable; }

#define BCKKHDBAENJ_NBCKMAFIBPI_OFFSET UNITYSDK_OFFSET(0x162E19D0)
#define BCKKHDBAENJ_NKDAHLGNOKN_OFFSET UNITYSDK_OFFSET(0x162E1BE0)

inline static constexpr unsigned int BCKKHDBAENJ_TypeDefinitionIndex = 49978;

	class BCKKHDBAENJ : public ::System::Object
	{
	public:
		static ::R3::Observable* NBCKMAFIBPI(::R3::Observable* a1)
		{
			return ((::R3::Observable*(*)(::R3::Observable*))((::PBYTE)hIl2Cpp + BCKKHDBAENJ_NBCKMAFIBPI_OFFSET))(a1);
		}

		static ::R3::Observable* NKDAHLGNOKN(::R3::Observable* a1)
		{
			return ((::R3::Observable*(*)(::R3::Observable*))((::PBYTE)hIl2Cpp + BCKKHDBAENJ_NKDAHLGNOKN_OFFSET))(a1);
		}

	};
