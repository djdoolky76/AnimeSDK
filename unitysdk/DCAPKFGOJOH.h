#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKFPFNBKMLD;
namespace RPG::Client { class ChimeraDuelTalkData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace RPG::GameCore { class ChimeraDuelExcelValueGetter; }

#define DCAPKFGOJOH_ACMNJPKJKBG_OFFSET UNITYSDK_OFFSET(0xE2313D0)
#define DCAPKFGOJOH_COFEBDFNLGB_OFFSET UNITYSDK_OFFSET(0xE231210)
#define DCAPKFGOJOH_CTOR_OFFSET UNITYSDK_OFFSET(0xE231700)
#define DCAPKFGOJOH_HNJKJAOFNHK_OFFSET UNITYSDK_OFFSET(0xE2312A0)
#define DCAPKFGOJOH_LGEOCGMHOOH_OFFSET UNITYSDK_OFFSET(0xE231100)
#define DCAPKFGOJOH_OEMGHLFEFKG_OFFSET UNITYSDK_OFFSET(0xE2315B0)

inline static constexpr unsigned int DCAPKFGOJOH_TypeDefinitionIndex = 78279;

	class DCAPKFGOJOH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAPKFGOJOH_CTOR_OFFSET))(this);
		}

		::System::Boolean LGEOCGMHOOH(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::FKFPFNBKMLD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::FKFPFNBKMLD*))((::PBYTE)hIl2Cpp + DCAPKFGOJOH_LGEOCGMHOOH_OFFSET))(this, a1, a2);
		}

		::System::Boolean COFEBDFNLGB(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::RPG::Client::ChimeraDuelTalkData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + DCAPKFGOJOH_COFEBDFNLGB_OFFSET))(this, a1, a2);
		}

		::System::Boolean ACMNJPKJKBG(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::FKFPFNBKMLD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::FKFPFNBKMLD*))((::PBYTE)hIl2Cpp + DCAPKFGOJOH_ACMNJPKJKBG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HNJKJAOFNHK(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::FKFPFNBKMLD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::FKFPFNBKMLD*))((::PBYTE)hIl2Cpp + DCAPKFGOJOH_HNJKJAOFNHK_OFFSET))(this, a1, a2);
		}

		::System::Single OEMGHLFEFKG(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelExcelValueGetter* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelExcelValueGetter*))((::PBYTE)hIl2Cpp + DCAPKFGOJOH_OEMGHLFEFKG_OFFSET))(this, a1, a2);
		}

	};
