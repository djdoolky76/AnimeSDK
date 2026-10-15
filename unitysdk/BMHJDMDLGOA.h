#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class BMHJDMDLGOA;
class EEAOMAIPHGE;
class FCOEMCEDLNL;

#define BMHJDMDLGOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E1B20)
#define BMHJDMDLGOA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E1A30)

inline static constexpr unsigned int BMHJDMDLGOA_TypeDefinitionIndex = 18158;

	class BMHJDMDLGOA : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::EEAOMAIPHGE*>* PGAKCBEJAFF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHJDMDLGOA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BMHJDMDLGOA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BMHJDMDLGOA*))((::PBYTE)hIl2Cpp + BMHJDMDLGOA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
