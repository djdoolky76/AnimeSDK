#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDFDNJCFIHM.h"
#include "unitysdk/RPG/GameCore/MoveToPositionUpdateMode.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FloatCurve; }

#define BCNMLILBENC_AOOOLFJDMLP_OFFSET UNITYSDK_OFFSET(0x162DD320)
#define BCNMLILBENC_CTOR_OFFSET UNITYSDK_OFFSET(0x162DD3A0)

inline static constexpr unsigned int BCNMLILBENC_TypeDefinitionIndex = 56950;

	class BCNMLILBENC : public ::System::Object
	{
	public:
		::RPG::GameCore::FloatCurve* KLOKABEPKLL; // 0x10
		::System::Single CKIBNLPPIMG; // 0x18
		::RPG::MVector3 FJBPOFJPFNP; // 0x1C
		::DDFDNJCFIHM AAKHOJDBHPH; // 0x28
		::System::Single FMHMAHCNDGB; // 0x48
		::RPG::GameCore::MoveToPositionUpdateMode HGDKNBJHDAP; // 0x4C
		::System::Single NNNAGHMNFKB; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNMLILBENC_CTOR_OFFSET))(this);
		}

		::RPG::MVector3 AOOOLFJDMLP()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNMLILBENC_AOOOLFJDMLP_OFFSET))(this);
		}

	};
