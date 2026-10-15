#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define PEDHHCKCEMN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1C7ECC10)
#define PEDHHCKCEMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7ECCE0)
#define PEDHHCKCEMN_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1C7ECC20)
#define PEDHHCKCEMN_HFMPHCOPNLJ_OFFSET UNITYSDK_OFFSET(0x1C7ECC30)
#define PEDHHCKCEMN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C7ECC90)

	class PEDHHCKCEMN : public ::System::Object
	{
	public:
		::RPG::MVector3 GCJMFBKLGHI; // 0x10
		::System::UInt32 ELFFJOOPKJJ; // 0x1C
		::System::Int32 IIMCNHKCEJP; // 0x20
		::RPG::MVector3 KIGGGJGOIGD; // 0x24
		::System::Int32 CPADMPOLGMC; // 0x30
		::System::Boolean PNONHPKIPAJ; // 0x34
		::System::Boolean JBBGPCJHBFE; // 0x35
		::System::Byte _padding0[0x2];
		::System::Int32 FLEBLJKCIID; // 0x38
		::RPG::GameCore::CakeRaceMoveState DLNIGFGLPLJ; // 0x3C
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
