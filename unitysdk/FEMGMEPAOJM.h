#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BNKIPOEJNNB;
class KPNIFGIKELE;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackEffect; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FEMGMEPAOJM_ANGGMIOPPCC_OFFSET UNITYSDK_OFFSET(0x11D01960)
#define FEMGMEPAOJM_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x11D02230)
#define FEMGMEPAOJM_LKJDHLCJLJC_OFFSET UNITYSDK_OFFSET(0x11D01B00)
#define FEMGMEPAOJM__CTOR_OFFSET UNITYSDK_OFFSET(0x6BF890)

inline static constexpr unsigned int FEMGMEPAOJM_TypeDefinitionIndex = 85408;

struct alignas(8) FEMGMEPAOJM
{
	::MoleMole::Config::ConfigSoundActionGeneral* HMOMCMBDPIJ; // 0x10
	::System::String* IHHCGGMMPLH; // 0x18
	::UnityEngine::Vector3 ANNNDENOJJG; // 0x20
	::System::UInt32 OOJGJDDNPNP; // 0x2C
	::System::UInt32 EINEHKGMEOO; // 0x30
	::System::UInt32 KOALCFKNOFD; // 0x34
	::System::UInt32 AGNGFMPFCNO; // 0x38
	::System::UInt32 AHBILJLPGEN; // 0x3C
	::System::UInt32 DPKDMLGDFFJ; // 0x40
	::System::UInt32 JCCPEHGIMCI; // 0x44
	::System::UInt32 GDDBALOPFHF; // 0x48
	::System::Boolean PCCIOKCGKHG; // 0x4C
	::System::Byte _padding0[0x3];
	::System::String* OAGOMHCFJMA; // 0x50
	::System::String* KPHNNGCGFGI; // 0x58
	::System::Boolean KEEACNGLJNI; // 0x60
	::System::Boolean JDHADNDKJDM; // 0x61
	::System::Byte _padding1[0x6];
	::BNKIPOEJNNB* EMEDLJCMPAK; // 0x68
	::UnityEngine::GameObject* JHFLCNCPJCA; // 0x70
	::UnityEngine::GameObject* ALGDJCDFLKJ; // 0x78

	::System::Void _ctor(::MoleMole::Config::ConfigSoundActionGeneral* HMOMCMBDPIJ, ::System::String* IHHCGGMMPLH, ::UnityEngine::Vector3 ANNNDENOJJG, ::System::Boolean PCCIOKCGKHG, ::System::UInt32 OOJGJDDNPNP, ::System::UInt32 EINEHKGMEOO, ::System::UInt32 KOALCFKNOFD, ::System::UInt32 AGNGFMPFCNO, ::System::UInt32 AHBILJLPGEN, ::System::UInt32 DPKDMLGDFFJ, ::System::UInt32 JCCPEHGIMCI, ::System::UInt32 GDDBALOPFHF, ::System::Boolean KEEACNGLJNI, ::System::String* OAGOMHCFJMA, ::System::String* KPHNNGCGFGI, ::System::Boolean JDHADNDKJDM, ::BNKIPOEJNNB* EMEDLJCMPAK, ::UnityEngine::GameObject* JHFLCNCPJCA, ::UnityEngine::GameObject* ALGDJCDFLKJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundActionGeneral*, ::System::String*, ::UnityEngine::Vector3, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::String*, ::System::String*, ::System::Boolean, ::BNKIPOEJNNB*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FEMGMEPAOJM__CTOR_OFFSET))(this, HMOMCMBDPIJ, IHHCGGMMPLH, ANNNDENOJJG, PCCIOKCGKHG, OOJGJDDNPNP, EINEHKGMEOO, KOALCFKNOFD, AGNGFMPFCNO, AHBILJLPGEN, DPKDMLGDFFJ, JCCPEHGIMCI, GDDBALOPFHF, KEEACNGLJNI, OAGOMHCFJMA, KPHNNGCGFGI, JDHADNDKJDM, EMEDLJCMPAK, JHFLCNCPJCA, ALGDJCDFLKJ);
	}

	/*
	static ::FEMGMEPAOJM ANGGMIOPPCC(::FEMGMEPAOJM& BIJNDBBOLIJ)
	{
		return ((::FEMGMEPAOJM(*)(::FEMGMEPAOJM&))((::PBYTE)hIl2Cpp + FEMGMEPAOJM_ANGGMIOPPCC_OFFSET))(BIJNDBBOLIJ);
	}
	*/

	/*
	static ::System::Boolean LKJDHLCJLJC(::KPNIFGIKELE* CMAOBDOAKEI, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::MoleMole::Config::ConfigEntityAttackEffect* NHNBJFIMIPA, ::FEMGMEPAOJM& BIJNDBBOLIJ)
	{
		return ((::System::Boolean(*)(::KPNIFGIKELE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackEffect*, ::FEMGMEPAOJM&))((::PBYTE)hIl2Cpp + FEMGMEPAOJM_LKJDHLCJLJC_OFFSET))(CMAOBDOAKEI, MFMPICKHAMJ, JKELDNKGNDI, NHNBJFIMIPA, BIJNDBBOLIJ);
	}
	*/

	/*
	static ::System::Void KNDMMHPDPIB(::FEMGMEPAOJM& BIJNDBBOLIJ)
	{
		return ((::System::Void(*)(::FEMGMEPAOJM&))((::PBYTE)hIl2Cpp + FEMGMEPAOJM_KNDMMHPDPIB_OFFSET))(BIJNDBBOLIJ);
	}
	*/
};
