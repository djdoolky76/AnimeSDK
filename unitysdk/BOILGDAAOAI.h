#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BOILGDAAOAI_AFHLFHPMJMC_OFFSET UNITYSDK_OFFSET(0x7CDD40)
#define BOILGDAAOAI_BBCEAGAHFIP_OFFSET UNITYSDK_OFFSET(0x7CDD20)
#define BOILGDAAOAI_BOKLLHPNEHA_OFFSET UNITYSDK_OFFSET(0x7CDD80)
#define BOILGDAAOAI_FAHDOHFFEAJ_OFFSET UNITYSDK_OFFSET(0x7CDD50)
#define BOILGDAAOAI_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x7CDD00)
#define BOILGDAAOAI_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x7CDC30)
#define BOILGDAAOAI_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x7CDCE0)
#define BOILGDAAOAI_GGNMILCEMAD_OFFSET UNITYSDK_OFFSET(0x7CDD70)
#define BOILGDAAOAI_GMJGDEGGLKG_OFFSET UNITYSDK_OFFSET(0x5C9C70)
#define BOILGDAAOAI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x18589DF0)
#define BOILGDAAOAI_JHNCACEAJNI_OFFSET UNITYSDK_OFFSET(0x7CDD60)
#define BOILGDAAOAI_JIHMILFPAJD_OFFSET UNITYSDK_OFFSET(0x7CDD10)
#define BOILGDAAOAI_POMONPHIEEP_OFFSET UNITYSDK_OFFSET(0x7CDD30)
#define BOILGDAAOAI__CTOR_OFFSET UNITYSDK_OFFSET(0x7CDB60)

inline static constexpr unsigned int BOILGDAAOAI_TypeDefinitionIndex = 84327;

struct alignas(8) BOILGDAAOAI
{
	::Foundation::Variable_1<::Foundation::Unreal::FTransform> ANDOJOBODMN; // 0x10
	::System::Byte _padding0[0x30];
	::Foundation::Clamped_1<::System::Single> DFPFNIPHHJM; // 0x48
	::System::Byte _padding1[0x10];
	::Foundation::Clamped_1<::System::Single> EJFNGFICLEF; // 0x60
	::System::Byte _padding2[0x10];
	::Foundation::Clamped_1<::System::Single> GOBHMPCBMFO; // 0x78
	::System::Byte _padding3[0x10];
	::System::Nullable_1<::UnityEngine::Quaternion> CODCPCADOAJ; // 0x90
	::System::Byte _padding4[0xC];
	::System::Nullable_1<::UnityEngine::Vector3> DIPDDPPDCAL; // 0xA4
	::System::Byte _padding5[0x8];
	::System::Int32 MALLIFNIPCL; // 0xB4
	::System::Single PCJOKDOHCLM; // 0xB8

	::System::Void _ctor(::Foundation::Variable_1<::Foundation::Unreal::FTransform> FPBNHPCLHMI, ::Foundation::Clamped_1<::System::Single> IBCAFNKFIDH, ::Foundation::Clamped_1<::System::Single> FLKMOKLIPKN, ::Foundation::Clamped_1<::System::Single> NPHOPECPHLF, ::System::Single FPLKICKPKNB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::Foundation::Clamped_1<::System::Single>, ::Foundation::Clamped_1<::System::Single>, ::Foundation::Clamped_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI__CTOR_OFFSET))(this, FPBNHPCLHMI, IBCAFNKFIDH, FLKMOKLIPKN, NPHOPECPHLF, FPLKICKPKNB);
	}

	::UnityEngine::Vector3 get_Location()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILGDAAOAI_GET_LOCATION_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILGDAAOAI_GET_ROTATION_OFFSET))(this);
	}

	::System::Single get_FieldOfView()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILGDAAOAI_GET_FIELDOFVIEW_OFFSET))(this);
	}

	::System::Single JIHMILFPAJD(::System::Single NHFLBHJHOIC)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI_JIHMILFPAJD_OFFSET))(this, NHFLBHJHOIC);
	}

	::System::Single BBCEAGAHFIP(::System::Single NPHOPECPHLF)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI_BBCEAGAHFIP_OFFSET))(this, NPHOPECPHLF);
	}

	::System::Single POMONPHIEEP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILGDAAOAI_POMONPHIEEP_OFFSET))(this);
	}

	::System::Single AFHLFHPMJMC(::System::Single DKJACOOKAFE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI_AFHLFHPMJMC_OFFSET))(this, DKJACOOKAFE);
	}

	::System::Single FAHDOHFFEAJ(::System::Single FLKMOKLIPKN)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI_FAHDOHFFEAJ_OFFSET))(this, FLKMOKLIPKN);
	}

	::System::Single JHNCACEAJNI(::System::Single DMAFDMDAGKK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI_JHNCACEAJNI_OFFSET))(this, DMAFDMDAGKK);
	}

	::System::Void GGNMILCEMAD(::System::Int32 IIFMJFJOOCK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI_GGNMILCEMAD_OFFSET))(this, IIFMJFJOOCK, PMNLNNGEIFM);
	}

	/*
	static ::BOILGDAAOAI JFDOOELFAOA(::Foundation::Variable_1<::Foundation::Unreal::FTransform> FPBNHPCLHMI, ::System::Single CDHFJMFDACB, ::System::Single OOLDPMFJCAI, ::System::Single JEFKCFHGJFB, ::System::Single LHFGKEOOIJC, ::System::Single HKMBEBBAHOE, ::System::Single DDILKDCIEGJ, ::System::Single AOBEINLCOAO, ::System::Single FPLKICKPKNB)
	{
		return ((::BOILGDAAOAI(*)(::Foundation::Variable_1<::Foundation::Unreal::FTransform>, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI_JFDOOELFAOA_OFFSET))(FPBNHPCLHMI, CDHFJMFDACB, OOLDPMFJCAI, JEFKCFHGJFB, LHFGKEOOIJC, HKMBEBBAHOE, DDILKDCIEGJ, AOBEINLCOAO, FPLKICKPKNB);
	}
	*/

	::System::Single BOKLLHPNEHA(::System::Single IBCAFNKFIDH)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOILGDAAOAI_BOKLLHPNEHA_OFFSET))(this, IBCAFNKFIDH);
	}

	::System::Single GMJGDEGGLKG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILGDAAOAI_GMJGDEGGLKG_OFFSET))(this);
	}
};
