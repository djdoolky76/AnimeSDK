#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace System { class Nullable; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define KGMPJMIAPCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F7340)
#define KGMPJMIAPCI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB3F6350)
#define KGMPJMIAPCI_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xB3F6590)
#define KGMPJMIAPCI_DNIDMBNNDEL_OFFSET UNITYSDK_OFFSET(0xB3F7230)
#define KGMPJMIAPCI_FPHFPOHDAPB_OFFSET UNITYSDK_OFFSET(0xB3F7040)
#define KGMPJMIAPCI_GET_IMAGECOLOR_OFFSET UNITYSDK_OFFSET(0xB3F72E0)
#define KGMPJMIAPCI_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB3F7320)
#define KGMPJMIAPCI_HCNDMIEACOF_OFFSET UNITYSDK_OFFSET(0xB3F6600)
#define KGMPJMIAPCI_HPAEGNIBLJJ_OFFSET UNITYSDK_OFFSET(0xB3F6710)
#define KGMPJMIAPCI_JBBBABGKHIM_OFFSET UNITYSDK_OFFSET(0xB3F6F90)
#define KGMPJMIAPCI_LHPBPGCKLEJ_OFFSET UNITYSDK_OFFSET(0xB3F70D0)
#define KGMPJMIAPCI_NJDKOIFMKGG_OFFSET UNITYSDK_OFFSET(0xB3F68B0)
#define KGMPJMIAPCI_PEFFNCHBGLP_OFFSET UNITYSDK_OFFSET(0xB3F7180)
#define KGMPJMIAPCI_SET_IMAGECOLOR_OFFSET UNITYSDK_OFFSET(0xB3F7300)
#define KGMPJMIAPCI_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB3F7330)
#define KGMPJMIAPCI__ONBIND_OFFSET UNITYSDK_OFFSET(0xB3F63B0)

	class KGMPJMIAPCI : public ::FMPCODLIOLG
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x60
		::UnityEngine::UI::Image* OAKJEEPAMCJ; // 0x68
		::UnityEngine::UI::Image* PBHMIIEJGLN; // 0x70
		::UnityEngine::UI::Image* LNFGOMDCIDI; // 0x78
		::UnityEngine::UI::Image* MPIMPJCHKHM; // 0x80
		::UnityEngine::UI::Image* GAIEBGOHLKO; // 0x88
		::UnityEngine::UI::Image* IDEJFLDJCKA; // 0x90
		::UnityEngine::UI::Image* CODCKLDMKEC; // 0x98
		::UnityEngine::Transform* NNAKHMJLJPH; // 0xA0
		::UnityEngine::Animation* KCOAILOHDND; // 0xA8
		::UnityEngine::Transform* FHJAAANBBAB; // 0xB0
		::System::Nullable* _ImageColor_k__BackingField; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI__ONBIND_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_DKKJNPPHDPM_OFFSET))(this, a1);
		}

		::System::Void HCNDMIEACOF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_HCNDMIEACOF_OFFSET))(this, a1);
		}

		::System::Void HPAEGNIBLJJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_HPAEGNIBLJJ_OFFSET))(this, a1);
		}

		::System::Void NJDKOIFMKGG(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_NJDKOIFMKGG_OFFSET))(this, a1);
		}

		::System::Void JBBBABGKHIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_JBBBABGKHIM_OFFSET))(this);
		}

		::System::Void LHPBPGCKLEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_LHPBPGCKLEJ_OFFSET))(this);
		}

		::System::Void PEFFNCHBGLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_PEFFNCHBGLP_OFFSET))(this);
		}

		::System::Void DNIDMBNNDEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_DNIDMBNNDEL_OFFSET))(this);
		}

		::System::Void FPHFPOHDAPB(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_FPHFPOHDAPB_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable* get_ImageColor()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_GET_IMAGECOLOR_OFFSET))(this);
		}

		::System::Void set_ImageColor(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_SET_IMAGECOLOR_OFFSET))(this, a1);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Void set_PrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_SET_PREFABPATH_OFFSET))(this, a1);
		}

	};
