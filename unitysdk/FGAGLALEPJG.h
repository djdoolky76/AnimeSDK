#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
namespace System { class String; }

#define FGAGLALEPJG_BGNINLKAIDG_OFFSET UNITYSDK_OFFSET(0x1EC08090)
#define FGAGLALEPJG_CDADCDPPCLM_OFFSET UNITYSDK_OFFSET(0x1EBFE6B0)
#define FGAGLALEPJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFD600)
#define FGAGLALEPJG_FCGOADHGHMC_OFFSET UNITYSDK_OFFSET(0x1EC080B0)
#define FGAGLALEPJG_HFCBKCGKDIM_OFFSET UNITYSDK_OFFSET(0x1EBFE5E0)
#define FGAGLALEPJG_LJCDKNLLBBF_OFFSET UNITYSDK_OFFSET(0x1EC08030)
#define FGAGLALEPJG_MAEFDIBBNGM_OFFSET UNITYSDK_OFFSET(0x1EC07E90)
#define FGAGLALEPJG_NDMILLMLNIM_OFFSET UNITYSDK_OFFSET(0x1EC08080)
#define FGAGLALEPJG_PCAEONDNMHB_OFFSET UNITYSDK_OFFSET(0x1EC080A0)
#define FGAGLALEPJG_POJJFMOKLJN_OFFSET UNITYSDK_OFFSET(0x1EC07F00)

	class FGAGLALEPJG : public ::System::Object
	{
	public:
		::System::String* BINMMOOLLGC; // 0x10
		::System::Int64 EDGNGCFCNID; // 0x18
		::System::Int64 IKKNJMJCDOJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAGLALEPJG_CTOR_OFFSET))(this);
		}

		::RPG::Client::DesignDataShortNameHash MAEFDIBBNGM()
		{
			return ((::RPG::Client::DesignDataShortNameHash(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAGLALEPJG_MAEFDIBBNGM_OFFSET))(this);
		}

		::System::UInt32 POJJFMOKLJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAGLALEPJG_POJJFMOKLJN_OFFSET))(this);
		}

		::System::String* LJCDKNLLBBF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAGLALEPJG_LJCDKNLLBBF_OFFSET))(this);
		}

		::System::Int64 NDMILLMLNIM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAGLALEPJG_NDMILLMLNIM_OFFSET))(this);
		}

		::System::Void HFCBKCGKDIM(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FGAGLALEPJG_HFCBKCGKDIM_OFFSET))(this, a1);
		}

		::System::UInt32 BGNINLKAIDG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAGLALEPJG_BGNINLKAIDG_OFFSET))(this);
		}

		::System::Int64 PCAEONDNMHB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAGLALEPJG_PCAEONDNMHB_OFFSET))(this);
		}

		::System::Void CDADCDPPCLM(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FGAGLALEPJG_CDADCDPPCLM_OFFSET))(this, a1);
		}

		::System::UInt32 FCGOADHGHMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAGLALEPJG_FCGOADHGHMC_OFFSET))(this);
		}

	};
