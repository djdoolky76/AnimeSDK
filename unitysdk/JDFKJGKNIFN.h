#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Random; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDFKJGKNIFN_IONBNLEPNKJ_OFFSET UNITYSDK_OFFSET(0x18730830)
#define JDFKJGKNIFN_KNBDIGKDMPM_OFFSET UNITYSDK_OFFSET(0x187317F0)
#define JDFKJGKNIFN_NDLAHLAJFIM_OFFSET UNITYSDK_OFFSET(0x18730770)
#define JDFKJGKNIFN__CTOR_OFFSET UNITYSDK_OFFSET(0x18730760)

inline static constexpr unsigned int JDFKJGKNIFN_TypeDefinitionIndex = 90554;

class JDFKJGKNIFN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFKJGKNIFN__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Vector2Int NDLAHLAJFIM(::UnityEngine::Vector2 BAECLPHLLHO, ::UnityEngine::Vector2 IGOJMIPPPKB, ::System::Single KEFMPOMFNIB)
	{
		return ((::MoleMole::Vector2Int(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + JDFKJGKNIFN_NDLAHLAJFIM_OFFSET))(BAECLPHLLHO, IGOJMIPPPKB, KEFMPOMFNIB);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* IONBNLEPNKJ(::System::Random* DLJPLHKELCO, ::System::Single NCCDJLDKFGA, ::UnityEngine::Bounds LPOFNFEJCJA, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>* FCOOAIAEPFN, ::System::Int32 KGFAKKGALMN)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::System::Random*, ::System::Single, ::UnityEngine::Bounds, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + JDFKJGKNIFN_IONBNLEPNKJ_OFFSET))(DLJPLHKELCO, NCCDJLDKFGA, LPOFNFEJCJA, FCOOAIAEPFN, KGFAKKGALMN);
	}

	static ::UnityEngine::Vector2 KNBDIGKDMPM(::UnityEngine::Bounds GOFCNJELMHH, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>* GIPECNMEEPB, ::System::Int32 IEEIMAGLEKL, ::System::Random* DLJPLHKELCO)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Bounds, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>*, ::System::Int32, ::System::Random*))((::PBYTE)hIl2Cpp + JDFKJGKNIFN_KNBDIGKDMPM_OFFSET))(GOFCNJELMHH, GIPECNMEEPB, IEEIMAGLEKL, DLJPLHKELCO);
	}
};
