#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BA52635D352BFCE8.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define ED9DB3F1D6CE8B6B_E554EF2FD81F17BC_A2973E3D05ECA5CF_1_OFFSET UNITYSDK_OFFSET(0x3FD80F0)
#define ED9DB3F1D6CE8B6B_E554EF2FD81F17BC_A2973E3D05ECA5CF_OFFSET UNITYSDK_OFFSET(0x3FD8500)
#define ED9DB3F1D6CE8B6B_E554EF2FD81F17BC_B4C6D8668FF6B4FF_OFFSET UNITYSDK_OFFSET(0x3FD87E0)

inline static constexpr unsigned int ED9DB3F1D6CE8B6B_E554EF2FD81F17BC_TypeDefinitionIndex = 14407;

struct alignas(8) ED9DB3F1D6CE8B6B_E554EF2FD81F17BC
{
	::System::String* A239694B2C78DF1D; // 0x10
	::System::String* EB21A1403F8CE74D; // 0x18
	::UnityEngine::InputSystem::InputBinding E62582CA640A895F; // 0x20
	::BA52635D352BFCE8 E937D4885DAA1AE8; // 0x78

	static ::System::Nullable_1<::System::Object*> A2973E3D05ECA5CF(::UnityEngine::InputSystem::InputActionMap* B5F28A6C86DC2293, ::UnityEngine::InputSystem::InputBinding& F14B4FF9E6D09320, ::System::String* BEA4AEE20812C761, ::System::String* A239694B2C78DF1D)
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_E554EF2FD81F17BC_A2973E3D05ECA5CF_OFFSET))(B5F28A6C86DC2293, F14B4FF9E6D09320, BEA4AEE20812C761, A239694B2C78DF1D);
	}

	static ::System::Nullable_1<::System::Object*> A2973E3D05ECA5CF_1(::Il2CppArray<::System::Object*>* A0281749697E32CC, ::System::Int32 E9098715EB567980, ::UnityEngine::InputSystem::InputBinding& F14B4FF9E6D09320, ::System::String* BEA4AEE20812C761, ::System::String* A239694B2C78DF1D)
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::InputSystem::InputBinding&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_E554EF2FD81F17BC_A2973E3D05ECA5CF_1_OFFSET))(A0281749697E32CC, E9098715EB567980, F14B4FF9E6D09320, BEA4AEE20812C761, A239694B2C78DF1D);
	}

	static ::System::Nullable_1<::System::Object*> B4C6D8668FF6B4FF(::System::Nullable_1<::System::Object*> A44847269CC7D710, ::System::Nullable_1<::System::Object*> FFA6CADD702BC4B6)
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::System::Nullable_1<::System::Object*>, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_E554EF2FD81F17BC_B4C6D8668FF6B4FF_OFFSET))(A44847269CC7D710, FFA6CADD702BC4B6);
	}
};
