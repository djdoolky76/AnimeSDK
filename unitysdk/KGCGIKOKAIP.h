#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class AkPositionArray;
class EHKKPCGAJHO;
class GEIHCPAOKKK;
class KGCGIKOKAIP_PNHOCNBHBBM;
namespace MoleMole { class MonoEffectPluginAudio; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define KGCGIKOKAIP_BBANJLEBHDI_OFFSET UNITYSDK_OFFSET(0x1770AEB0)
#define KGCGIKOKAIP_DFBDMFBJFBF_OFFSET UNITYSDK_OFFSET(0x17706AC0)
#define KGCGIKOKAIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17706520)
#define KGCGIKOKAIP_EPCEPOKCGBA_OFFSET UNITYSDK_OFFSET(0x17708B20)
#define KGCGIKOKAIP_GBMBPEHJDMC_OFFSET UNITYSDK_OFFSET(0x17707AB0)
#define KGCGIKOKAIP_GLJLKGMCHGG_OFFSET UNITYSDK_OFFSET(0x177066A0)
#define KGCGIKOKAIP_JJCOHPOJPEF_OFFSET UNITYSDK_OFFSET(0x17708910)
#define KGCGIKOKAIP_LHNDNCGPCCN_OFFSET UNITYSDK_OFFSET(0x1770A420)
#define KGCGIKOKAIP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x17706390)
#define KGCGIKOKAIP_UPDATE_OFFSET UNITYSDK_OFFSET(0x17706610)
#define KGCGIKOKAIP__CTOR_OFFSET UNITYSDK_OFFSET(0x17706A50)

inline static constexpr unsigned int KGCGIKOKAIP_TypeDefinitionIndex = 89184;

class KGCGIKOKAIP
{
public:
	// static const ::System::Int32 HPCILAJBBHH = 0xA; // 0x0
	// static const ::System::Int32 AAGJDCAKHFF = 0x40; // 0x0
	::System::Collections::Generic::HashSet_1<::AEMCAOEICDG*>* KAHHILPPGGI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* MAKOPGDEFIM; // 0x18
	::AkPositionArray* FFKPFOLIDGI; // 0x20
	::System::Int32 IIFMJFJOOCK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGIKOKAIP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void DFBDMFBJFBF(::KGCGIKOKAIP_PNHOCNBHBBM* MBOCONHCCIA, ::GEIHCPAOKKK* EOCOIKIBCIM)
	{
		return ((::System::Void(*)(::PVOID, ::KGCGIKOKAIP_PNHOCNBHBBM*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_DFBDMFBJFBF_OFFSET))(this, MBOCONHCCIA, EOCOIKIBCIM);
	}

	::System::Void GBMBPEHJDMC(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_GBMBPEHJDMC_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE);
	}

	::System::Void GLJLKGMCHGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_GLJLKGMCHGG_OFFSET))(this);
	}

	::System::Void EPCEPOKCGBA(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_EPCEPOKCGBA_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE);
	}

	::System::Void BBANJLEBHDI(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_BBANJLEBHDI_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE);
	}

	::UnityEngine::Vector3 LHNDNCGPCCN(::AEMCAOEICDG* OHPJHPEOFLD, ::MoleMole::MonoEffectPluginAudio* DCODNFOCCHL, ::UnityEngine::Transform* FADFBEOLMAN)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::AEMCAOEICDG*, ::MoleMole::MonoEffectPluginAudio*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_LHNDNCGPCCN_OFFSET))(this, OHPJHPEOFLD, DCODNFOCCHL, FADFBEOLMAN);
	}

	::System::Void JJCOHPOJPEF(::AEMCAOEICDG* OHPJHPEOFLD, ::GEIHCPAOKKK* EOCOIKIBCIM)
	{
		return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + KGCGIKOKAIP_JJCOHPOJPEF_OFFSET))(this, OHPJHPEOFLD, EOCOIKIBCIM);
	}
};
