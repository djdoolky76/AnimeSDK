#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OEMHFAKHIIF;

#define OEMHFAKHIIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E468AF0)
#define OEMHFAKHIIF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E468B00)
#define OEMHFAKHIIF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E468AB0)

inline static constexpr unsigned int OEMHFAKHIIF_TypeDefinitionIndex = 20276;

	class OEMHFAKHIIF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single DAJHCEKHNBH; // 0x18
		::System::Int32 AGFMMBCEPAO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMHFAKHIIF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OEMHFAKHIIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OEMHFAKHIIF*))((::PBYTE)hIl2Cpp + OEMHFAKHIIF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OEMHFAKHIIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OEMHFAKHIIF*))((::PBYTE)hIl2Cpp + OEMHFAKHIIF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
