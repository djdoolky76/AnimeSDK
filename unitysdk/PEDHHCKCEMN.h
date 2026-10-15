#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define PEDHHCKCEMN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1C7BEAA0)
#define PEDHHCKCEMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BEB70)
#define PEDHHCKCEMN_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1C7BEAB0)
#define PEDHHCKCEMN_HFMPHCOPNLJ_OFFSET UNITYSDK_OFFSET(0x1C7BEAC0)
#define PEDHHCKCEMN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C7BEB20)

inline static constexpr unsigned int PEDHHCKCEMN_TypeDefinitionIndex = 37248;

	class PEDHHCKCEMN : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceMoveState DLNIGFGLPLJ; // 0x10
		::RPG::MVector3 GCJMFBKLGHI; // 0x14
		::System::Int32 CPADMPOLGMC; // 0x20
		::RPG::MVector3 KIGGGJGOIGD; // 0x24
		::System::Boolean PNONHPKIPAJ; // 0x30
		::System::Boolean JBBGPCJHBFE; // 0x31
		::System::Byte _padding0[0x2];
		::System::UInt32 ELFFJOOPKJJ; // 0x34
		::System::Int32 FLEBLJKCIID; // 0x38
		::System::Int32 IIMCNHKCEJP; // 0x3C
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
