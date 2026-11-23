#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AAEF1EC408DB9A41__CCTOR_OFFSET UNITYSDK_OFFSET(0x4213AA0)

namespace UnityEngine
{
	inline static constexpr unsigned int AAEF1EC408DB9A41_TypeDefinitionIndex = 21351;

	struct alignas(4) AAEF1EC408DB9A41
	{
		static ::UnityEngine::A32676FCB736C8E8* StaticGet_FA5599AA1F471E90()
		{
			return (::UnityEngine::A32676FCB736C8E8*)Il2CppClass::FromTypeDefinitionIndex(AAEF1EC408DB9A41_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::E8984F4E44AE20E5* StaticGet_FADBCDA8D36C502E()
		{
			return (::UnityEngine::E8984F4E44AE20E5*)Il2CppClass::FromTypeDefinitionIndex(AAEF1EC408DB9A41_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::UnityEngine::AAEF1EC408DB9A41* StaticGet_F8E96196A745ABE0()
		{
			return (::UnityEngine::AAEF1EC408DB9A41*)Il2CppClass::FromTypeDefinitionIndex(AAEF1EC408DB9A41_TypeDefinitionIndex)->GetStaticField(0x14);
		}
		::UnityEngine::Vector3 B01139C5E3D0B4C4; // 0x10
		::UnityEngine::Vector3 F4A4CE58FCA1649B; // 0x1C
		::UnityEngine::E8984F4E44AE20E5 AA98387D3D2CCD49; // 0x28
		::UnityEngine::A32676FCB736C8E8 A5FA8CDBD22AC52F; // 0x38
		::UnityEngine::E8984F4E44AE20E5 B5B5E955534F7791; // 0x3C
		::UnityEngine::E8984F4E44AE20E5 A98B48A6FA20061C; // 0x4C
		::UnityEngine::E8984F4E44AE20E5 FE94BE4DB8C059F5; // 0x5C
		::UnityEngine::E8984F4E44AE20E5 A9D46700A072A132; // 0x6C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AAEF1EC408DB9A41__CCTOR_OFFSET))();
		}
	};
}
