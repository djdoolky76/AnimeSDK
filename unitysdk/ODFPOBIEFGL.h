#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class HAPKJCJOJLF;
class ODFPOBIEFGL;
namespace UnityEngine { class GameObject; }

#define ODFPOBIEFGL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19A3F3B0)
#define ODFPOBIEFGL_CTOR_OFFSET UNITYSDK_OFFSET(0x19A3F3A0)
#define ODFPOBIEFGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A3F540)
#define ODFPOBIEFGL_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x19A3F420)
#define ODFPOBIEFGL_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x19A3F4E0)

inline static constexpr unsigned int ODFPOBIEFGL_TypeDefinitionIndex = 61040;

	class ODFPOBIEFGL : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* MDIAMHAKNDK; // 0x10
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ODFPOBIEFGL_CTOR_OFFSET))(this, a1);
		}

		static ::ODFPOBIEFGL* BPLPBPMEODA(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::ODFPOBIEFGL*(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODFPOBIEFGL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::RPG::MVector3 HHMFILFAMNA()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFPOBIEFGL_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODFPOBIEFGL_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean Equals(::HAPKJCJOJLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAPKJCJOJLF*))((::PBYTE)hIl2Cpp + ODFPOBIEFGL_EQUALS_OFFSET))(this, a1);
		}

	};
