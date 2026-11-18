#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define DDGDBFHPBEJ_KLGDHOIMPPM_DOKJAIBKKBO_OFFSET UNITYSDK_OFFSET(0x6EE7A0)
#define DDGDBFHPBEJ_KLGDHOIMPPM_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x6EE800)
#define DDGDBFHPBEJ_KLGDHOIMPPM_FGILEOGAHBF_OFFSET UNITYSDK_OFFSET(0x6EE8E0)
#define DDGDBFHPBEJ_KLGDHOIMPPM_HBECIPCGNEH_OFFSET UNITYSDK_OFFSET(0x6EE8F0)
#define DDGDBFHPBEJ_KLGDHOIMPPM_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x6EE720)
#define DDGDBFHPBEJ_KLGDHOIMPPM_JALKEAEAGIB_OFFSET UNITYSDK_OFFSET(0x6EE700)
#define DDGDBFHPBEJ_KLGDHOIMPPM_KEOEJEJLIFD_OFFSET UNITYSDK_OFFSET(0x6EE740)
#define DDGDBFHPBEJ_KLGDHOIMPPM_OIAAGHNEACK_OFFSET UNITYSDK_OFFSET(0x6EE890)
#define DDGDBFHPBEJ_KLGDHOIMPPM__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int DDGDBFHPBEJ_KLGDHOIMPPM_TypeDefinitionIndex = 66484;

struct alignas(8) DDGDBFHPBEJ_KLGDHOIMPPM
{
	::System::String* OABJHDMPKDD; // 0x10

	::System::Void _ctor(::System::String* KKIIJGFNHOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM__CTOR_OFFSET))(this, KKIIJGFNHOD);
	}

	::UnityEngine::Vector3 JALKEAEAGIB(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM_JALKEAEAGIB_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::Quaternion INMGLPLEEIK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM_INMGLPLEEIK_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single KEOEJEJLIFD(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM_KEOEJEJLIFD_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single DOKJAIBKKBO(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM_DOKJAIBKKBO_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean FFCPIEDHBDP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM_FFCPIEDHBDP_OFFSET))(this, GEEHGDABNJF);
	}

	::Il2CppArray<::UnityEngine::Collider*>* OIAAGHNEACK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM_OIAAGHNEACK_OFFSET))(this, GEEHGDABNJF);
	}

	::MoleMole::Battle::EntityBodySize FGILEOGAHBF(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM_FGILEOGAHBF_OFFSET))(this, GEEHGDABNJF);
	}

	::System::UInt32 HBECIPCGNEH(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_KLGDHOIMPPM_HBECIPCGNEH_OFFSET))(this, GEEHGDABNJF);
	}
};
