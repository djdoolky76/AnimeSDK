#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define JEJLOGJHKFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1661F610)
#define JEJLOGJHKFN_DCOKDBBFPAD_OFFSET UNITYSDK_OFFSET(0x1661F380)
#define JEJLOGJHKFN_GHMPLFGCFIH_OFFSET UNITYSDK_OFFSET(0x1661EF00)
#define JEJLOGJHKFN_GJFNGHECENA_OFFSET UNITYSDK_OFFSET(0x1661EDD0)
#define JEJLOGJHKFN_HLMBMNLADOI_OFFSET UNITYSDK_OFFSET(0x1661F290)
#define JEJLOGJHKFN_HNHIPAEIGIB_OFFSET UNITYSDK_OFFSET(0x1661F3F0)
#define JEJLOGJHKFN_HODGAAHCMJG_OFFSET UNITYSDK_OFFSET(0x1661F330)
#define JEJLOGJHKFN_LMPHIKNNFIO_OFFSET UNITYSDK_OFFSET(0x1661EF60)
#define JEJLOGJHKFN_MLFKHGLKDIM_OFFSET UNITYSDK_OFFSET(0x1661EFC0)
#define JEJLOGJHKFN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1661EE20)
#define JEJLOGJHKFN_OLGBOANHKAB_OFFSET UNITYSDK_OFFSET(0x1661F510)
#define JEJLOGJHKFN__ONBIND_OFFSET UNITYSDK_OFFSET(0x1661EAF0)

inline static constexpr unsigned int JEJLOGJHKFN_TypeDefinitionIndex = 72262;

	class JEJLOGJHKFN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* FDFONIKBFMN; // 0x60
		::RPG::Client::GridFightItemConfig* DBNHBLLNBEJ; // 0x68
		::UnityEngine::Transform* HLGFPEKMBNN; // 0x70
		::UnityEngine::Transform* DPLPOKFHDCL; // 0x78
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x80
		::UnityEngine::UI::Image* HCKIBDHBPMH; // 0x88
		::RPG::Client::MonoUIColorSwitcher* IKMCLKPAKKC; // 0x90
		::UnityEngine::Transform* OKAHFPJGBOE; // 0x98
		::UnityEngine::Transform* MNLPJDCDACO; // 0xA0
		::UnityEngine::Transform* KPHBEFNBLFG; // 0xA8
		::System::Boolean HDCJMCDEDJI; // 0xB0
		// static const ::System::String* BDACPPLKLGL; // 0x0
		// static const ::System::String* NCOBHGFBONN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJLOGJHKFN__ONBIND_OFFSET))(this);
		}

		::System::Void GJFNGHECENA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_GJFNGHECENA_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::GridFightItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void GHMPLFGCFIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_GHMPLFGCFIH_OFFSET))(this, a1);
		}

		::System::Void LMPHIKNNFIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_LMPHIKNNFIO_OFFSET))(this, a1);
		}

		::System::Void MLFKHGLKDIM(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_MLFKHGLKDIM_OFFSET))(this, a1);
		}

		static ::System::Boolean HODGAAHCMJG(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_HODGAAHCMJG_OFFSET))(a1);
		}

		static ::System::Int32 DCOKDBBFPAD(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_DCOKDBBFPAD_OFFSET))(a1);
		}

		::System::Void HNHIPAEIGIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_HNHIPAEIGIB_OFFSET))(this, a1);
		}

		::System::Void OLGBOANHKAB(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_OLGBOANHKAB_OFFSET))(this, a1, a2);
		}

		::System::Void HLMBMNLADOI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JEJLOGJHKFN_HLMBMNLADOI_OFFSET))(this, a1);
		}

	};
