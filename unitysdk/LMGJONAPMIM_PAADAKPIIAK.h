#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ElfWaveConfig; }

#define LMGJONAPMIM_PAADAKPIIAK_AIPIPNGKBDL_OFFSET UNITYSDK_OFFSET(0xC021C20)
#define LMGJONAPMIM_PAADAKPIIAK_AMFEECFMKLF_OFFSET UNITYSDK_OFFSET(0xC021A60)
#define LMGJONAPMIM_PAADAKPIIAK_BPHEGGKDACG_OFFSET UNITYSDK_OFFSET(0xC021A00)
#define LMGJONAPMIM_PAADAKPIIAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC020ED0)
#define LMGJONAPMIM_PAADAKPIIAK_EKKKIGABICE_OFFSET UNITYSDK_OFFSET(0xC0218A0)
#define LMGJONAPMIM_PAADAKPIIAK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC021900)
#define LMGJONAPMIM_PAADAKPIIAK_NNDJGBKKPHO_OFFSET UNITYSDK_OFFSET(0xC0219B0)

inline static constexpr unsigned int LMGJONAPMIM_PAADAKPIIAK_TypeDefinitionIndex = 78871;

	class LMGJONAPMIM_PAADAKPIIAK : public ::System::Object
	{
	public:
		::RPG::GameCore::ElfWaveConfig* OJFKOEKOEOK; // 0x10
		::System::Single JCEICLMJAOF; // 0x18
		::System::Single BHPAIEFIKDN; // 0x1C
		::System::Int32 AMMFMEBLKDG; // 0x20
		::System::Int32 FADKPLMMMCO; // 0x24
		::System::Single PGMIOKKLHIE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_PAADAKPIIAK_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::System::Int32 a1, ::RPG::GameCore::ElfWaveConfig* a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ElfWaveConfig*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + LMGJONAPMIM_PAADAKPIIAK_KHGIKBFDLFB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BPHEGGKDACG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMGJONAPMIM_PAADAKPIIAK_BPHEGGKDACG_OFFSET))(this, a1);
		}

		::System::Boolean AMFEECFMKLF(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMGJONAPMIM_PAADAKPIIAK_AMFEECFMKLF_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElfWaveConfig* AIPIPNGKBDL()
		{
			return ((::RPG::GameCore::ElfWaveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_PAADAKPIIAK_AIPIPNGKBDL_OFFSET))(this);
		}

		::System::Boolean NNDJGBKKPHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_PAADAKPIIAK_NNDJGBKKPHO_OFFSET))(this);
		}

		::System::Boolean EKKKIGABICE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGJONAPMIM_PAADAKPIIAK_EKKKIGABICE_OFFSET))(this);
		}

	};
