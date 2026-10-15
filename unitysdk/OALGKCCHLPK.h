#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define OALGKCCHLPK_BLIHKKBFCHC_OFFSET UNITYSDK_OFFSET(0x1D24C860)

inline static constexpr unsigned int OALGKCCHLPK_TypeDefinitionIndex = 10827;

	class OALGKCCHLPK : public ::System::Object
	{
	public:
		static ::System::Byte BLIHKKBFCHC(::System::Action* a1, ::System::Action* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Byte(*)(::System::Action*, ::System::Action*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + OALGKCCHLPK_BLIHKKBFCHC_OFFSET))(a1, a2, a3);
		}

	};
