#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsCityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NBLLMAPNLOK;

#define NBLLMAPNLOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E895940)
#define NBLLMAPNLOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E895710)

inline static constexpr unsigned int NBLLMAPNLOK_TypeDefinitionIndex = 14100;

	class NBLLMAPNLOK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BGGDPGOLLEM; // 0x10
		::Il2CppArray<::System::UInt32>* IDCGINLDIAD; // 0x18
		::Il2CppArray<::System::UInt32>* GKPHGMMADOJ; // 0x20
		::RPG::GameCore::LimaoNewsCityType GOKGDDNGGPI; // 0x28
		::System::UInt32 HFGNHCDNPHL; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLLMAPNLOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NBLLMAPNLOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBLLMAPNLOK*))((::PBYTE)hIl2Cpp + NBLLMAPNLOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
