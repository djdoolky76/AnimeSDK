#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/VertColFlipBookMode.h"
#include "unitysdk/UnityEngine/Vector4.h"
class FiveDimRenderingItem;

#define VERTCOLFLIPBOOKOPERATION_CCTOR_OFFSET UNITYSDK_OFFSET(0xE9EC3C0)
#define VERTCOLFLIPBOOKOPERATION_CDMHOOPINGE_OFFSET UNITYSDK_OFFSET(0xE9EC1B0)
#define VERTCOLFLIPBOOKOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0xE9EC3B0)
#define VERTCOLFLIPBOOKOPERATION_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xE9EBDE0)
#define VERTCOLFLIPBOOKOPERATION_EKJKBOODCMO_OFFSET UNITYSDK_OFFSET(0xE9EC0E0)
#define VERTCOLFLIPBOOKOPERATION_ILODBKMALJA_OFFSET UNITYSDK_OFFSET(0xE9EC130)
#define VERTCOLFLIPBOOKOPERATION_IPFFDLNBGCE_OFFSET UNITYSDK_OFFSET(0xE9EBAC0)
#define VERTCOLFLIPBOOKOPERATION_KBHGBHPFDFB_OFFSET UNITYSDK_OFFSET(0xE9EC260)
#define VERTCOLFLIPBOOKOPERATION_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xE9EB990)
#define VERTCOLFLIPBOOKOPERATION_MDKABCNCFJC_OFFSET UNITYSDK_OFFSET(0xE9EB900)
#define VERTCOLFLIPBOOKOPERATION_NJNFEHIBNEJ_OFFSET UNITYSDK_OFFSET(0xE9EBC50)
#define VERTCOLFLIPBOOKOPERATION_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE9EB580)

inline static constexpr unsigned int VertColFlipBookOperation_TypeDefinitionIndex = 47116;

	class VertColFlipBookOperation : public ::FDRIMatStateOperation
	{
	public:
		::VertColFlipBookMode Mode; // 0x20
		::System::Int32 FrameID0; // 0x24
		::System::Int32 FrameID1; // 0x28
		::System::Int32 FrameID2; // 0x2C
		::System::Int32 FrameID3; // 0x30
		::System::Int32 FrameID4; // 0x34
		::System::Int32 FrameID5; // 0x38
		static ::System::Int32* StaticGet__FlipBookUseCustomData()
		{
			return (::System::Int32*)UnitySDK::FromName("", "VertColFlipBookOperation")->GetStaticField(0x4520);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_CCTOR_OFFSET))();
		}

		::System::Void PKADDEPKJFN(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Int32 MDKABCNCFJC(::FiveDimRenderingItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_MDKABCNCFJC_OFFSET))(this, a1);
		}

		::System::Int32 IPFFDLNBGCE(::FiveDimRenderingItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_IPFFDLNBGCE_OFFSET))(this, a1);
		}

		::System::Int32 NJNFEHIBNEJ(::FiveDimRenderingItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_NJNFEHIBNEJ_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_DHFBDMHFNIK_OFFSET))(this, a1);
		}

		::System::Int32 EKJKBOODCMO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_EKJKBOODCMO_OFFSET))(this);
		}

		::System::Int32 ILODBKMALJA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_ILODBKMALJA_OFFSET))(this);
		}

		::System::Int32 CDMHOOPINGE(::FiveDimRenderingItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_CDMHOOPINGE_OFFSET))(this, a1);
		}

		::System::Void KBHGBHPFDFB(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_KBHGBHPFDFB_OFFSET))(this, a1);
		}

	};
