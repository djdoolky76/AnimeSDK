#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EENGOMFCDEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77D780)
#define EENGOMFCDEI_ELMMLBPKEPK_OFFSET UNITYSDK_OFFSET(0x1D77CEC0)
#define EENGOMFCDEI_FDNDIGBEAEJ_OFFSET UNITYSDK_OFFSET(0x1D77D1F0)
#define EENGOMFCDEI_GET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x1D77CDC0)
#define EENGOMFCDEI_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x1D77CDE0)
#define EENGOMFCDEI_GET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1D77CE00)
#define EENGOMFCDEI_GET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x1D77CE40)
#define EENGOMFCDEI_GET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1D77CE20)
#define EENGOMFCDEI_HKNFHJAAJDJ_OFFSET UNITYSDK_OFFSET(0x1D77CE60)
#define EENGOMFCDEI_IPONPGLGGBE_OFFSET UNITYSDK_OFFSET(0x1D77D590)
#define EENGOMFCDEI_KPNHFGDPOMI_OFFSET UNITYSDK_OFFSET(0x1D77D3C0)
#define EENGOMFCDEI_SET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x1D77CDD0)
#define EENGOMFCDEI_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x1D77CDF0)
#define EENGOMFCDEI_SET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1D77CE10)
#define EENGOMFCDEI_SET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x1D77CE50)
#define EENGOMFCDEI_SET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1D77CE30)

inline static constexpr unsigned int EENGOMFCDEI_TypeDefinitionIndex = 38378;

	class EENGOMFCDEI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FODGHIDJAPP; // 0x10
		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* HCCKOGIHLPK; // 0x18
		::Il2CppArray<::System::UInt32>* DJGJFJNDDLP; // 0x20
		::System::UInt32 NEIHFJGJPHH; // 0x28
		::System::UInt32 CKGKBLMDCLJ; // 0x2C
		::System::UInt32 EKLCLHAKJFN; // 0x30
		::System::UInt32 _NextFieldEffectID_k__BackingField; // 0x34
		::System::Int32 _InitRandSeed_k__BackingField; // 0x38
		::System::Boolean DLMMGPLEGOF; // 0x3C
		::System::Boolean _TimeDynamicScale_k__BackingField; // 0x3D
		::System::Boolean _PauseCat_k__BackingField; // 0x3E
		::System::Boolean _KeepRunWithoutOnlinePlayer_k__BackingField; // 0x3F
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGOMFCDEI_CTOR_OFFSET))(this);
		}

		::System::Int32 get_InitRandSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGOMFCDEI_GET_INITRANDSEED_OFFSET))(this);
		}

		::System::Void set_InitRandSeed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EENGOMFCDEI_SET_INITRANDSEED_OFFSET))(this, a1);
		}

		::System::Boolean get_KeepRunWithoutOnlinePlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGOMFCDEI_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this);
		}

		::System::Void set_KeepRunWithoutOnlinePlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EENGOMFCDEI_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 get_NextFieldEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGOMFCDEI_GET_NEXTFIELDEFFECTID_OFFSET))(this);
		}

		::System::Void set_NextFieldEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EENGOMFCDEI_SET_NEXTFIELDEFFECTID_OFFSET))(this, a1);
		}

		::System::Boolean get_TimeDynamicScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGOMFCDEI_GET_TIMEDYNAMICSCALE_OFFSET))(this);
		}

		::System::Void set_TimeDynamicScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EENGOMFCDEI_SET_TIMEDYNAMICSCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_PauseCat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGOMFCDEI_GET_PAUSECAT_OFFSET))(this);
		}

		::System::Void set_PauseCat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EENGOMFCDEI_SET_PAUSECAT_OFFSET))(this, a1);
		}

		::System::Void HKNFHJAAJDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENGOMFCDEI_HKNFHJAAJDJ_OFFSET))(this);
		}

		::System::Void ELMMLBPKEPK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EENGOMFCDEI_ELMMLBPKEPK_OFFSET))(this, a1);
		}

		::System::Void FDNDIGBEAEJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EENGOMFCDEI_FDNDIGBEAEJ_OFFSET))(this, a1);
		}

		::System::Void KPNHFGDPOMI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EENGOMFCDEI_KPNHFGDPOMI_OFFSET))(this, a1);
		}

		::System::Void IPONPGLGGBE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EENGOMFCDEI_IPONPGLGGBE_OFFSET))(this, a1);
		}

	};
