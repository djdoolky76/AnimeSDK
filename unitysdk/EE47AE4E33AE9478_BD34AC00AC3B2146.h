#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EE47AE4E33AE9478;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define EE47AE4E33AE9478_BD34AC00AC3B2146_B6E0BD3EEA28D5EA_OFFSET UNITYSDK_OFFSET(0x39B8410)
#define EE47AE4E33AE9478_BD34AC00AC3B2146__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EE47AE4E33AE9478_BD34AC00AC3B2146_TypeDefinitionIndex = 12569;

class EE47AE4E33AE9478_BD34AC00AC3B2146 : public ::System::Object
{
public:
	::EE47AE4E33AE9478* A544919C800E2923; // 0x10
	::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_BD34AC00AC3B2146__CTOR_OFFSET))(this);
	}

	::System::Void B6E0BD3EEA28D5EA(::Il2CppArray<::System::Byte>* B5CF54381C4A69A1, ::System::Int32 AB46D6A196F8FF64, ::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + EE47AE4E33AE9478_BD34AC00AC3B2146_B6E0BD3EEA28D5EA_OFFSET))(this, B5CF54381C4A69A1, AB46D6A196F8FF64, B083BE7841B347C4);
	}
};
