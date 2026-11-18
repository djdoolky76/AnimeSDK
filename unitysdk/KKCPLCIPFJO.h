#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBNAKBHDPPJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace MoleMole { class ConfigRichtapResource_Resource; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define KKCPLCIPFJO_BCPBNJBFOGI_OFFSET UNITYSDK_OFFSET(0x18632810)
#define KKCPLCIPFJO_BHPCNFDFMAJ_OFFSET UNITYSDK_OFFSET(0x18632660)
#define KKCPLCIPFJO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18632330)
#define KKCPLCIPFJO_EIKFMDLKNFE_OFFSET UNITYSDK_OFFSET(0x18632610)
#define KKCPLCIPFJO_LECPILAEBIC_OFFSET UNITYSDK_OFFSET(0x18632390)
#define KKCPLCIPFJO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18632700)
#define KKCPLCIPFJO_LOIBMOMBMNF_OFFSET UNITYSDK_OFFSET(0x186323F0)
#define KKCPLCIPFJO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x186326B0)
#define KKCPLCIPFJO__CTOR_OFFSET UNITYSDK_OFFSET(0x18632320)

inline static constexpr unsigned int KKCPLCIPFJO_TypeDefinitionIndex = 76936;

class KKCPLCIPFJO : public ::System::Object
{
public:
	::System::String* NGHLLDAJJJE; // 0x10
	::MoleMole::ConfigRichtapResource_Resource* BOBIKBDKFCK; // 0x18
	::System::String* HMJBMNAAGKB; // 0x20
	::OBNAKBHDPPJ KKMENMCMMBN; // 0x28
	::System::UInt32 LODHDPLDPAH; // 0x2C
	::System::Int32 OGDJMJOFLON; // 0x30
	::System::Single PLFLMMPHCHO; // 0x34

	::System::Void _ctor(::System::UInt32 LODHDPLDPAH, ::MoleMole::ConfigRichtapResource_Resource* BOBIKBDKFCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::ConfigRichtapResource_Resource*))((::PBYTE)hIl2Cpp + KKCPLCIPFJO__CTOR_OFFSET))(this, LODHDPLDPAH, BOBIKBDKFCK);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCPLCIPFJO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void LECPILAEBIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCPLCIPFJO_LECPILAEBIC_OFFSET))(this);
	}

	::System::Void LOIBMOMBMNF(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + KKCPLCIPFJO_LOIBMOMBMNF_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}

	::System::Void EIKFMDLKNFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCPLCIPFJO_EIKFMDLKNFE_OFFSET))(this);
	}

	::System::Void BHPCNFDFMAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCPLCIPFJO_BHPCNFDFMAJ_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCPLCIPFJO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCPLCIPFJO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void BCPBNJBFOGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCPLCIPFJO_BCPBNJBFOGI_OFFSET))(this);
	}
};
