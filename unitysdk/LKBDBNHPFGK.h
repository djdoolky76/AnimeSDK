#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LKBDBNHPFGK_MEMNGGNGBPJ.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class GEIHCPAOKKK;
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define LKBDBNHPFGK_APADBLPBEHB_OFFSET UNITYSDK_OFFSET(0x14DBC0D0)
#define LKBDBNHPFGK_DOKJAIBKKBO_OFFSET UNITYSDK_OFFSET(0x749D40)
#define LKBDBNHPFGK_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x749D50)
#define LKBDBNHPFGK_FGILEOGAHBF_OFFSET UNITYSDK_OFFSET(0x749D70)
#define LKBDBNHPFGK_HBECIPCGNEH_OFFSET UNITYSDK_OFFSET(0x749D80)
#define LKBDBNHPFGK_HJNNBIDDBEA_OFFSET UNITYSDK_OFFSET(0x14DBBF60)
#define LKBDBNHPFGK_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x749D10)
#define LKBDBNHPFGK_JALKEAEAGIB_OFFSET UNITYSDK_OFFSET(0x749CF0)
#define LKBDBNHPFGK_KEOEJEJLIFD_1_OFFSET UNITYSDK_OFFSET(0x14DBC450)
#define LKBDBNHPFGK_KEOEJEJLIFD_OFFSET UNITYSDK_OFFSET(0x749D30)
#define LKBDBNHPFGK_OIAAGHNEACK_OFFSET UNITYSDK_OFFSET(0x749D60)
#define LKBDBNHPFGK__CTOR_OFFSET UNITYSDK_OFFSET(0x749C70)

inline static constexpr unsigned int LKBDBNHPFGK_TypeDefinitionIndex = 62950;

struct alignas(8) LKBDBNHPFGK
{
	::System::UInt32 ADBNJEEONIM; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* IGDIFKJGJCN; // 0x18
	::System::String* IPPOGMLOLCH; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* LIDAPEBOKBO; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* HBFGIOPECDE; // 0x30
	::System::Single OOFKOAMOPPE; // 0x38
	::System::Single MJHOLPMCNDH; // 0x3C
	::UnityEngine::Vector3 HBPAINCDEIH; // 0x40
	::System::Single HIJIBKLHHJM; // 0x4C
	::System::Single FLICFINBPLL; // 0x50

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::System::String* NGAHLOJCGOB, ::System::Collections::Generic::List_1<::System::String*>* DNMPKCJMEDP, ::System::Single EFJHGPGGCOB, ::System::String* ONHNNDDAHED, ::System::Collections::Generic::List_1<::System::String*>* OHDCHHBKHGP, ::System::Single ELCGALCCPAL, ::UnityEngine::Vector3 BOGPAHGJOJK, ::System::Single DAHHDJPPFKC, ::System::Single OEMIFOBLABL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LKBDBNHPFGK__CTOR_OFFSET))(this, BKLGNCBNEGM, NGAHLOJCGOB, DNMPKCJMEDP, EFJHGPGGCOB, ONHNNDDAHED, OHDCHHBKHGP, ELCGALCCPAL, BOGPAHGJOJK, DAHHDJPPFKC, OEMIFOBLABL);
	}

	::UnityEngine::Vector3 JALKEAEAGIB(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_JALKEAEAGIB_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::Quaternion INMGLPLEEIK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_INMGLPLEEIK_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single KEOEJEJLIFD(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_KEOEJEJLIFD_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single DOKJAIBKKBO(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_DOKJAIBKKBO_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean FFCPIEDHBDP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_FFCPIEDHBDP_OFFSET))(this, GEEHGDABNJF);
	}

	::Il2CppArray<::UnityEngine::Collider*>* OIAAGHNEACK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_OIAAGHNEACK_OFFSET))(this, GEEHGDABNJF);
	}

	::MoleMole::Battle::EntityBodySize FGILEOGAHBF(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_FGILEOGAHBF_OFFSET))(this, GEEHGDABNJF);
	}

	::System::UInt32 HBECIPCGNEH(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_HBECIPCGNEH_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void HJNNBIDDBEA(::UnityEngine::Transform* OPMPKFEHOBM, ::LKBDBNHPFGK_MEMNGGNGBPJ& param_1)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::LKBDBNHPFGK_MEMNGGNGBPJ&))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_HJNNBIDDBEA_OFFSET))(OPMPKFEHOBM, param_1);
	}

	static ::UnityEngine::Vector3 APADBLPBEHB(::GEIHCPAOKKK* GBELIHABEDH, ::System::String* NGAHLOJCGOB, ::System::Collections::Generic::List_1<::System::String*>* DNMPKCJMEDP, ::System::Single EFJHGPGGCOB, ::System::String* ONHNNDDAHED, ::System::Collections::Generic::List_1<::System::String*>* OHDCHHBKHGP, ::System::Single ELCGALCCPAL, ::System::Single ELOIBIHLLHH)
	{
		return ((::UnityEngine::Vector3(*)(::GEIHCPAOKKK*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_APADBLPBEHB_OFFSET))(GBELIHABEDH, NGAHLOJCGOB, DNMPKCJMEDP, EFJHGPGGCOB, ONHNNDDAHED, OHDCHHBKHGP, ELCGALCCPAL, ELOIBIHLLHH);
	}

	static ::System::Single KEOEJEJLIFD_1(::GEIHCPAOKKK* GBELIHABEDH, ::System::String* NGAHLOJCGOB, ::System::Collections::Generic::List_1<::System::String*>* DNMPKCJMEDP, ::System::String* ONHNNDDAHED, ::System::Collections::Generic::List_1<::System::String*>* OHDCHHBKHGP, ::System::Single OEMIFOBLABL)
	{
		return ((::System::Single(*)(::GEIHCPAOKKK*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + LKBDBNHPFGK_KEOEJEJLIFD_1_OFFSET))(GBELIHABEDH, NGAHLOJCGOB, DNMPKCJMEDP, ONHNNDDAHED, OHDCHHBKHGP, OEMIFOBLABL);
	}
};
