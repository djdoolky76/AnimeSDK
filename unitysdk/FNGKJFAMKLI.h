#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelServerEffectType.h"
#include "unitysdk/System/Object.h"
class FNGKJFAMKLI;
namespace RPG::GameCore { class ChimeraDuelEffectRow; }

#define FNGKJFAMKLI_AHEMAHCNALB_OFFSET UNITYSDK_OFFSET(0x15864B40)
#define FNGKJFAMKLI_CAPBIMAEKPK_OFFSET UNITYSDK_OFFSET(0x15864A00)
#define FNGKJFAMKLI_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x15864AA0)
#define FNGKJFAMKLI_CTOR_OFFSET UNITYSDK_OFFSET(0x15864C10)
#define FNGKJFAMKLI_DHNMAKMLGHP_OFFSET UNITYSDK_OFFSET(0x15864AF0)
#define FNGKJFAMKLI_FFICHBCNMLP_OFFSET UNITYSDK_OFFSET(0x15864A50)
#define FNGKJFAMKLI_GET__ROW_OFFSET UNITYSDK_OFFSET(0x15864950)
#define FNGKJFAMKLI_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x158649B0)
#define FNGKJFAMKLI_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0x15864B90)
#define FNGKJFAMKLI_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x15864960)

inline static constexpr unsigned int FNGKJFAMKLI_TypeDefinitionIndex = 63358;

	class FNGKJFAMKLI : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelEffectRow* __Row_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelEffectRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_MJGKNFEILLI_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelServerEffectType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::ChimeraDuelServerEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Int32 CAPBIMAEKPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_CAPBIMAEKPK_OFFSET))(this);
		}

		::System::Int32 FFICHBCNMLP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_FFICHBCNMLP_OFFSET))(this);
		}

		::System::Int32 CIHIACBANKF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_CIHIACBANKF_OFFSET))(this);
		}

		::System::Boolean DHNMAKMLGHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_DHNMAKMLGHP_OFFSET))(this);
		}

		::System::Int32 AHEMAHCNALB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_AHEMAHCNALB_OFFSET))(this);
		}

		static ::FNGKJFAMKLI* LHLALAKKKKJ(::System::UInt32 a1)
		{
			return ((::FNGKJFAMKLI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FNGKJFAMKLI_LHLALAKKKKJ_OFFSET))(a1);
		}

	};
