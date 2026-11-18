#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class GEIHCPAOKKK;
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define NGCJFJLGODD_APADBLPBEHB_OFFSET UNITYSDK_OFFSET(0xE196900)
#define NGCJFJLGODD_DOKJAIBKKBO_OFFSET UNITYSDK_OFFSET(0x595BC0)
#define NGCJFJLGODD_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x595BD0)
#define NGCJFJLGODD_FGILEOGAHBF_OFFSET UNITYSDK_OFFSET(0x595BF0)
#define NGCJFJLGODD_HBECIPCGNEH_OFFSET UNITYSDK_OFFSET(0x595C00)
#define NGCJFJLGODD_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x595B90)
#define NGCJFJLGODD_JALKEAEAGIB_OFFSET UNITYSDK_OFFSET(0x595B70)
#define NGCJFJLGODD_KEOEJEJLIFD_OFFSET UNITYSDK_OFFSET(0x595BB0)
#define NGCJFJLGODD_OIAAGHNEACK_OFFSET UNITYSDK_OFFSET(0x595BE0)
#define NGCJFJLGODD__CTOR_OFFSET UNITYSDK_OFFSET(0x595B20)

inline static constexpr unsigned int NGCJFJLGODD_TypeDefinitionIndex = 54071;

struct alignas(8) NGCJFJLGODD
{
	::System::UInt32 ADBNJEEONIM; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* CDMEHIBAELD; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* ODNHONPDCEL; // 0x20
	::System::Single BODHCMMGOOL; // 0x28
	::System::Boolean HOPEPOLNGIF; // 0x2C
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 HBPAINCDEIH; // 0x30

	::System::Void _ctor(::System::UInt32 BKLGNCBNEGM, ::System::String* LIFMKNIJMNC, ::System::Collections::Generic::List_1<::System::String*>* APMKOGMBOOJ, ::System::Single CLKPGNLHJAH, ::UnityEngine::Vector3 BOGPAHGJOJK, ::System::Boolean OFPJBJHHPFN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + NGCJFJLGODD__CTOR_OFFSET))(this, BKLGNCBNEGM, LIFMKNIJMNC, APMKOGMBOOJ, CLKPGNLHJAH, BOGPAHGJOJK, OFPJBJHHPFN);
	}

	::UnityEngine::Vector3 JALKEAEAGIB(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NGCJFJLGODD_JALKEAEAGIB_OFFSET))(this, GEEHGDABNJF);
	}

	::UnityEngine::Quaternion INMGLPLEEIK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NGCJFJLGODD_INMGLPLEEIK_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single KEOEJEJLIFD(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NGCJFJLGODD_KEOEJEJLIFD_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Single DOKJAIBKKBO(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NGCJFJLGODD_DOKJAIBKKBO_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean FFCPIEDHBDP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NGCJFJLGODD_FFCPIEDHBDP_OFFSET))(this, GEEHGDABNJF);
	}

	::Il2CppArray<::UnityEngine::Collider*>* OIAAGHNEACK(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NGCJFJLGODD_OIAAGHNEACK_OFFSET))(this, GEEHGDABNJF);
	}

	::MoleMole::Battle::EntityBodySize FGILEOGAHBF(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NGCJFJLGODD_FGILEOGAHBF_OFFSET))(this, GEEHGDABNJF);
	}

	::System::UInt32 HBECIPCGNEH(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NGCJFJLGODD_HBECIPCGNEH_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Nullable_1<::UnityEngine::Vector3> APADBLPBEHB(::GEIHCPAOKKK* GBELIHABEDH, ::System::String* LIFMKNIJMNC, ::System::Collections::Generic::List_1<::System::String*>* APMKOGMBOOJ, ::System::Single CLKPGNLHJAH)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::GEIHCPAOKKK*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + NGCJFJLGODD_APADBLPBEHB_OFFSET))(GBELIHABEDH, LIFMKNIJMNC, APMKOGMBOOJ, CLKPGNLHJAH);
	}
};
