#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LGOGPAPPJJP_OHNOAOPLEGP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGOGPAPPJJP_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x1684DB00)
#define LGOGPAPPJJP_BIONFBGOPBJ_OFFSET UNITYSDK_OFFSET(0x1684D7E0)
#define LGOGPAPPJJP_EMLGALPFPKA_OFFSET UNITYSDK_OFFSET(0x1684D3F0)
#define LGOGPAPPJJP_HHAMPDLGLHF_OFFSET UNITYSDK_OFFSET(0x1684DA50)
#define LGOGPAPPJJP_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x1684D670)
#define LGOGPAPPJJP_KHENDNCBPMB_OFFSET UNITYSDK_OFFSET(0x1684DCD0)
#define LGOGPAPPJJP_OHGBCKABLFB_OFFSET UNITYSDK_OFFSET(0x1684D460)
#define LGOGPAPPJJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1684D2D0)

inline static constexpr unsigned int LGOGPAPPJJP_TypeDefinitionIndex = 90975;

class LGOGPAPPJJP : public ::System::Object
{
public:
	// static const ::System::Int32 ABMDJAKCMOH = 0x3; // 0x0
	// static const ::System::Int32 BHKDFGKKPKG = 0x3C; // 0x0
	// static const ::System::Single ONGIIOKCFMB; // 0x0
	::LGOGPAPPJJP_OHNOAOPLEGP* MEJDLAGLPCA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* DNNLDGHAMOO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP__CTOR_OFFSET))(this);
	}

	::System::Void EMLGALPFPKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_EMLGALPFPKA_OFFSET))(this);
	}

	::System::Void OHGBCKABLFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHGBCKABLFB_OFFSET))(this);
	}

	static ::System::Void JLIMOLHLFAK(::LGOGPAPPJJP_OHNOAOPLEGP* JMDHBJMNBCP, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::String* IDOPOGOMOBE)
	{
		return ((::System::Void(*)(::LGOGPAPPJJP_OHNOAOPLEGP*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_JLIMOLHLFAK_OFFSET))(JMDHBJMNBCP, GIAEPMKCBIB, DOBFFIICAII, IDOPOGOMOBE);
	}

	::System::Void BIONFBGOPBJ(::System::UInt32 BKLGNCBNEGM, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::String* IDOPOGOMOBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_BIONFBGOPBJ_OFFSET))(this, BKLGNCBNEGM, GIAEPMKCBIB, DOBFFIICAII, IDOPOGOMOBE);
	}

	::System::Void HHAMPDLGLHF(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::String* IDOPOGOMOBE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_HHAMPDLGLHF_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII, IDOPOGOMOBE);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_AOPGPMDDDDI_OFFSET))(this);
	}

	::System::Void KHENDNCBPMB(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_KHENDNCBPMB_OFFSET))(this, BKLGNCBNEGM);
	}
};
