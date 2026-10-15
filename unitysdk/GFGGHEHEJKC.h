#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DPairState.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"
class FPNHGPEICOG;

#define GFGGHEHEJKC_CLEAR_OFFSET UNITYSDK_OFFSET(0x159EB700)
#define GFGGHEHEJKC_CTOR_OFFSET UNITYSDK_OFFSET(0x159EB800)
#define GFGGHEHEJKC_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x159EB7B0)
#define GFGGHEHEJKC_NEACLNIKMHO_OFFSET UNITYSDK_OFFSET(0x159EB750)

inline static constexpr unsigned int GFGGHEHEJKC_TypeDefinitionIndex = 53676;

	class GFGGHEHEJKC : public ::System::Object
	{
	public:
		::FPNHGPEICOG* LDLGPNDLDFN; // 0x10
		::FPNHGPEICOG* MJPCDKHPGIJ; // 0x18
		::RPG::GameCore::Collision2DPairState MEPFOEEGBEA; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 BAMHHKAPJBG; // 0x28
		::RPG::GameCore::FixVec2 OBADDJMDKIP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGGHEHEJKC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGGHEHEJKC_CLEAR_OFFSET))(this);
		}

		::System::Void NEACLNIKMHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFGGHEHEJKC_NEACLNIKMHO_OFFSET))(this, a1);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGGHEHEJKC_JKEONEEPIHH_OFFSET))(this);
		}

	};
