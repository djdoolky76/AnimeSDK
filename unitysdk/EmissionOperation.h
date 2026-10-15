#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class FiveDimRenderingItem;

#define EMISSIONOPERATION_CCTOR_OFFSET UNITYSDK_OFFSET(0x155E4560)
#define EMISSIONOPERATION_CDMHOOPINGE_OFFSET UNITYSDK_OFFSET(0x155E43D0)
#define EMISSIONOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x155E4540)
#define EMISSIONOPERATION_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0x155E4000)
#define EMISSIONOPERATION_EKJKBOODCMO_OFFSET UNITYSDK_OFFSET(0x155E4300)
#define EMISSIONOPERATION_ILODBKMALJA_OFFSET UNITYSDK_OFFSET(0x155E4350)
#define EMISSIONOPERATION_KBHGBHPFDFB_OFFSET UNITYSDK_OFFSET(0x155E4420)
#define EMISSIONOPERATION_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x155E3EF0)
#define EMISSIONOPERATION_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x155E3C20)

inline static constexpr unsigned int EmissionOperation_TypeDefinitionIndex = 47117;

	class EmissionOperation : public ::FDRIMatStateOperation
	{
	public:
		::UnityEngine::Color EmissionColor; // 0x20
		::System::Single EmissionIntensity; // 0x30
		::System::Int32 TargetMaterialID; // 0x34
		static ::System::Int32* StaticGet__EmissionUseCustomData()
		{
			return (::System::Int32*)UnitySDK::FromName("", "EmissionOperation")->GetStaticField(0x13260);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMISSIONOPERATION_CCTOR_OFFSET))();
		}

		::System::Void PKADDEPKJFN(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void DHFBDMHFNIK(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_DHFBDMHFNIK_OFFSET))(this, a1);
		}

		::System::Int32 EKJKBOODCMO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_EKJKBOODCMO_OFFSET))(this);
		}

		::System::Int32 ILODBKMALJA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_ILODBKMALJA_OFFSET))(this);
		}

		::System::Int32 CDMHOOPINGE(::FiveDimRenderingItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_CDMHOOPINGE_OFFSET))(this, a1);
		}

		::System::Void KBHGBHPFDFB(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + EMISSIONOPERATION_KBHGBHPFDFB_OFFSET))(this, a1);
		}

	};
