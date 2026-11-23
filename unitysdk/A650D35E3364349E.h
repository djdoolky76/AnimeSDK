#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define A650D35E3364349E_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1CF7090)
#define A650D35E3364349E_FF523F2A8AF59221_OFFSET UNITYSDK_OFFSET(0x1CF7420)
#define A650D35E3364349E_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1CF7110)
#define A650D35E3364349E__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A650D35E3364349E_TypeDefinitionIndex = 9887;

class A650D35E3364349E : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x80
	::UnityEngine::UI::Image* A53E30B8671C8069; // 0x88
	::UnityEngine::RectTransform* E2AF587283A183ED; // 0x90
	::UnityEngine::RectTransform* F2F7624EA0BD2666; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A650D35E3364349E__CTOR_OFFSET))(this);
	}

	::System::Void FF523F2A8AF59221(::System::Single FC6FAAE852B2379B, ::UnityEngine::Vector3 A1F4F5954547F19C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + A650D35E3364349E_FF523F2A8AF59221_OFFSET))(this, FC6FAAE852B2379B, A1F4F5954547F19C);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A650D35E3364349E_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + A650D35E3364349E_A1E97155B145443C_OFFSET))(this, F9E6A5ABE3F78299);
	}
};
