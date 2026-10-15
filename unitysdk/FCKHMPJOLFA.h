#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CharacterConfig; }
namespace System { class String; }

#define FCKHMPJOLFA_AOPPGCGGHMC_OFFSET UNITYSDK_OFFSET(0x3C382F0)
#define FCKHMPJOLFA_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1CDD4C50)
#define FCKHMPJOLFA_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CDD4C20)
#define FCKHMPJOLFA_CTOR_OFFSET UNITYSDK_OFFSET(0x3C38220)
#define FCKHMPJOLFA_DEPHCHIJBFG_OFFSET UNITYSDK_OFFSET(0x3C38270)
#define FCKHMPJOLFA_FNOPGMICDFF_OFFSET UNITYSDK_OFFSET(0x3C382D0)
#define FCKHMPJOLFA_GET_BASEJSONPATH_OFFSET UNITYSDK_OFFSET(0x1D30)
#define FCKHMPJOLFA_GET_DLCPATH01_OFFSET UNITYSDK_OFFSET(0x94D0)
#define FCKHMPJOLFA_GET_DLCPATH02_OFFSET UNITYSDK_OFFSET(0x94F0)
#define FCKHMPJOLFA_GET_OVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x1D40)
#define FCKHMPJOLFA_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3C38290)
#define FCKHMPJOLFA_MJDGDMPPIJN_OFFSET UNITYSDK_OFFSET(0x3C381A0)
#define FCKHMPJOLFA_NHOJDNPKECD_OFFSET UNITYSDK_OFFSET(0x3C382B0)
#define FCKHMPJOLFA_SET_BASEJSONPATH_OFFSET UNITYSDK_OFFSET(0x94B0)
#define FCKHMPJOLFA_SET_DLCPATH01_OFFSET UNITYSDK_OFFSET(0x94E0)
#define FCKHMPJOLFA_SET_DLCPATH02_OFFSET UNITYSDK_OFFSET(0x9500)
#define FCKHMPJOLFA_SET_OVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x94C0)
#define FCKHMPJOLFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C38260)

	struct alignas(8) FCKHMPJOLFA
	{
		::System::String* _BaseJsonPath_k__BackingField; // 0x10
		::System::String* _OverridePath_k__BackingField; // 0x18
		::System::String* _DLCPath01_k__BackingField; // 0x20
		::System::String* _DLCPath02_k__BackingField; // 0x28
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_BaseJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_GET_BASEJSONPATH_OFFSET))(this);
		}

		::System::Void set_BaseJsonPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_SET_BASEJSONPATH_OFFSET))(this, a1);
		}

		::System::String* get_OverridePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_GET_OVERRIDEPATH_OFFSET))(this);
		}

		::System::Void set_OverridePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_SET_OVERRIDEPATH_OFFSET))(this, a1);
		}

		::System::String* get_DLCPath01()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_GET_DLCPATH01_OFFSET))(this);
		}

		::System::Void set_DLCPath01(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_SET_DLCPATH01_OFFSET))(this, a1);
		}

		::System::String* get_DLCPath02()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_GET_DLCPATH02_OFFSET))(this);
		}

		::System::Void set_DLCPath02(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_SET_DLCPATH02_OFFSET))(this, a1);
		}

		::System::Void MJDGDMPPIJN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_MJDGDMPPIJN_OFFSET))(this, a1);
		}

		/*
		static ::FCKHMPJOLFA BBNJCKPKPDN(::System::String* a1)
		{
			return ((::FCKHMPJOLFA(*)(::System::String*))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::String* BBNJCKPKPDN_1(::FCKHMPJOLFA a1)
		{
			return ((::System::String*(*)(::FCKHMPJOLFA))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_TOSTRING_OFFSET))(this);
		}

		::System::String* DEPHCHIJBFG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_DEPHCHIJBFG_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean NHOJDNPKECD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_NHOJDNPKECD_OFFSET))(this);
		}

		::System::Boolean FNOPGMICDFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_FNOPGMICDFF_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* AOPPGCGGHMC()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKHMPJOLFA_AOPPGCGGHMC_OFFSET))(this);
		}

	};
