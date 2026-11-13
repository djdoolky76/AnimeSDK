#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMAAIJFIFED.h"
class MCENJJEOOLB;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }

#define MCENJJEOOLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B83EA20)
#define MCENJJEOOLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B83E6E0)
#define MCENJJEOOLB_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x1B83E6F0)
#define MCENJJEOOLB_JIPEELKDLPD_1_OFFSET UNITYSDK_OFFSET(0x1B83E7F0)
#define MCENJJEOOLB_JIPEELKDLPD_OFFSET UNITYSDK_OFFSET(0x1B83E750)
#define MCENJJEOOLB_KHPDEEBOBMM_OFFSET UNITYSDK_OFFSET(0x1B83E8B0)

inline static constexpr unsigned int MCENJJEOOLB_TypeDefinitionIndex = 66512;

	class MCENJJEOOLB : public ::GMAAIJFIFED
	{
	public:
		static ::MCENJJEOOLB** StaticGet_FMJPMFEDIJL()
		{
			return (::MCENJJEOOLB**)UnitySDK::FromName("", "MCENJJEOOLB")->GetStaticField(0x6D840);
		}

		// static const ::System::Object BNCKFPAGOMF; // 0x0
		// static const ::System::Object AGKCOGGMIKJ; // 0x0
		// static const ::System::String* MFAMPOABLIN; // 0x0
		// static const ::System::String* IBIPFPPMDMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCENJJEOOLB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCENJJEOOLB_CCTOR_OFFSET))();
		}

		::System::Boolean GNADABFLEFM(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + MCENJJEOOLB_GNADABFLEFM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightItemFrameInfo* JIPEELKDLPD(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + MCENJJEOOLB_JIPEELKDLPD_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightItemFrameInfo* JIPEELKDLPD_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MCENJJEOOLB_JIPEELKDLPD_1_OFFSET))(a1);
		}

		static ::System::Boolean KHPDEEBOBMM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MCENJJEOOLB_KHPDEEBOBMM_OFFSET))(a1);
		}

	};
