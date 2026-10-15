#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BJIACBNKCCJ;
class FEIEBAJPIAE;
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define FEIEBAJPIAE___C__DISPLAYCLASS111_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15702120)
#define FEIEBAJPIAE___C__DISPLAYCLASS111_0__DETECTCHARGINGROTATION_B__0_OFFSET UNITYSDK_OFFSET(0x15722C40)

inline static constexpr unsigned int FEIEBAJPIAE___c__DisplayClass111_0_TypeDefinitionIndex = 75943;

	class FEIEBAJPIAE___c__DisplayClass111_0 : public ::System::Object
	{
	public:
		::FEIEBAJPIAE* __4__this; // 0x10
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Quaternion>* tempRot; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIEBAJPIAE___C__DISPLAYCLASS111_0_CTOR_OFFSET))(this);
		}

		::System::Void _DetectChargingRotation_b__0(::BJIACBNKCCJ* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::BJIACBNKCCJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FEIEBAJPIAE___C__DISPLAYCLASS111_0__DETECTCHARGINGROTATION_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
