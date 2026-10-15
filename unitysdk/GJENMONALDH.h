#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/System/Object.h"
class AKIGLDOIJPH;
class HEHHCNHDPLG;
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace System { class String; }

#define GJENMONALDH_AJECIGMHHAM_OFFSET UNITYSDK_OFFSET(0x1CAB0290)
#define GJENMONALDH_FFHMEFKCKID_OFFSET UNITYSDK_OFFSET(0x1CAB0140)
#define GJENMONALDH_ILKNMCEPEMC_OFFSET UNITYSDK_OFFSET(0x1CAAFF50)
#define GJENMONALDH_NPNHKDDPNKC_OFFSET UNITYSDK_OFFSET(0x1CAB0010)
#define GJENMONALDH_ONOMIHEBBIA_OFFSET UNITYSDK_OFFSET(0x1CAB03E0)

	class GJENMONALDH : public ::System::Object
	{
	public:
		static ::AKIGLDOIJPH* ILKNMCEPEMC(::HEHHCNHDPLG* a1)
		{
			return ((::AKIGLDOIJPH*(*)(::HEHHCNHDPLG*))((::PBYTE)hIl2Cpp + GJENMONALDH_ILKNMCEPEMC_OFFSET))(a1);
		}

		static ::System::Boolean NPNHKDDPNKC(::HEHHCNHDPLG* a1)
		{
			return ((::System::Boolean(*)(::HEHHCNHDPLG*))((::PBYTE)hIl2Cpp + GJENMONALDH_NPNHKDDPNKC_OFFSET))(a1);
		}

		static ::System::Void FFHMEFKCKID(::HEHHCNHDPLG* a1, ::RPG::GameCore::FiveDimChestConfig* a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::FiveDimChestState a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::HEHHCNHDPLG*, ::RPG::GameCore::FiveDimChestConfig*, ::System::Boolean, ::System::Int32, ::RPG::GameCore::FiveDimChestState, ::System::String*))((::PBYTE)hIl2Cpp + GJENMONALDH_FFHMEFKCKID_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void AJECIGMHHAM(::HEHHCNHDPLG* a1, ::RPG::GameCore::FiveDimChestConfig* a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::FiveDimChestState a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::HEHHCNHDPLG*, ::RPG::GameCore::FiveDimChestConfig*, ::System::Boolean, ::System::Int32, ::RPG::GameCore::FiveDimChestState, ::System::String*))((::PBYTE)hIl2Cpp + GJENMONALDH_AJECIGMHHAM_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ONOMIHEBBIA(::HEHHCNHDPLG* a1)
		{
			return ((::System::Void(*)(::HEHHCNHDPLG*))((::PBYTE)hIl2Cpp + GJENMONALDH_ONOMIHEBBIA_OFFSET))(a1);
		}

	};
