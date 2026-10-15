#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIDNEBBHNCM.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
class JNLPFBDFNIJ;
namespace System { class String; }

#define JOOIDILCFAN_AJABIOJEMIJ_OFFSET UNITYSDK_OFFSET(0x3260)
#define JOOIDILCFAN_BJEJGPIFMBN_OFFSET UNITYSDK_OFFSET(0x26290)
#define JOOIDILCFAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A8870)
#define JOOIDILCFAN_CHPAIEEKLGO_OFFSET UNITYSDK_OFFSET(0x211F0)
#define JOOIDILCFAN_CTOR_OFFSET UNITYSDK_OFFSET(0x3C27AC0)
#define JOOIDILCFAN_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xACE0)
#define JOOIDILCFAN_GHEACBPNKAD_OFFSET UNITYSDK_OFFSET(0x3C27BE0)
#define JOOIDILCFAN_GPFBKINKLOH_OFFSET UNITYSDK_OFFSET(0x3C27B70)
#define JOOIDILCFAN_HGNMJPCNFDO_OFFSET UNITYSDK_OFFSET(0x3C27A10)
#define JOOIDILCFAN_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x3C27B00)
#define JOOIDILCFAN_LOMKCJNICJL_OFFSET UNITYSDK_OFFSET(0x3C27960)
#define JOOIDILCFAN_NIBGBDCHKEB_OFFSET UNITYSDK_OFFSET(0x3C27C00)
#define JOOIDILCFAN_OOKBMEDBLOB_OFFSET UNITYSDK_OFFSET(0x3C27BF0)
#define JOOIDILCFAN_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xACF0)
#define JOOIDILCFAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C27CA0)

inline static constexpr unsigned int JOOIDILCFAN_TypeDefinitionIndex = 41454;

	struct alignas(8) JOOIDILCFAN
	{
		::JNLPFBDFNIJ* LOEAOEKLECL; // 0x10
		::System::Int32 _BlockIndex_k__BackingField; // 0x18
		::System::UInt32 IKKNJMJCDOJ; // 0x1C
		::System::UInt32 FOOLBDMFPCL; // 0x20
		::RPG::Client::AssetsStaticFlag MGDBOMEECMN; // 0x24
		::LIDNEBBHNCM HHDIEFCEAFP; // 0x28
		::System::Int32 CKLGFHCDCJC; // 0x2C
		::System::UInt16 HJGLHGMKOHN; // 0x30
		static ::JOOIDILCFAN* StaticGet_IFDKFOGNOAN()
		{
			return (::JOOIDILCFAN*)UnitySDK::FromName("", "JOOIDILCFAN")->GetStaticField(0x12020);
		}

		// static const ::System::Object IGLEAGJAIOJ; // 0x0
		// static const ::System::Object OPFODBOEPDN; // 0x0
		::System::Void _ctor(::JNLPFBDFNIJ* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::AssetsStaticFlag a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::JNLPFBDFNIJ*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::Client::AssetsStaticFlag, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JOOIDILCFAN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOOIDILCFAN_CCTOR_OFFSET))();
		}

		::System::Int32 get_BlockIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_GET_BLOCKINDEX_OFFSET))(this);
		}

		::System::Void set_BlockIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JOOIDILCFAN_SET_BLOCKINDEX_OFFSET))(this, a1);
		}

		::System::UInt64 LOMKCJNICJL()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_LOMKCJNICJL_OFFSET))(this);
		}

		::System::Int32 HGNMJPCNFDO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_HGNMJPCNFDO_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_LDAMHBBILAD_OFFSET))(this);
		}

		::System::UInt32 AJABIOJEMIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_AJABIOJEMIJ_OFFSET))(this);
		}

		::System::UInt32 CHPAIEEKLGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_CHPAIEEKLGO_OFFSET))(this);
		}

		::System::Int32 GPFBKINKLOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_GPFBKINKLOH_OFFSET))(this);
		}

		::System::Int32 BJEJGPIFMBN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_BJEJGPIFMBN_OFFSET))(this);
		}

		::RPG::Client::AssetsStaticFlag GHEACBPNKAD()
		{
			return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_GHEACBPNKAD_OFFSET))(this);
		}

		::System::String* OOKBMEDBLOB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_OOKBMEDBLOB_OFFSET))(this);
		}

		::System::Boolean NIBGBDCHKEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_NIBGBDCHKEB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOOIDILCFAN_TOSTRING_OFFSET))(this);
		}

	};
