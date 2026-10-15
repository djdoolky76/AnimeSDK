#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTickerViewportCheckResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class RectTransform; }

#define JHBKDMFDFHF_CGBKEJEHBBK_OFFSET UNITYSDK_OFFSET(0xB1A8AA0)
#define JHBKDMFDFHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A8D90)
#define JHBKDMFDFHF_EPFNMBNMOJJ_OFFSET UNITYSDK_OFFSET(0xB1A8C60)
#define JHBKDMFDFHF_OEFNECLNDEC_OFFSET UNITYSDK_OFFSET(0xB1A8AB0)

inline static constexpr unsigned int JHBKDMFDFHF_TypeDefinitionIndex = 68988;

	class JHBKDMFDFHF : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* LMKBPJHEPIL; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* EMMOPLHDJLL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBKDMFDFHF_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 CGBKEJEHBBK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JHBKDMFDFHF_CGBKEJEHBBK_OFFSET))(this);
		}

		::RPG::Client::NewsTickerViewportCheckResult OEFNECLNDEC(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::RPG::Client::NewsTickerViewportCheckResult(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + JHBKDMFDFHF_OEFNECLNDEC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 EPFNMBNMOJJ(::UnityEngine::RectTransform* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + JHBKDMFDFHF_EPFNMBNMOJJ_OFFSET))(this, a1, a2);
		}

	};
