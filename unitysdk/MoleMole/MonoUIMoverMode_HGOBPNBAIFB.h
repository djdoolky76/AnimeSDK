#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIMOVERMODE_HGOBPNBAIFB_BMLNFIBCAMB_OFFSET UNITYSDK_OFFSET(0x1310ED80)
#define MOLEMOLE_MONOUIMOVERMODE_HGOBPNBAIFB_HHIBPINEMAO_OFFSET UNITYSDK_OFFSET(0x1310ED40)
#define MOLEMOLE_MONOUIMOVERMODE_HGOBPNBAIFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1310ED30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIMoverMode_HGOBPNBAIFB_TypeDefinitionIndex = 53427;

	class MonoUIMoverMode_HGOBPNBAIFB : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* ELIHHCNPGJE; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_HGOBPNBAIFB__CTOR_OFFSET))(this);
		}

		::System::Single HHIBPINEMAO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_HGOBPNBAIFB_HHIBPINEMAO_OFFSET))(this);
		}

		::System::Void BMLNFIBCAMB(::System::Single HAAEBCOBKFF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_HGOBPNBAIFB_BMLNFIBCAMB_OFFSET))(this, HAAEBCOBKFF);
		}
	};
}
