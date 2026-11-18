#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class BCIIKEOPACM_BENJKJMLDEM;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define BCIIKEOPACM_CDHJMDOGBLK_OFFSET UNITYSDK_OFFSET(0x1701D0D0)
#define BCIIKEOPACM_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x1701CFA0)
#define BCIIKEOPACM_HIAGGBNLPHA_OFFSET UNITYSDK_OFFSET(0x1701CFF0)
#define BCIIKEOPACM_JIEFEBLGDJP_OFFSET UNITYSDK_OFFSET(0x1701D190)
#define BCIIKEOPACM_NGPINNOAPDG_OFFSET UNITYSDK_OFFSET(0x1701D2E0)
#define BCIIKEOPACM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1701CE40)
#define BCIIKEOPACM__CTOR_OFFSET UNITYSDK_OFFSET(0x1701CE30)

inline static constexpr unsigned int BCIIKEOPACM_TypeDefinitionIndex = 51052;

class BCIIKEOPACM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* MHCEADOFEEA; // 0x10
	::UnityEngine::Material* AEIHFBNNLBP; // 0x18
	::System::Int32 AELKMGGGEJP; // 0x20
	::UnityEngine::Color FGABGFCPOFN; // 0x24
	::UnityEngine::Color OKMFGGHDEHM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIIKEOPACM__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::UnityEngine::Material* AEIHFBNNLBP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + BCIIKEOPACM__CTOR_1_OFFSET))(this, AEIHFBNNLBP);
	}

	::BCIIKEOPACM_BENJKJMLDEM* HIAGGBNLPHA()
	{
		return ((::BCIIKEOPACM_BENJKJMLDEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIIKEOPACM_HIAGGBNLPHA_OFFSET))(this);
	}

	::System::Void CDHJMDOGBLK(::BCIIKEOPACM_BENJKJMLDEM* JCJILJMPADN)
	{
		return ((::System::Void(*)(::PVOID, ::BCIIKEOPACM_BENJKJMLDEM*))((::PBYTE)hIl2Cpp + BCIIKEOPACM_CDHJMDOGBLK_OFFSET))(this, JCJILJMPADN);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIIKEOPACM_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void JIEFEBLGDJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIIKEOPACM_JIEFEBLGDJP_OFFSET))(this);
	}

	::System::Void NGPINNOAPDG(::UnityEngine::Color EHMNLNDPCIF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + BCIIKEOPACM_NGPINNOAPDG_OFFSET))(this, EHMNLNDPCIF);
	}
};
