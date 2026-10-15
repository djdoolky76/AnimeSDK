#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTickerViewportCheckResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class RectTransform; }

#define MLNIAHKIEJH_CGBKEJEHBBK_OFFSET UNITYSDK_OFFSET(0xB9B51A0)
#define MLNIAHKIEJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B5490)
#define MLNIAHKIEJH_EPFNMBNMOJJ_OFFSET UNITYSDK_OFFSET(0xB9B5360)
#define MLNIAHKIEJH_OEFNECLNDEC_OFFSET UNITYSDK_OFFSET(0xB9B51B0)

inline static constexpr unsigned int MLNIAHKIEJH_TypeDefinitionIndex = 68989;

	class MLNIAHKIEJH : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* LMKBPJHEPIL; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* EMMOPLHDJLL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNIAHKIEJH_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 CGBKEJEHBBK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNIAHKIEJH_CGBKEJEHBBK_OFFSET))(this);
		}

		::RPG::Client::NewsTickerViewportCheckResult OEFNECLNDEC(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::RPG::Client::NewsTickerViewportCheckResult(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MLNIAHKIEJH_OEFNECLNDEC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 EPFNMBNMOJJ(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + MLNIAHKIEJH_EPFNMBNMOJJ_OFFSET))(this, a1, a2);
		}

	};
