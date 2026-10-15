#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNEBINMALON;
namespace RPG::GameCore { class ItemConfig; }

#define EBIGAFIGJCG_BHENJJJJEDD_OFFSET UNITYSDK_OFFSET(0x12CF9680)
#define EBIGAFIGJCG_BMDMAHCKBMI_OFFSET UNITYSDK_OFFSET(0x12CF9160)
#define EBIGAFIGJCG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF9700)

inline static constexpr unsigned int EBIGAFIGJCG_TypeDefinitionIndex = 65706;

	class EBIGAFIGJCG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIGAFIGJCG_CTOR_OFFSET))(this);
		}

		::System::Boolean BMDMAHCKBMI(::PNEBINMALON* a1, ::RPG::GameCore::ItemConfig* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::Boolean a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNEBINMALON*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EBIGAFIGJCG_BMDMAHCKBMI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void BHENJJJJEDD(::PNEBINMALON* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::PNEBINMALON*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EBIGAFIGJCG_BHENJJJJEDD_OFFSET))(this, a1, a2, a3);
		}

	};
