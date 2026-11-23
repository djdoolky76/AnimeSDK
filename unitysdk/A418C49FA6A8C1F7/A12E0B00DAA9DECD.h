#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/AD1089F530912490.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine { class Texture2D; }

#define A418C49FA6A8C1F7_A12E0B00DAA9DECD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A418C49FA6A8C1F7_A12E0B00DAA9DECD__CTOR_OFFSET UNITYSDK_OFFSET(0x37444E0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int A12E0B00DAA9DECD_TypeDefinitionIndex = 13471;

	class A12E0B00DAA9DECD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A12E0B00DAA9DECD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Boolean Invoke(::UnityEngine::Texture2D* E2F69B1AC05DF698, ::A418C49FA6A8C1F7::AD1089F530912490& B69017EE38E1762B)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture2D*, ::A418C49FA6A8C1F7::AD1089F530912490&))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A12E0B00DAA9DECD_INVOKE_OFFSET))(this, E2F69B1AC05DF698, B69017EE38E1762B);
		}
	};
}
