#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class KKFMGCNDHGH;
namespace RPG::GameCore { class EraFlipperConfig; }
namespace System { class Object; }

#define HCLLJDKFLCA_AAAKOHOMOFP_OFFSET UNITYSDK_OFFSET(0x1B7B5740)
#define HCLLJDKFLCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B5D90)
#define HCLLJDKFLCA_DNFONKINLAK_OFFSET UNITYSDK_OFFSET(0x1B7B5980)
#define HCLLJDKFLCA_GET_DURINGFLIP_OFFSET UNITYSDK_OFFSET(0x1B7B5220)
#define HCLLJDKFLCA_GET_ISDURINGCROSSMAP_OFFSET UNITYSDK_OFFSET(0x1B7B5240)
#define HCLLJDKFLCA_HMNCMPEHHIJ_OFFSET UNITYSDK_OFFSET(0x1B7B5AA0)
#define HCLLJDKFLCA_HOKKOHGKODH_OFFSET UNITYSDK_OFFSET(0x1B7B5860)
#define HCLLJDKFLCA_IJGNEIFIMIC_OFFSET UNITYSDK_OFFSET(0x1B7B51C0)
#define HCLLJDKFLCA_LCNAEJJGIKF_OFFSET UNITYSDK_OFFSET(0x1B7B5AF0)
#define HCLLJDKFLCA_MCLNGHAIHHA_OFFSET UNITYSDK_OFFSET(0x1B7B5260)
#define HCLLJDKFLCA_MEKPGBJAFJC_OFFSET UNITYSDK_OFFSET(0x1B7B56C0)
#define HCLLJDKFLCA_MMAMNJIKHFM_OFFSET UNITYSDK_OFFSET(0x1B7B4CB0)
#define HCLLJDKFLCA_PFDDGKFLIKM_OFFSET UNITYSDK_OFFSET(0x1B7B4CF0)
#define HCLLJDKFLCA_SET_DURINGFLIP_OFFSET UNITYSDK_OFFSET(0x1B7B5230)
#define HCLLJDKFLCA_SET_ISDURINGCROSSMAP_OFFSET UNITYSDK_OFFSET(0x1B7B5250)
#define HCLLJDKFLCA__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B7B52A0)
#define HCLLJDKFLCA__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B7B5400)

inline static constexpr unsigned int HCLLJDKFLCA_TypeDefinitionIndex = 65214;

	class HCLLJDKFLCA : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::GameCore::EraFlipperConfig* NKMLNFMMKGE; // 0x10
		::KKFMGCNDHGH* HJEFLHDFJHI; // 0x18
		::System::UInt32 CFKDKLCFPEE; // 0x20
		::System::UInt32 MEPJNICGFBJ; // 0x24
		::System::Boolean _IsDuringCrossMap_k__BackingField; // 0x28
		::System::Boolean _DuringFlip_k__BackingField; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EraFlipperConfig* MMAMNJIKHFM()
		{
			return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_MMAMNJIKHFM_OFFSET))(this);
		}

		::System::Boolean PFDDGKFLIKM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_PFDDGKFLIKM_OFFSET))(this, a1, a2);
		}

		::System::Void IJGNEIFIMIC(::KKFMGCNDHGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_IJGNEIFIMIC_OFFSET))(this, a1);
		}

		::System::Boolean get_DuringFlip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_GET_DURINGFLIP_OFFSET))(this);
		}

		::System::Void set_DuringFlip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_SET_DURINGFLIP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDuringCrossMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_GET_ISDURINGCROSSMAP_OFFSET))(this);
		}

		::System::Void set_IsDuringCrossMap(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_SET_ISDURINGCROSSMAP_OFFSET))(this, a1);
		}

		::KKFMGCNDHGH* MCLNGHAIHHA()
		{
			return ((::KKFMGCNDHGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_MCLNGHAIHHA_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLJDKFLCA__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLJDKFLCA__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void MEKPGBJAFJC(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_MEKPGBJAFJC_OFFSET))(this, a1, a2);
		}

		::System::Void AAAKOHOMOFP(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_AAAKOHOMOFP_OFFSET))(this, a1, a2);
		}

		::System::Void HOKKOHGKODH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_HOKKOHGKODH_OFFSET))(this, a1, a2);
		}

		::System::Void DNFONKINLAK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_DNFONKINLAK_OFFSET))(this, a1, a2);
		}

		::System::Void HMNCMPEHHIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_HMNCMPEHHIJ_OFFSET))(this, a1);
		}

		::System::Void LCNAEJJGIKF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCLLJDKFLCA_LCNAEJJGIKF_OFFSET))(this, a1);
		}

	};
