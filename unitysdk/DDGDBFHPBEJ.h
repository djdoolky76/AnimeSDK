#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/DDGDBFHPBEJ_BGEAKJKKFOM.h"

class DDGDBFHPBEJ_JKMFOJACHMO;
class GEKNEEMAHBC;
namespace System { template <typename T> class WeakReference_1; }

#define DDGDBFHPBEJ_BNONNLMCJPJ_OFFSET UNITYSDK_OFFSET(0x7F6D890)
#define DDGDBFHPBEJ_CDLGHOFHMPN_OFFSET UNITYSDK_OFFSET(0x7F6DB30)
#define DDGDBFHPBEJ_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x7F6DAA0)
#define DDGDBFHPBEJ_FONDLALGBCK_OFFSET UNITYSDK_OFFSET(0x7F6D9B0)
#define DDGDBFHPBEJ_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x7F6D920)
#define DDGDBFHPBEJ_LKGCBKCHAEG_OFFSET UNITYSDK_OFFSET(0x7F6DBF0)
#define DDGDBFHPBEJ_MKLMFALCAMD_OFFSET UNITYSDK_OFFSET(0x7F6D6C0)
#define DDGDBFHPBEJ_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x7F6DA10)
#define DDGDBFHPBEJ_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7F6D740)
#define DDGDBFHPBEJ_START_OFFSET UNITYSDK_OFFSET(0x7F6D540)
#define DDGDBFHPBEJ_UPDATE_OFFSET UNITYSDK_OFFSET(0x7F6D7A0)
#define DDGDBFHPBEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6D840)

inline static constexpr unsigned int DDGDBFHPBEJ_TypeDefinitionIndex = 66478;

class DDGDBFHPBEJ : public ::OAOOLPCNHKA
{
public:
	::DDGDBFHPBEJ_JKMFOJACHMO* HBDAMPKJIME; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_UPDATE_OFFSET))(this);
	}

	::System::Void BNONNLMCJPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_BNONNLMCJPJ_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid MKLMFALCAMD(::System::WeakReference_1<::DDGDBFHPBEJ*>* PAJFDFILCKM, ::GEKNEEMAHBC* AAOCANGHBDG)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::WeakReference_1<::DDGDBFHPBEJ*>*, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_MKLMFALCAMD_OFFSET))(PAJFDFILCKM, AAOCANGHBDG);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void FONDLALGBCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_FONDLALGBCK_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Boolean CDLGHOFHMPN(::DDGDBFHPBEJ_BGEAKJKKFOM& param_0)
	{
		return ((::System::Boolean(*)(::DDGDBFHPBEJ_BGEAKJKKFOM&))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_CDLGHOFHMPN_OFFSET))(param_0);
	}

	static ::System::Boolean LKGCBKCHAEG(::DDGDBFHPBEJ_BGEAKJKKFOM& param_0)
	{
		return ((::System::Boolean(*)(::DDGDBFHPBEJ_BGEAKJKKFOM&))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_LKGCBKCHAEG_OFFSET))(param_0);
	}
};
