#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/GOFNGBNFAKN.h"

namespace MoleMole { class MonoSlidingGround; }

#define KAJCBJEKABI_AJPIADCOPPH_OFFSET UNITYSDK_OFFSET(0x13AECBC0)
#define KAJCBJEKABI_HKJLEJBLLBM_OFFSET UNITYSDK_OFFSET(0x13AECE00)
#define KAJCBJEKABI_KHFMHFAPNFI_OFFSET UNITYSDK_OFFSET(0x13AEC3A0)
#define KAJCBJEKABI_MPKONAHPFGN_OFFSET UNITYSDK_OFFSET(0x13AEC330)
#define KAJCBJEKABI_MPNKCHPKEDJ_OFFSET UNITYSDK_OFFSET(0x13AEC9F0)
#define KAJCBJEKABI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13AECD90)
#define KAJCBJEKABI__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AEC200)
#define KAJCBJEKABI__CTOR_OFFSET UNITYSDK_OFFSET(0x13AEC1F0)

inline static constexpr unsigned int KAJCBJEKABI_TypeDefinitionIndex = 69950;

class KAJCBJEKABI : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_EMMMPCMBKMM()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(KAJCBJEKABI_TypeDefinitionIndex)->GetStaticField(0x51FB0);
	}
	static ::UnityEngine::LayerMask* StaticGet_ABDPCGKABFH()
	{
		return (::UnityEngine::LayerMask*)Il2CppClass::FromTypeDefinitionIndex(KAJCBJEKABI_TypeDefinitionIndex)->GetStaticField(0x13800);
	}
	// static const ::System::Single LANPBEPGIBN; // 0x0
	::MoleMole::MonoSlidingGround* GNNINDLHMGP; // 0x10
	::UnityEngine::Vector3 MGDCMAJIPOC; // 0x18
	::UnityEngine::Vector3 EMBMFOBFADD; // 0x24
	::System::Single LPGCMEEPCNO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCBJEKABI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAJCBJEKABI__CCTOR_OFFSET))();
	}

	::System::Boolean MPKONAHPFGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCBJEKABI_MPKONAHPFGN_OFFSET))(this);
	}

	::System::Boolean KHFMHFAPNFI(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single BDEDDEGJFKL, ::GOFNGBNFAKN& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::GOFNGBNFAKN&))((::PBYTE)hIl2Cpp + KAJCBJEKABI_KHFMHFAPNFI_OFFSET))(this, OHOGDOMNHNK, BDEDDEGJFKL, IGAAKDOIPNN);
	}

	::System::Boolean AJPIADCOPPH(::MoleMole::MonoSlidingGround*& PLJONGOPALM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoSlidingGround*&))((::PBYTE)hIl2Cpp + KAJCBJEKABI_AJPIADCOPPH_OFFSET))(this, PLJONGOPALM);
	}

	::System::Boolean MPNKCHPKEDJ(::GOFNGBNFAKN& IGAAKDOIPNN, ::UnityEngine::RaycastHit& OFLHPPDJLNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::GOFNGBNFAKN&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + KAJCBJEKABI_MPNKCHPKEDJ_OFFSET))(this, IGAAKDOIPNN, OFLHPPDJLNL);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJCBJEKABI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean HKJLEJBLLBM(::UnityEngine::Vector3& FFOJOBBIOJG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + KAJCBJEKABI_HKJLEJBLLBM_OFFSET))(this, FFOJOBBIOJG);
	}
};
