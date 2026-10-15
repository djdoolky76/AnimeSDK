#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBCGKOIEMKF.h"
class FCOEMCEDLNL;
class FKNPFPOFKPI;
namespace RPG::GameCore { class DynamicFloat; }

#define FKNPFPOFKPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFF470)
#define FKNPFPOFKPI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDFF480)
#define FKNPFPOFKPI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFF380)

inline static constexpr unsigned int FKNPFPOFKPI_TypeDefinitionIndex = 23338;

	class FKNPFPOFKPI : public ::GBCGKOIEMKF
	{
	public:
		::RPG::GameCore::DynamicFloat* KIPAGNCANAJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNPFPOFKPI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FKNPFPOFKPI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FKNPFPOFKPI*))((::PBYTE)hIl2Cpp + FKNPFPOFKPI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FKNPFPOFKPI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FKNPFPOFKPI*))((::PBYTE)hIl2Cpp + FKNPFPOFKPI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
