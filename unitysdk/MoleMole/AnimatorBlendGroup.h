#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorClipBlendData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMATORBLENDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19217D10)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorBlendGroup_TypeDefinitionIndex = 52577;

	class AnimatorBlendGroup : public ::System::Object
	{
	public:
		::System::String* BlendParam; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::AnimatorClipBlendData*>* Data; // 0x18
		::System::String* StateName; // 0x20
		::System::Int32 MoveType; // 0x28
		::System::Boolean PassZero; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDGROUP__CTOR_OFFSET))(this);
		}
	};
}
