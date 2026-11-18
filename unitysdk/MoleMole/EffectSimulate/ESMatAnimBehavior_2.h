#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMatAnimBehavior_2_TypeDefinitionIndex = 62231;

	template <typename T1, typename T2>
	class ESMatAnimBehavior_2
	{
	public:
		T1 m_JobValCache; // 0x0
		::System::Boolean m_bValChanged; // 0x0
		::System::Boolean m_bHasSetVal; // 0x0
		::System::Int32 m_iMatPropID; // 0x0
		::System::Boolean m_bHasCachedBaseVal; // 0x0
		T1 m_BaseValCache; // 0x0
		::System::Boolean driveChildren; // 0x0
		::System::String* propertyName; // 0x0
		::System::Boolean overrideMatBase; // 0x0
		::System::Boolean _needSetMatVal_k__BackingField; // 0x0
	};
}
