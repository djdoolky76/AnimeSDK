#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/UnityEngine/Vector4.h"
class FiveDimRenderingItem;

#define FDRIDISSOLVEOPERATION_CCTOR_OFFSET UNITYSDK_OFFSET(0x156D8B10)
#define FDRIDISSOLVEOPERATION_CDMHOOPINGE_OFFSET UNITYSDK_OFFSET(0x156D8930)
#define FDRIDISSOLVEOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x156D8AF0)
#define FDRIDISSOLVEOPERATION_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0x156D8510)
#define FDRIDISSOLVEOPERATION_EKJKBOODCMO_OFFSET UNITYSDK_OFFSET(0x156D8860)
#define FDRIDISSOLVEOPERATION_ILODBKMALJA_OFFSET UNITYSDK_OFFSET(0x156D88B0)
#define FDRIDISSOLVEOPERATION_KBHGBHPFDFB_OFFSET UNITYSDK_OFFSET(0x156D8980)
#define FDRIDISSOLVEOPERATION_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x156D8420)
#define FDRIDISSOLVEOPERATION_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x156D8050)

inline static constexpr unsigned int FDRIDissolveOperation_TypeDefinitionIndex = 47118;

	class FDRIDissolveOperation : public ::FDRIMatStateOperation
	{
	public:
		::System::Single DissolveRate; // 0x20
		::System::Single DissolveScale; // 0x24
		::System::Boolean DissolveON; // 0x28
		static ::System::Int32* StaticGet__DissolveUseCustomData()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FDRIDissolveOperation")->GetStaticField(0x13400);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_CCTOR_OFFSET))();
		}

		::System::Void PKADDEPKJFN(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_DHFBDMHFNIK_OFFSET))(this, a1);
		}

		::System::Int32 EKJKBOODCMO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_EKJKBOODCMO_OFFSET))(this);
		}

		::System::Int32 ILODBKMALJA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_ILODBKMALJA_OFFSET))(this);
		}

		::System::Int32 CDMHOOPINGE(::FiveDimRenderingItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_CDMHOOPINGE_OFFSET))(this, a1);
		}

		::System::Void KBHGBHPFDFB(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_KBHGBHPFDFB_OFFSET))(this, a1);
		}

	};
