#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCPOIDCNJDA;
class OODMOIBKGCP;
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define OODMOIBKGCP___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF72090)
#define OODMOIBKGCP___C__DISPLAYCLASS11_0__CREATEBOARD_B__0_OFFSET UNITYSDK_OFFSET(0xBF720A0)

inline static constexpr unsigned int OODMOIBKGCP___c__DisplayClass11_0_TypeDefinitionIndex = 76656;

	class OODMOIBKGCP___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action* onBoardLoad; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateBoard_b__0(::OODMOIBKGCP* a1, ::OCPOIDCNJDA* a2, ::UnityEngine::Transform* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OODMOIBKGCP*, ::OCPOIDCNJDA*, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + OODMOIBKGCP___C__DISPLAYCLASS11_0__CREATEBOARD_B__0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
