#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define MKAGDKBEPLI_DOKJAIBKKBO_OFFSET UNITYSDK_OFFSET(0x63CB10)
#define MKAGDKBEPLI_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x63CB20)
#define MKAGDKBEPLI_FGILEOGAHBF_OFFSET UNITYSDK_OFFSET(0x63CB40)
#define MKAGDKBEPLI_HBECIPCGNEH_OFFSET UNITYSDK_OFFSET(0x63CB50)
#define MKAGDKBEPLI_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x63CAE0)
#define MKAGDKBEPLI_JALKEAEAGIB_OFFSET UNITYSDK_OFFSET(0x63CAC0)
#define MKAGDKBEPLI_KEOEJEJLIFD_OFFSET UNITYSDK_OFFSET(0x63CB00)
#define MKAGDKBEPLI_OIAAGHNEACK_OFFSET UNITYSDK_OFFSET(0x63CB30)
#define MKAGDKBEPLI__CTOR_OFFSET UNITYSDK_OFFSET(0x63CA80)

inline static constexpr unsigned int MKAGDKBEPLI_TypeDefinitionIndex = 90200;

struct alignas(8) MKAGDKBEPLI
{
	::System::UInt32 ADBNJEEONIM; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* ANDOJOBODMN; // 0x18
	::UnityEngine::Vector3 HBPAINCDEIH; // 0x20
	::System::Boolean HOPEPOLNGIF; // 0x2C

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::System::String* FPBNHPCLHMI, ::UnityEngine::Vector3 BOGPAHGJOJK, ::System::Boolean OFPJBJHHPFN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MKAGDKBEPLI__CTOR_OFFSET))(this, BKLGNCBNEGM, FPBNHPCLHMI, BOGPAHGJOJK, OFPJBJHHPFN);
	}

	::UnityEngine::Vector3 JALKEAEAGIB(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MKAGDKBEPLI_JALKEAEAGIB_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::Quaternion INMGLPLEEIK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MKAGDKBEPLI_INMGLPLEEIK_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single KEOEJEJLIFD(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MKAGDKBEPLI_KEOEJEJLIFD_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single DOKJAIBKKBO(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MKAGDKBEPLI_DOKJAIBKKBO_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean FFCPIEDHBDP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MKAGDKBEPLI_FFCPIEDHBDP_OFFSET))(this, GEEHGDABNJF);
	}

	::Il2CppArray<::UnityEngine::Collider*>* OIAAGHNEACK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MKAGDKBEPLI_OIAAGHNEACK_OFFSET))(this, GEEHGDABNJF);
	}

	::MoleMole::Battle::EntityBodySize FGILEOGAHBF(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MKAGDKBEPLI_FGILEOGAHBF_OFFSET))(this, GEEHGDABNJF);
	}

	::System::UInt32 HBECIPCGNEH(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MKAGDKBEPLI_HBECIPCGNEH_OFFSET))(this, GEEHGDABNJF);
	}
};
