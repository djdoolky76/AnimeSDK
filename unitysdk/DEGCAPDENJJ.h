#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Collider; }

#define DEGCAPDENJJ_DOKJAIBKKBO_OFFSET UNITYSDK_OFFSET(0x6DE040)
#define DEGCAPDENJJ_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x6DE050)
#define DEGCAPDENJJ_FGILEOGAHBF_OFFSET UNITYSDK_OFFSET(0x6DE070)
#define DEGCAPDENJJ_HBECIPCGNEH_OFFSET UNITYSDK_OFFSET(0x6DE080)
#define DEGCAPDENJJ_HJONBNIAADB_OFFSET UNITYSDK_OFFSET(0x6DE150)
#define DEGCAPDENJJ_IHLDODGIALG_OFFSET UNITYSDK_OFFSET(0x6DE1D0)
#define DEGCAPDENJJ_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x6DE010)
#define DEGCAPDENJJ_JALKEAEAGIB_OFFSET UNITYSDK_OFFSET(0x6DE0D0)
#define DEGCAPDENJJ_KEOEJEJLIFD_OFFSET UNITYSDK_OFFSET(0x6DE030)
#define DEGCAPDENJJ_OIAAGHNEACK_OFFSET UNITYSDK_OFFSET(0x6DE060)
#define DEGCAPDENJJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3948D0)
#define DEGCAPDENJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x6DDFF0)

inline static constexpr unsigned int DEGCAPDENJJ_TypeDefinitionIndex = 72671;

struct alignas(4) DEGCAPDENJJ
{
	::System::UInt32 ADBNJEEONIM; // 0x10
	::UnityEngine::Vector3 HBPAINCDEIH; // 0x14

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::System::Single DIJADIGAGCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + DEGCAPDENJJ__CTOR_OFFSET))(this, BKLGNCBNEGM, DIJADIGAGCA);
	}

	::System::Void _ctor_1(::System::UInt32 BKLGNCBNEGM, ::UnityEngine::Vector3 BOGPAHGJOJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEGCAPDENJJ__CTOR_1_OFFSET))(this, BKLGNCBNEGM, BOGPAHGJOJK);
	}

	::UnityEngine::Quaternion INMGLPLEEIK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_INMGLPLEEIK_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single KEOEJEJLIFD(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_KEOEJEJLIFD_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single DOKJAIBKKBO(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_DOKJAIBKKBO_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean FFCPIEDHBDP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_FFCPIEDHBDP_OFFSET))(this, GEEHGDABNJF);
	}

	::Il2CppArray<::UnityEngine::Collider*>* OIAAGHNEACK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_OIAAGHNEACK_OFFSET))(this, GEEHGDABNJF);
	}

	::MoleMole::Battle::EntityBodySize FGILEOGAHBF(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_FGILEOGAHBF_OFFSET))(this, GEEHGDABNJF);
	}

	::System::UInt32 HBECIPCGNEH(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_HBECIPCGNEH_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::Vector3 JALKEAEAGIB(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_JALKEAEAGIB_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::Vector3 HJONBNIAADB(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_HJONBNIAADB_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::Vector3 IHLDODGIALG(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DEGCAPDENJJ_IHLDODGIALG_OFFSET))(this, GEEHGDABNJF);
	}
};
