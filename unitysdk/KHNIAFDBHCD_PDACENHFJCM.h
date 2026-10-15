#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEMBJPNIJJ;
namespace System { class String; }

#define KHNIAFDBHCD_PDACENHFJCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB408C50)
#define KHNIAFDBHCD_PDACENHFJCM_DDFDECHHJJF_OFFSET UNITYSDK_OFFSET(0xB408D00)
#define KHNIAFDBHCD_PDACENHFJCM_FIGHBPPPMIK_OFFSET UNITYSDK_OFFSET(0xB408DB0)
#define KHNIAFDBHCD_PDACENHFJCM_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0xB408FC0)

inline static constexpr unsigned int KHNIAFDBHCD_PDACENHFJCM_TypeDefinitionIndex = 77836;

	class KHNIAFDBHCD_PDACENHFJCM : public ::System::Object
	{
	public:
		::System::String* _EffectPath_k__BackingField; // 0x10
		::System::Int64 MMCPILOEJOD; // 0x18
		::System::Int32 BKBBPLOPOBF; // 0x20
		::System::Single MNDGKPEIJMK; // 0x24
		::System::Int64 DCFNPINHJCP; // 0x28
		::System::Int64 OFOACIANIFJ; // 0x30
		::System::Int64 EMECAHFPDDI; // 0x38
		::System::Int64 GMFLIPFBNHG; // 0x40
		::System::Int64 JMEACCKDOJL; // 0x48
		::System::Int32 CMMPHEBMDME; // 0x50
		::System::Int32 JGLEPFKFNKA; // 0x54
		::System::Int64 OCGACKJDEON; // 0x58
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_PDACENHFJCM_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_EffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_PDACENHFJCM_GET_EFFECTPATH_OFFSET))(this);
		}

		::System::Int64 DDFDECHHJJF()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_PDACENHFJCM_DDFDECHHJJF_OFFSET))(this);
		}

		::CBEMBJPNIJJ* FIGHBPPPMIK()
		{
			return ((::CBEMBJPNIJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_PDACENHFJCM_FIGHBPPPMIK_OFFSET))(this);
		}

	};
