#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PDDFOHKDPFF;

#define PDDFOHKDPFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CE5B0)
#define PDDFOHKDPFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2CE5C0)
#define PDDFOHKDPFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2CE580)

inline static constexpr unsigned int PDDFOHKDPFF_TypeDefinitionIndex = 19946;

	class PDDFOHKDPFF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CDIFPLFHIED; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 AGFMMBCEPAO; // 0x1C
		::System::Int32 GFOFKJMIGJJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDFOHKDPFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PDDFOHKDPFF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PDDFOHKDPFF*))((::PBYTE)hIl2Cpp + PDDFOHKDPFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PDDFOHKDPFF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PDDFOHKDPFF*))((::PBYTE)hIl2Cpp + PDDFOHKDPFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
