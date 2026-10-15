#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OALGKCCHLPK_BLIHKKBFCHC_OFFSET UNITYSDK_OFFSET(0x1D21EC40)

inline static constexpr unsigned int OALGKCCHLPK_TypeDefinitionIndex = 10827;

	class OALGKCCHLPK : public ::System::Object
	{
	public:
		static ::System::Byte BLIHKKBFCHC(::System::Action* a1, ::System::Action_1<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Byte(*)(::System::Action*, ::System::Action_1<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + OALGKCCHLPK_BLIHKKBFCHC_OFFSET))(a1, a2, a3);
		}

	};
