#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDIJJFMOHEC_PFBNNGIFCFF;
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Collision; }

#define KDIJJFMOHEC_PFBNNGIFCFF___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB3631E0)
#define KDIJJFMOHEC_PFBNNGIFCFF___C__DISPLAYCLASS0_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0xB3634F0)

inline static constexpr unsigned int KDIJJFMOHEC_PFBNNGIFCFF___c__DisplayClass0_0_TypeDefinitionIndex = 75567;

	class KDIJJFMOHEC_PFBNNGIFCFF___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::KDIJJFMOHEC_PFBNNGIFCFF* __4__this; // 0x10
		::System::Action* onCollisionCallback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__0(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PFBNNGIFCFF___C__DISPLAYCLASS0_0__INIT_B__0_OFFSET))(this, a1);
		}

	};
