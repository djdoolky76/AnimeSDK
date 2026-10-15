#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/UnityEngine/Vector4.h"
class FiveDimRenderingItem;

#define FLIPBOOKOPERATION_CCTOR_OFFSET UNITYSDK_OFFSET(0x15927B50)
#define FLIPBOOKOPERATION_CDMHOOPINGE_OFFSET UNITYSDK_OFFSET(0x15927A00)
#define FLIPBOOKOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x15927B30)
#define FLIPBOOKOPERATION_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0x15927680)
#define FLIPBOOKOPERATION_EKJKBOODCMO_OFFSET UNITYSDK_OFFSET(0x15927950)
#define FLIPBOOKOPERATION_ILODBKMALJA_OFFSET UNITYSDK_OFFSET(0x159279A0)
#define FLIPBOOKOPERATION_KBHGBHPFDFB_OFFSET UNITYSDK_OFFSET(0x15927A50)
#define FLIPBOOKOPERATION_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x159275B0)
#define FLIPBOOKOPERATION_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15927280)

inline static constexpr unsigned int FlipBookOperation_TypeDefinitionIndex = 47114;

	class FlipBookOperation : public ::FDRIMatStateOperation
	{
	public:
		::System::Int32 DefaultFrame; // 0x20
		::System::Int32 FrameLengthX; // 0x24
		::System::Int32 FrameLengthY; // 0x28
		::System::Single FlipBookSpeed; // 0x2C
		static ::System::Int32* StaticGet__FlipBookUseCustomData()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FlipBookOperation")->GetStaticField(0x12FC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_CCTOR_OFFSET))();
		}

		::System::Void PKADDEPKJFN(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_DHFBDMHFNIK_OFFSET))(this, a1);
		}

		::System::Int32 EKJKBOODCMO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_EKJKBOODCMO_OFFSET))(this);
		}

		::System::Int32 ILODBKMALJA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_ILODBKMALJA_OFFSET))(this);
		}

		::System::Int32 CDMHOOPINGE(::FiveDimRenderingItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_CDMHOOPINGE_OFFSET))(this, a1);
		}

		::System::Void KBHGBHPFDFB(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_KBHGBHPFDFB_OFFSET))(this, a1);
		}

	};
