#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace R3 { template <typename T> class Observable_1; }

#define BCKKHDBAENJ_NBCKMAFIBPI_OFFSET UNITYSDK_OFFSET(0x162E19D0)
#define BCKKHDBAENJ_NKDAHLGNOKN_OFFSET UNITYSDK_OFFSET(0x162E1BE0)

inline static constexpr unsigned int BCKKHDBAENJ_TypeDefinitionIndex = 49978;

	class BCKKHDBAENJ : public ::System::Object
	{
	public:
		static ::R3::Observable_1<::System::Boolean>* NBCKMAFIBPI(::R3::Observable_1<::RPG::Client::TextID>* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::R3::Observable_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + BCKKHDBAENJ_NBCKMAFIBPI_OFFSET))(a1);
		}

		static ::R3::Observable_1<::System::Boolean>* NKDAHLGNOKN(::R3::Observable_1<::System::Int32>* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::R3::Observable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BCKKHDBAENJ_NKDAHLGNOKN_OFFSET))(a1);
		}

	};
