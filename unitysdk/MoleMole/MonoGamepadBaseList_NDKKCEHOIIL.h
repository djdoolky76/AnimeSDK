#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MONOGAMEPADBASELIST_NDKKCEHOIIL_KBIPFIPOINH_OFFSET UNITYSDK_OFFSET(0x6DEFE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadBaseList_NDKKCEHOIIL_TypeDefinitionIndex = 77251;

	struct alignas(8) MonoGamepadBaseList_NDKKCEHOIIL
	{
		::System::Int32 IEPGOLAPKPE; // 0x10
		::System::Int32 NGLKGFIEPBL; // 0x14
		::System::Int32 BABIHDEGHAB; // 0x18
		::UnityEngine::RectTransform_Axis OINOPLGMNDE; // 0x1C
		::UnityEngine::RectTransform_Axis OPPFDNCJFGJ; // 0x20
		::System::Byte _padding0[0x4];
		::System::Func_2<::System::Int32, ::System::Boolean>* DJEILCINCBL; // 0x28

		::System::Boolean KBIPFIPOINH(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_NDKKCEHOIIL_KBIPFIPOINH_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
