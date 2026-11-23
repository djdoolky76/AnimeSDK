#pragma once
#include "unitysdk/unitysdk.h"

class ECEAC4B3B9FD98E3;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }

#define FFA9159F314B1EDF_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x18C8950)
#define FFA9159F314B1EDF_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x18C8AE0)
#define FFA9159F314B1EDF_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x18C8A90)
#define FFA9159F314B1EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8BB0)

inline static constexpr unsigned int FFA9159F314B1EDF_TypeDefinitionIndex = 1348;

class FFA9159F314B1EDF
{
public:
	::UnityEngine::RectTransform* B8C8F40E267FE425; // 0x90
	::ABC::UI::MonoLocalizedTmp* EC19F28DBA07FF6F; // 0x98

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFA9159F314B1EDF_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFA9159F314B1EDF__CTOR_OFFSET))(this);
	}

	::System::Void BFCEE111278C4278(::ECEAC4B3B9FD98E3* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::ECEAC4B3B9FD98E3*))((::PBYTE)hIl2Cpp + FFA9159F314B1EDF_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + FFA9159F314B1EDF_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
