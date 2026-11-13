#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define PEDHHCKCEMN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1B0A02C0)
#define PEDHHCKCEMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A0390)
#define PEDHHCKCEMN_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1B0A02D0)
#define PEDHHCKCEMN_HFMPHCOPNLJ_OFFSET UNITYSDK_OFFSET(0x1B0A02E0)
#define PEDHHCKCEMN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1B0A0340)

inline static constexpr unsigned int PEDHHCKCEMN_TypeDefinitionIndex = 38176;

	class PEDHHCKCEMN : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceMoveState DLNIGFGLPLJ; // 0x10
		::RPG::MVector3 KIGGGJGOIGD; // 0x14
		::System::Int32 FLEBLJKCIID; // 0x20
		::System::Boolean JBBGPCJHBFE; // 0x24
		::System::Boolean PNONHPKIPAJ; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 ELFFJOOPKJJ; // 0x28
		::System::Int32 IIMCNHKCEJP; // 0x2C
		::RPG::MVector3 GCJMFBKLGHI; // 0x30
		::System::Int32 CPADMPOLGMC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDHHCKCEMN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceMoveState BGDKFHEBDFJ()
		{
			return ((::RPG::GameCore::CakeRaceMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDHHCKCEMN_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + PEDHHCKCEMN_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::Boolean HFMPHCOPNLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDHHCKCEMN_HFMPHCOPNLJ_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDHHCKCEMN_KHGIKBFDLFB_OFFSET))(this);
		}

	};
