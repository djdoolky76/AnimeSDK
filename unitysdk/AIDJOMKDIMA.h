#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGHCJKOKOPF;
namespace RPG::GameCore { class JsonConfig; }
namespace System { class Object; }

#define AIDJOMKDIMA_IJIIDFGDCPI_OFFSET UNITYSDK_OFFSET(0xEB9BF00)
#define AIDJOMKDIMA_JMFDMJOIBMG_OFFSET UNITYSDK_OFFSET(0xEB9BEB0)

inline static constexpr unsigned int AIDJOMKDIMA_TypeDefinitionIndex = 50031;

	class AIDJOMKDIMA : public ::System::Object
	{
	public:
		static ::System::Void JMFDMJOIBMG(::RPG::GameCore::JsonConfig* a1, ::OGHCJKOKOPF* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::JsonConfig*, ::OGHCJKOKOPF*))((::PBYTE)hIl2Cpp + AIDJOMKDIMA_JMFDMJOIBMG_OFFSET))(a1, a2);
		}

		static ::System::Boolean IJIIDFGDCPI(::System::Object* a1, ::OGHCJKOKOPF* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::OGHCJKOKOPF*))((::PBYTE)hIl2Cpp + AIDJOMKDIMA_IJIIDFGDCPI_OFFSET))(a1, a2);
		}

	};
