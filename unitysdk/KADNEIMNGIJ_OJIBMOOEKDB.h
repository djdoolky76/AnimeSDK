#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEDPJEJBHLI;
class OODDDHHGKIJ;
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define KADNEIMNGIJ_OJIBMOOEKDB_CPNLDMNJIKM_OFFSET UNITYSDK_OFFSET(0x130A7130)
#define KADNEIMNGIJ_OJIBMOOEKDB_FAJBMFGBCPN_OFFSET UNITYSDK_OFFSET(0x130A7110)
#define KADNEIMNGIJ_OJIBMOOEKDB_HJNCDHIPHDK_OFFSET UNITYSDK_OFFSET(0x130A70E0)
#define KADNEIMNGIJ_OJIBMOOEKDB__CTOR_OFFSET UNITYSDK_OFFSET(0x130A70D0)

inline static constexpr unsigned int KADNEIMNGIJ_OJIBMOOEKDB_TypeDefinitionIndex = 72644;

class KADNEIMNGIJ_OJIBMOOEKDB : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* FFMGICPLKFB; // 0x10
	::BEDPJEJBHLI* FHGFMBBLNPA; // 0x18
	::OODDDHHGKIJ* CFKLMOPKFBE; // 0x20
	::UnityEngine::Events::UnityAction_1<::System::Boolean>* DLMJCFBENGB; // 0x28
	::UnityEngine::Events::UnityAction_1<::System::Boolean>* KAKAEMACNPB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_OJIBMOOEKDB__CTOR_OFFSET))(this);
	}

	::System::Void HJNCDHIPHDK(::System::Boolean GCLICJIGHFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_OJIBMOOEKDB_HJNCDHIPHDK_OFFSET))(this, GCLICJIGHFF);
	}

	::System::Void FAJBMFGBCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_OJIBMOOEKDB_FAJBMFGBCPN_OFFSET))(this);
	}

	::System::Void CPNLDMNJIKM(::System::Boolean GCLICJIGHFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_OJIBMOOEKDB_CPNLDMNJIKM_OFFSET))(this, GCLICJIGHFF);
	}
};
