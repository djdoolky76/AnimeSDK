#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class GIGFDLPMNND;
class NKJEOLDHJKB;
class OFAPIOJNKCD;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class MonoBehaviour; }

#define AEKOMIBNENG_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0x154EB2F0)
#define AEKOMIBNENG_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x154EAA50)
#define AEKOMIBNENG_BLMKKNIJKOK_OFFSET UNITYSDK_OFFSET(0x154E96C0)
#define AEKOMIBNENG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x154E8E40)
#define AEKOMIBNENG_FOIDALIFPPC_OFFSET UNITYSDK_OFFSET(0x154EA200)
#define AEKOMIBNENG_HINHNAGCDNG_OFFSET UNITYSDK_OFFSET(0x154EAE20)
#define AEKOMIBNENG_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x154E9C50)
#define AEKOMIBNENG_IBLNIBHLJKJ_OFFSET UNITYSDK_OFFSET(0x154E9480)
#define AEKOMIBNENG_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x154EAFA0)
#define AEKOMIBNENG_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x154EA7D0)
#define AEKOMIBNENG_LOJGOLPNMLM_OFFSET UNITYSDK_OFFSET(0x154EB0C0)
#define AEKOMIBNENG_MFEDELMDOJH_OFFSET UNITYSDK_OFFSET(0x154E9810)
#define AEKOMIBNENG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x154EA9C0)
#define AEKOMIBNENG_MNJENPFNNCH_OFFSET UNITYSDK_OFFSET(0x154EA850)
#define AEKOMIBNENG_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x154EB030)
#define AEKOMIBNENG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x154E9430)
#define AEKOMIBNENG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x154E9100)
#define AEKOMIBNENG_PAMIKCCBAHE_OFFSET UNITYSDK_OFFSET(0x154EACB0)
#define AEKOMIBNENG_PMCACJIGELM_OFFSET UNITYSDK_OFFSET(0x154E9230)
#define AEKOMIBNENG_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x154E9190)
#define AEKOMIBNENG_START_OFFSET UNITYSDK_OFFSET(0x154E9070)
#define AEKOMIBNENG__CCTOR_OFFSET UNITYSDK_OFFSET(0x154E93F0)
#define AEKOMIBNENG__CTOR_OFFSET UNITYSDK_OFFSET(0x154E93A0)

inline static constexpr unsigned int AEKOMIBNENG_TypeDefinitionIndex = 42834;

class AEKOMIBNENG : public ::OAOOLPCNHKA
{
public:
	static ::AEKOMIBNENG** StaticGet_MNLNPOPDCBL()
	{
		return (::AEKOMIBNENG**)Il2CppClass::FromTypeDefinitionIndex(AEKOMIBNENG_TypeDefinitionIndex)->GetStaticField(0x36AC0);
	}
	static ::System::Int32* StaticGet_KGFIOKCIONB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AEKOMIBNENG_TypeDefinitionIndex)->GetStaticField(0xC3F0);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEKOMIBNENG__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + AEKOMIBNENG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG_ONDESTROY_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Void NPOLNFDBOOD(::NKJEOLDHJKB* CENOEAAIKOB)
	{
		return ((::System::Void(*)(::NKJEOLDHJKB*))((::PBYTE)hIl2Cpp + AEKOMIBNENG_NPOLNFDBOOD_OFFSET))(CENOEAAIKOB);
	}

	static ::System::Boolean IBLNIBHLJKJ(::OFAPIOJNKCD* OBKICKGGFEO)
	{
		return ((::System::Boolean(*)(::OFAPIOJNKCD*))((::PBYTE)hIl2Cpp + AEKOMIBNENG_IBLNIBHLJKJ_OFFSET))(OBKICKGGFEO);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEKOMIBNENG_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEKOMIBNENG_JPOLBPCHLHK_OFFSET))();
	}

	::System::Void MNJENPFNNCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG_MNJENPFNNCH_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + AEKOMIBNENG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + AEKOMIBNENG_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Single PAMIKCCBAHE(::NKJEOLDHJKB* CENOEAAIKOB, ::AEMCAOEICDG* OHPJHPEOFLD, ::UnityEngine::Vector3 PMMHPDOBJAC)
	{
		return ((::System::Single(*)(::NKJEOLDHJKB*, ::AEMCAOEICDG*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AEKOMIBNENG_PAMIKCCBAHE_OFFSET))(CENOEAAIKOB, OHPJHPEOFLD, PMMHPDOBJAC);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG_NIGDIMFIAEJ_OFFSET))(this);
	}

	static ::System::Single LOJGOLPNMLM(::GIGFDLPMNND* AKLHJKAPPOC)
	{
		return ((::System::Single(*)(::GIGFDLPMNND*))((::PBYTE)hIl2Cpp + AEKOMIBNENG_LOJGOLPNMLM_OFFSET))(AKLHJKAPPOC);
	}

	static ::System::Single HINHNAGCDNG(::UnityEngine::Vector3 MOJKMIAKGDF, ::NKJEOLDHJKB* CENOEAAIKOB, ::AEMCAOEICDG* OHPJHPEOFLD, ::UnityEngine::Vector3 ADDCBFJBHNC)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::NKJEOLDHJKB*, ::AEMCAOEICDG*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AEKOMIBNENG_HINHNAGCDNG_OFFSET))(MOJKMIAKGDF, CENOEAAIKOB, OHPJHPEOFLD, ADDCBFJBHNC);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG_AHDLBAAJCCC_OFFSET))(this);
	}

	::System::Void PMCACJIGELM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOMIBNENG_PMCACJIGELM_OFFSET))(this);
	}

	static ::System::Boolean MFEDELMDOJH(::OFAPIOJNKCD* OBKICKGGFEO)
	{
		return ((::System::Boolean(*)(::OFAPIOJNKCD*))((::PBYTE)hIl2Cpp + AEKOMIBNENG_MFEDELMDOJH_OFFSET))(OBKICKGGFEO);
	}

	static ::System::Void FOIDALIFPPC(::NKJEOLDHJKB* CENOEAAIKOB, ::EHKKPCGAJHO* POBADKEDFOE, ::AEMCAOEICDG* OHPJHPEOFLD, ::UnityEngine::Vector3 PMMHPDOBJAC)
	{
		return ((::System::Void(*)(::NKJEOLDHJKB*, ::EHKKPCGAJHO*, ::AEMCAOEICDG*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AEKOMIBNENG_FOIDALIFPPC_OFFSET))(CENOEAAIKOB, POBADKEDFOE, OHPJHPEOFLD, PMMHPDOBJAC);
	}

	static ::System::Boolean BLMKKNIJKOK(::UnityEngine::MonoBehaviour* MCNPPDJNFIM)
	{
		return ((::System::Boolean(*)(::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + AEKOMIBNENG_BLMKKNIJKOK_OFFSET))(MCNPPDJNFIM);
	}
};
