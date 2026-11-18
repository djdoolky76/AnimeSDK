#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMPPOPMFAEI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_NOTETYPECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x139FD8F0)

namespace MoleMole
{
	inline static constexpr unsigned int NoteTypeColor_TypeDefinitionIndex = 89451;

	class NoteTypeColor : public ::System::Object
	{
	public:
		::HMPPOPMFAEI Type; // 0x10
		::UnityEngine::Color Color; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTETYPECOLOR__CTOR_OFFSET))(this);
		}
	};
}
