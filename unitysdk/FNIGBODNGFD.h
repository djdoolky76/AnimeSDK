#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FNIGBODNGFD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA43040)
#define FNIGBODNGFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA43090)

inline static constexpr unsigned int FNIGBODNGFD_TypeDefinitionIndex = 42108;

	class FNIGBODNGFD : public ::System::Object
	{
	public:
		::System::String* FLCPMEIBBKI; // 0x10
		::UnityEngine::Transform* HFLDHJHJNCF; // 0x18
		::System::Single KIPAGNCANAJ; // 0x20
		::System::Int32 KLICCNFOKEO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIGBODNGFD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIGBODNGFD_CLEAR_OFFSET))(this);
		}

	};
