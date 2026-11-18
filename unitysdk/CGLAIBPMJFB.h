#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/CGLAIBPMJFB_KNEJMKBNMEP.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class GEIHCPAOKKK;
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CGLAIBPMJFB_DOKJAIBKKBO_OFFSET UNITYSDK_OFFSET(0x700E80)
#define CGLAIBPMJFB_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x700E90)
#define CGLAIBPMJFB_FGILEOGAHBF_OFFSET UNITYSDK_OFFSET(0x700EB0)
#define CGLAIBPMJFB_HBECIPCGNEH_OFFSET UNITYSDK_OFFSET(0x700EC0)
#define CGLAIBPMJFB_IIBACJFCIHD_OFFSET UNITYSDK_OFFSET(0x13259F90)
#define CGLAIBPMJFB_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x700E50)
#define CGLAIBPMJFB_JALKEAEAGIB_OFFSET UNITYSDK_OFFSET(0x700E30)
#define CGLAIBPMJFB_KEDFLBNPJEF_OFFSET UNITYSDK_OFFSET(0x13259920)
#define CGLAIBPMJFB_KEOEJEJLIFD_OFFSET UNITYSDK_OFFSET(0x700E70)
#define CGLAIBPMJFB_LFMGHKLLIFC_OFFSET UNITYSDK_OFFSET(0x13259AD0)
#define CGLAIBPMJFB_LPMGCFCJING_OFFSET UNITYSDK_OFFSET(0x13259760)
#define CGLAIBPMJFB_OIAAGHNEACK_OFFSET UNITYSDK_OFFSET(0x700EA0)
#define CGLAIBPMJFB_ONPFHFJBDEI_OFFSET UNITYSDK_OFFSET(0x13259390)
#define CGLAIBPMJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x700DD0)

inline static constexpr unsigned int CGLAIBPMJFB_TypeDefinitionIndex = 76927;

struct alignas(8) CGLAIBPMJFB
{
	::System::UInt32 ADBNJEEONIM; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* AOJAMJCLNAN; // 0x18
	::System::String* FPOFAPEFHKH; // 0x20
	::System::String* NCFFBECBIAN; // 0x28
	::System::String* IDHLLNGKMNG; // 0x30
	::System::String* GIIJCKFEJIK; // 0x38
	::System::String* KKLLMOABBJE; // 0x40
	::UnityEngine::Vector3 OHNFIODEEKB; // 0x48
	::System::Single APHHGBNAFPF; // 0x54

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::System::String* HBCDAPAOMFC, ::System::String* FNCDPIKMFGM, ::System::String* PAOMGDEEKKI, ::System::String* AJJDMEDKAHL, ::System::String* IHLJMKIDJKF, ::System::String* DPOIOGFJAJO, ::UnityEngine::Vector3 PCKOAIGINJJ, ::System::Single EEIIKBKGCLP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CGLAIBPMJFB__CTOR_OFFSET))(this, BKLGNCBNEGM, HBCDAPAOMFC, FNCDPIKMFGM, PAOMGDEEKKI, AJJDMEDKAHL, IHLJMKIDJKF, DPOIOGFJAJO, PCKOAIGINJJ, EEIIKBKGCLP);
	}

	::UnityEngine::Vector3 JALKEAEAGIB(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_JALKEAEAGIB_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::Quaternion INMGLPLEEIK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_INMGLPLEEIK_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single KEOEJEJLIFD(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_KEOEJEJLIFD_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single DOKJAIBKKBO(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_DOKJAIBKKBO_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean FFCPIEDHBDP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_FFCPIEDHBDP_OFFSET))(this, GEEHGDABNJF);
	}

	::Il2CppArray<::UnityEngine::Collider*>* OIAAGHNEACK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_OIAAGHNEACK_OFFSET))(this, GEEHGDABNJF);
	}

	::MoleMole::Battle::EntityBodySize FGILEOGAHBF(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_FGILEOGAHBF_OFFSET))(this, GEEHGDABNJF);
	}

	::System::UInt32 HBECIPCGNEH(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_HBECIPCGNEH_OFFSET))(this, GEEHGDABNJF);
	}

	/*
	static ::UnityEngine::Vector3 ONPFHFJBDEI(::GEIHCPAOKKK* GBELIHABEDH, ::CGLAIBPMJFB AEJAMJDBHAM)
	{
		return ((::UnityEngine::Vector3(*)(::GEIHCPAOKKK*, ::CGLAIBPMJFB))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_ONPFHFJBDEI_OFFSET))(GBELIHABEDH, AEJAMJDBHAM);
	}
	*/

	static ::System::Void KEDFLBNPJEF(::UnityEngine::Transform* OPMPKFEHOBM, ::CGLAIBPMJFB_KNEJMKBNMEP& param_1)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::CGLAIBPMJFB_KNEJMKBNMEP&))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_KEDFLBNPJEF_OFFSET))(OPMPKFEHOBM, param_1);
	}

	static ::System::Void LPMGCFCJING(::UnityEngine::Transform* OPMPKFEHOBM, ::UnityEngine::Vector3 CIEOCEADIJB, ::CGLAIBPMJFB_KNEJMKBNMEP& param_2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::CGLAIBPMJFB_KNEJMKBNMEP&))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_LPMGCFCJING_OFFSET))(OPMPKFEHOBM, CIEOCEADIJB, param_2);
	}

	static ::System::Void IIBACJFCIHD(::UnityEngine::Vector3 OHOGDOMNHNK, ::CGLAIBPMJFB_KNEJMKBNMEP& param_1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::CGLAIBPMJFB_KNEJMKBNMEP&))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_IIBACJFCIHD_OFFSET))(OHOGDOMNHNK, param_1);
	}

	static ::System::Boolean LFMGHKLLIFC(::CGLAIBPMJFB_KNEJMKBNMEP& param_0)
	{
		return ((::System::Boolean(*)(::CGLAIBPMJFB_KNEJMKBNMEP&))((::PBYTE)hIl2Cpp + CGLAIBPMJFB_LFMGHKLLIFC_OFFSET))(param_0);
	}
};
