#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
namespace System { class String; }

#define GPJOPLNKAPM_AJABIOJEMIJ_OFFSET UNITYSDK_OFFSET(0x211F0)
#define GPJOPLNKAPM_BJEJGPIFMBN_OFFSET UNITYSDK_OFFSET(0xEDD90)
#define GPJOPLNKAPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C486710)
#define GPJOPLNKAPM_CHPAIEEKLGO_OFFSET UNITYSDK_OFFSET(0xACE0)
#define GPJOPLNKAPM_GHEACBPNKAD_OFFSET UNITYSDK_OFFSET(0x2ED4E10)
#define GPJOPLNKAPM_GPFBKINKLOH_OFFSET UNITYSDK_OFFSET(0x2ED56B0)
#define GPJOPLNKAPM_HGNMJPCNFDO_OFFSET UNITYSDK_OFFSET(0xFE70)
#define GPJOPLNKAPM_JPNJJLBKFMF_OFFSET UNITYSDK_OFFSET(0xFE70)
#define GPJOPLNKAPM_LOMKCJNICJL_OFFSET UNITYSDK_OFFSET(0x94D0)
#define GPJOPLNKAPM_NIBGBDCHKEB_OFFSET UNITYSDK_OFFSET(0x3C27880)
#define GPJOPLNKAPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C27900)

inline static constexpr unsigned int GPJOPLNKAPM_TypeDefinitionIndex = 41468;

	struct alignas(4) GPJOPLNKAPM
	{
		::System::Int32 NDFGHECBPAP; // 0x10
		::System::Int32 PNKNCFGGBKA; // 0x14
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::UInt32 FOOLBDMFPCL; // 0x1C
		::System::UInt64 IMCFADGAEIN; // 0x20
		::System::Int32 CKLGFHCDCJC; // 0x28
		::System::UInt16 HJGLHGMKOHN; // 0x2C
		::RPG::Client::AssetsStaticFlag MGDBOMEECMN; // 0x2E
		static ::GPJOPLNKAPM* StaticGet_IFDKFOGNOAN()
		{
			return (::GPJOPLNKAPM*)UnitySDK::FromName("", "GPJOPLNKAPM")->GetStaticField(0x15CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPJOPLNKAPM_CCTOR_OFFSET))();
		}

		::System::Int32 HGNMJPCNFDO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_HGNMJPCNFDO_OFFSET))(this);
		}

		::System::Int32 JPNJJLBKFMF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_JPNJJLBKFMF_OFFSET))(this);
		}

		::System::UInt64 LOMKCJNICJL()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_LOMKCJNICJL_OFFSET))(this);
		}

		::System::UInt32 AJABIOJEMIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_AJABIOJEMIJ_OFFSET))(this);
		}

		::System::UInt32 CHPAIEEKLGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_CHPAIEEKLGO_OFFSET))(this);
		}

		::System::Int32 GPFBKINKLOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_GPFBKINKLOH_OFFSET))(this);
		}

		::System::Int32 BJEJGPIFMBN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_BJEJGPIFMBN_OFFSET))(this);
		}

		::RPG::Client::AssetsStaticFlag GHEACBPNKAD()
		{
			return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_GHEACBPNKAD_OFFSET))(this);
		}

		::System::Boolean NIBGBDCHKEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_NIBGBDCHKEB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOPLNKAPM_TOSTRING_OFFSET))(this);
		}

	};
