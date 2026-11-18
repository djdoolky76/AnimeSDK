#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_EFKEDEDCOMG__CTOR_OFFSET UNITYSDK_OFFSET(0x131B5DA0)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationTriggerVolume_EFKEDEDCOMG_TypeDefinitionIndex = 63097;

	class AnimationTriggerVolume_EFKEDEDCOMG : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* HODAIDNDKHD; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* CGHJCBMCGCO; // 0x18
		::System::Single PBOAOCDAKDB; // 0x20
		::System::Single FNIOPKPHDEH; // 0x24
		::System::Single INNNHJELGJP; // 0x28
		::System::Boolean FGGFNIPPODF; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 AMKIECLAMLK; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_EFKEDEDCOMG__CTOR_OFFSET))(this);
		}
	};
}
