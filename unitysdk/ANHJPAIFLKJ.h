#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Bounds.h"
class LJFHKAJPFNE;
namespace UnityEngine { class Camera; }

#define ANHJPAIFLKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1558C3E0)
#define ANHJPAIFLKJ_MAELMLEBIMH_OFFSET UNITYSDK_OFFSET(0x1558C030)
#define ANHJPAIFLKJ_MKBOIKJNJCB_OFFSET UNITYSDK_OFFSET(0x1558BFB0)
#define ANHJPAIFLKJ_NIMPADIFBKJ_OFFSET UNITYSDK_OFFSET(0x1558BDE0)

inline static constexpr unsigned int ANHJPAIFLKJ_TypeDefinitionIndex = 73814;

	class ANHJPAIFLKJ : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Plane>* PLEDIKJGBHK; // 0x10
		::System::Single DOHPGABAGNA; // 0x18
		::System::Boolean PGOFBBMGANH; // 0x1C
		::System::Boolean HDIMLIAJGLL; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single ECKMPJKMOHN; // 0x20
		::UnityEngine::Matrix4x4 BJLGJEOBJBH; // 0x24
		// static const ::System::Object GMFHCDPBDIL; // 0x0
		// static const ::System::Object ABEJJLFNPNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJPAIFLKJ_CTOR_OFFSET))(this);
		}

		::System::Void NIMPADIFBKJ(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + ANHJPAIFLKJ_NIMPADIFBKJ_OFFSET))(this, a1);
		}

		::System::Boolean MKBOIKJNJCB(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + ANHJPAIFLKJ_MKBOIKJNJCB_OFFSET))(this, a1);
		}

		::System::Void MAELMLEBIMH(::UnityEngine::Camera* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANHJPAIFLKJ_MAELMLEBIMH_OFFSET))(this, a1, a2);
		}

	};
