#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"
class JECANKIDLKM;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }

#define JECANKIDLKM_ABGHHBNCNLL_1_OFFSET UNITYSDK_OFFSET(0xB962500)
#define JECANKIDLKM_ABGHHBNCNLL_OFFSET UNITYSDK_OFFSET(0xB962330)
#define JECANKIDLKM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB962E60)
#define JECANKIDLKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB962320)
#define JECANKIDLKM_DPNMCJDHAEA_OFFSET UNITYSDK_OFFSET(0xB962DA0)
#define JECANKIDLKM_EMGPIJJBGBC_OFFSET UNITYSDK_OFFSET(0xB962810)
#define JECANKIDLKM_FNPLBPIGHDI_OFFSET UNITYSDK_OFFSET(0xB962BB0)
#define JECANKIDLKM_HODGAAHCMJG_OFFSET UNITYSDK_OFFSET(0xB9627B0)
#define JECANKIDLKM_KHPDEEBOBMM_OFFSET UNITYSDK_OFFSET(0xB962C20)

inline static constexpr unsigned int JECANKIDLKM_TypeDefinitionIndex = 66546;

	class JECANKIDLKM : public ::System::Object
	{
	public:
		static ::JECANKIDLKM** StaticGet_FMJPMFEDIJL()
		{
			return (::JECANKIDLKM**)UnitySDK::FromName("", "JECANKIDLKM")->GetStaticField(0xE410);
		}

		// static const ::System::Object GJMGLDJGEFE; // 0x0
		// static const ::System::Object GOMFEKCOIHA; // 0x0
		// static const ::System::Object OHNHKCFOHMC; // 0x0
		// static const ::System::Object CLKODDLBJCO; // 0x0
		// static const ::System::Object PNGBMEDDAML; // 0x0
		// static const ::System::String* GBGAHAMLBGH; // 0x0
		// static const ::System::String* BNKGDCFJIJC; // 0x0
		// static const ::System::String* LEGFKPIEEDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECANKIDLKM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JECANKIDLKM_CCTOR_OFFSET))();
		}

		::RPG::Client::GridFightItemFrameInfo* ABGHHBNCNLL(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + JECANKIDLKM_ABGHHBNCNLL_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightItemFrameInfo* ABGHHBNCNLL_1(::System::UInt32 a1, ::RPG::GameCore::GridFightEquipCategory a2)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::System::UInt32, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + JECANKIDLKM_ABGHHBNCNLL_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 FNPLBPIGHDI(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + JECANKIDLKM_FNPLBPIGHDI_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightItemFrameInfo* EMGPIJJBGBC(::System::UInt32 a1, ::RPG::GameCore::GridFightEquipCategory a2)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::System::UInt32, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + JECANKIDLKM_EMGPIJJBGBC_OFFSET))(a1, a2);
		}

		static ::System::Boolean KHPDEEBOBMM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JECANKIDLKM_KHPDEEBOBMM_OFFSET))(a1);
		}

		static ::System::Boolean HODGAAHCMJG(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + JECANKIDLKM_HODGAAHCMJG_OFFSET))(a1);
		}

		static ::System::UInt32 DPNMCJDHAEA(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + JECANKIDLKM_DPNMCJDHAEA_OFFSET))(a1);
		}

	};
