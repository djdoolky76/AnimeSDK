#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define KGMPJMIAPCI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8A9B0)
#define KGMPJMIAPCI_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xBC89C00)
#define KGMPJMIAPCI_DNIDMBNNDEL_OFFSET UNITYSDK_OFFSET(0xBC8A8A0)
#define KGMPJMIAPCI_FPHFPOHDAPB_OFFSET UNITYSDK_OFFSET(0xBC8A6B0)
#define KGMPJMIAPCI_GET_IMAGECOLOR_OFFSET UNITYSDK_OFFSET(0xBC8A950)
#define KGMPJMIAPCI_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xBC8A990)
#define KGMPJMIAPCI_HCNDMIEACOF_OFFSET UNITYSDK_OFFSET(0xBC89C70)
#define KGMPJMIAPCI_HPAEGNIBLJJ_OFFSET UNITYSDK_OFFSET(0xBC89D80)
#define KGMPJMIAPCI_JBBBABGKHIM_OFFSET UNITYSDK_OFFSET(0xBC8A600)
#define KGMPJMIAPCI_LHPBPGCKLEJ_OFFSET UNITYSDK_OFFSET(0xBC8A740)
#define KGMPJMIAPCI_NJDKOIFMKGG_OFFSET UNITYSDK_OFFSET(0xBC89F20)
#define KGMPJMIAPCI_PEFFNCHBGLP_OFFSET UNITYSDK_OFFSET(0xBC8A7F0)
#define KGMPJMIAPCI_SET_IMAGECOLOR_OFFSET UNITYSDK_OFFSET(0xBC8A970)
#define KGMPJMIAPCI_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xBC8A9A0)
#define KGMPJMIAPCI__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC89340)
#define KGMPJMIAPCI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBC892D0)

inline static constexpr unsigned int KGMPJMIAPCI_TypeDefinitionIndex = 73600;

	class KGMPJMIAPCI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* CODCKLDMKEC; // 0x60
		::UnityEngine::UI::Image* OAKJEEPAMCJ; // 0x68
		::UnityEngine::UI::Image* PBHMIIEJGLN; // 0x70
		::UnityEngine::Transform* NNAKHMJLJPH; // 0x78
		::System::String* _PrefabPath_k__BackingField; // 0x80
		::UnityEngine::Transform* FHJAAANBBAB; // 0x88
		::UnityEngine::Animation* KCOAILOHDND; // 0x90
		::UnityEngine::UI::Image* MPIMPJCHKHM; // 0x98
		::UnityEngine::UI::Image* GAIEBGOHLKO; // 0xA0
		::UnityEngine::UI::Image* IDEJFLDJCKA; // 0xA8
		::UnityEngine::UI::Image* LNFGOMDCIDI; // 0xB0
		::System::Nullable_1<::UnityEngine::Color> _ImageColor_k__BackingField; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KGMPJMIAPCI__ONINITPARAMS_OFFSET))(this, a1);
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

		::System::Nullable_1<::UnityEngine::Color> get_ImageColor()
		{
			return ((::System::Nullable_1<::UnityEngine::Color>(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_GET_IMAGECOLOR_OFFSET))(this);
		}

		::System::Void set_ImageColor(::System::Nullable_1<::UnityEngine::Color> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + KGMPJMIAPCI_SET_IMAGECOLOR_OFFSET))(this, a1);
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
