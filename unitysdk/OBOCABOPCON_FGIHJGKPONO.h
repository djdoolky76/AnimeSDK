#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define OBOCABOPCON_FGIHJGKPONO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD4CFC0)

inline static constexpr unsigned int OBOCABOPCON_FGIHJGKPONO_TypeDefinitionIndex = 81259;

	class OBOCABOPCON_FGIHJGKPONO : public ::System::Object
	{
	public:
		::System::Object* FGLMJGCFOHF; // 0x10
		::UnityEngine::GameObject* MIAJNJNECOG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOCABOPCON_FGIHJGKPONO_CTOR_OFFSET))(this);
		}

	};
