#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define KMGKNFDPEKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5550D0)
#define KMGKNFDPEKG_FJFGOONJFAP_OFFSET UNITYSDK_OFFSET(0xB554FC0)
#define KMGKNFDPEKG_GET_CLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0xB5550C0)
#define KMGKNFDPEKG_HHMDNILOCOL_OFFSET UNITYSDK_OFFSET(0xB555080)
#define KMGKNFDPEKG_IHEFFDKFAOA_OFFSET UNITYSDK_OFFSET(0xB555000)
#define KMGKNFDPEKG_MJPCMPJLGMG_OFFSET UNITYSDK_OFFSET(0xB555040)

inline static constexpr unsigned int KMGKNFDPEKG_TypeDefinitionIndex = 81247;

	class KMGKNFDPEKG : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* OOFAMMJEKLC; // 0x10
		::CEEGMMCFCBG* _ClickCommand_k__BackingField; // 0x18
		::R3::ReactiveProperty_1<::System::String*>* HADHHFFPFIL; // 0x20
		::R3::ReactiveProperty_1<::System::String*>* DFCELAPKGIB; // 0x28
		::R3::ReactiveProperty_1<::System::String*>* FADILKPGCEM; // 0x30
		::System::Void _ctor(::CEEGMMCFCBG* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CEEGMMCFCBG*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KMGKNFDPEKG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::R3::Observable* FJFGOONJFAP()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGKNFDPEKG_FJFGOONJFAP_OFFSET))(this);
		}

		::R3::Observable* IHEFFDKFAOA()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGKNFDPEKG_IHEFFDKFAOA_OFFSET))(this);
		}

		::R3::Observable* MJPCMPJLGMG()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGKNFDPEKG_MJPCMPJLGMG_OFFSET))(this);
		}

		::R3::Observable* HHMDNILOCOL()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGKNFDPEKG_HHMDNILOCOL_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_ClickCommand()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGKNFDPEKG_GET_CLICKCOMMAND_OFFSET))(this);
		}

	};
