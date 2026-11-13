#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ElfSpecialEventConfig; }
namespace RPG::GameCore { class ElfWaveOrder; }

#define HJCLAOMEAIE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EFB2B50)
#define HJCLAOMEAIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB2BA0)
#define HJCLAOMEAIE_FCLEHAKOBOA_OFFSET UNITYSDK_OFFSET(0x1EFB2890)
#define HJCLAOMEAIE_HBHHGBEJAOB_OFFSET UNITYSDK_OFFSET(0x1EFB28F0)
#define HJCLAOMEAIE_HDLALOGJAPJ_OFFSET UNITYSDK_OFFSET(0x1EFB2A00)
#define HJCLAOMEAIE_HEFAGKAPKHF_OFFSET UNITYSDK_OFFSET(0x1EFB2820)
#define HJCLAOMEAIE_HJFAJMIPNAG_OFFSET UNITYSDK_OFFSET(0x1EFB2970)
#define HJCLAOMEAIE_MNMIJGHFGHL_OFFSET UNITYSDK_OFFSET(0x1EFB2A70)
#define HJCLAOMEAIE_PLKMFMMEFIN_OFFSET UNITYSDK_OFFSET(0x1EFB2AE0)

inline static constexpr unsigned int HJCLAOMEAIE_TypeDefinitionIndex = 43092;

	class HJCLAOMEAIE : public ::System::Object
	{
	public:
		::RPG::GameCore::ElfSpecialEventConfig* GFDMIMMOMFI; // 0x10
		::System::UInt32 MKGEGDICAJO; // 0x18
		::System::Boolean AEAJOFDIPCJ; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 LJHMJMMKHMB; // 0x20
		::System::Int32 NBMAGDOJDFD; // 0x24
		::System::UInt32 NMBKAIEIAPE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_CTOR_OFFSET))(this);
		}

		::System::Boolean HEFAGKAPKHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_HEFAGKAPKHF_OFFSET))(this);
		}

		::System::Boolean FCLEHAKOBOA(::RPG::GameCore::RestaurantNormalEventType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_FCLEHAKOBOA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElfWaveOrder* HBHHGBEJAOB()
		{
			return ((::RPG::GameCore::ElfWaveOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_HBHHGBEJAOB_OFFSET))(this);
		}

		::RPG::GameCore::ElfWaveOrder* HJFAJMIPNAG()
		{
			return ((::RPG::GameCore::ElfWaveOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_HJFAJMIPNAG_OFFSET))(this);
		}

		::System::Void HDLALOGJAPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_HDLALOGJAPJ_OFFSET))(this);
		}

		::System::Boolean MNMIJGHFGHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_MNMIJGHFGHL_OFFSET))(this);
		}

		::System::Boolean PLKMFMMEFIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_PLKMFMMEFIN_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCLAOMEAIE_CLEAR_OFFSET))(this);
		}

	};
