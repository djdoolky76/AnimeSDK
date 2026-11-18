#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/System/ValueTuple_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHAPPNOLBDD_COMPARE_OFFSET UNITYSDK_OFFSET(0x726F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHAPPNOLBDD_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x6FFFB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHAPPNOLBDD_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x6FFFA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHAPPNOLBDD__CTOR_OFFSET UNITYSDK_OFFSET(0x6FFF10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LastPhaseFallbackInLevelSettlement_MHAPPNOLBDD_TypeDefinitionIndex = 72719;

	struct alignas(4) LastPhaseFallbackInLevelSettlement_MHAPPNOLBDD
	{
		::UnityEngine::Quaternion GAFNNKAPHPH; // 0x10

		::System::Void _ctor(::UnityEngine::Quaternion BFBELMDIAHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHAPPNOLBDD__CTOR_OFFSET))(this, BFBELMDIAHI);
		}

		::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> KILPCOMOCMD, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> BBCODANAFGI)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHAPPNOLBDD_COMPARE_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
		}

		::System::Double get_MinPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHAPPNOLBDD_GET_MINPITCH_OFFSET))(this);
		}

		::System::Double get_MaxPitch()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_MHAPPNOLBDD_GET_MAXPITCH_OFFSET))(this);
		}
	};
}
