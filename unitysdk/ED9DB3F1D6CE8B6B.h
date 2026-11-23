#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding_B3DAC0195ED97FB6.h"

class ED9DB3F1D6CE8B6B_B3EFE7CCC37B463C;
namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputControl; }

#define ED9DB3F1D6CE8B6B_ADA5B435FB876EAC_OFFSET UNITYSDK_OFFSET(0x3FCF080)
#define ED9DB3F1D6CE8B6B_E4B3D61CAC56E7C8_1_OFFSET UNITYSDK_OFFSET(0x3FCF1F0)
#define ED9DB3F1D6CE8B6B_E4B3D61CAC56E7C8_OFFSET UNITYSDK_OFFSET(0x3FCF160)
#define ED9DB3F1D6CE8B6B_F175D106CCA7B230_OFFSET UNITYSDK_OFFSET(0x3FCF820)

inline static constexpr unsigned int ED9DB3F1D6CE8B6B_TypeDefinitionIndex = 14410;

class ED9DB3F1D6CE8B6B : public ::System::Object
{
public:
	static ::ED9DB3F1D6CE8B6B_B3EFE7CCC37B463C** StaticGet_E1CFF2A69814BF1E()
	{
		return (::ED9DB3F1D6CE8B6B_B3EFE7CCC37B463C**)Il2CppClass::FromTypeDefinitionIndex(ED9DB3F1D6CE8B6B_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* E4B3D61CAC56E7C8(::UnityEngine::InputSystem::InputAction* BC288918C940C7A6, ::System::Int32 FD24C1A1551EFEEA, ::UnityEngine::InputSystem::InputBinding_B3DAC0195ED97FB6 FADED64AD3E99C03)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32, ::UnityEngine::InputSystem::InputBinding_B3DAC0195ED97FB6))((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_E4B3D61CAC56E7C8_OFFSET))(BC288918C940C7A6, FD24C1A1551EFEEA, FADED64AD3E99C03);
	}

	static ::ED9DB3F1D6CE8B6B_B3EFE7CCC37B463C* ADA5B435FB876EAC()
	{
		return ((::ED9DB3F1D6CE8B6B_B3EFE7CCC37B463C*(*)())((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_ADA5B435FB876EAC_OFFSET))();
	}

	static ::System::Int32 F175D106CCA7B230(::UnityEngine::InputSystem::InputAction* BC288918C940C7A6, ::UnityEngine::InputSystem::InputControl* B35325D9541AD934)
	{
		return ((::System::Int32(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_F175D106CCA7B230_OFFSET))(BC288918C940C7A6, B35325D9541AD934);
	}

	static ::System::String* E4B3D61CAC56E7C8_1(::UnityEngine::InputSystem::InputAction* BC288918C940C7A6, ::System::Int32 FD24C1A1551EFEEA, ::System::String*& A6DF35433337B6DF, ::System::String*& AD735A62659B5116, ::UnityEngine::InputSystem::InputBinding_B3DAC0195ED97FB6 FADED64AD3E99C03)
	{
		return ((::System::String*(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32, ::System::String*&, ::System::String*&, ::UnityEngine::InputSystem::InputBinding_B3DAC0195ED97FB6))((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_E4B3D61CAC56E7C8_1_OFFSET))(BC288918C940C7A6, FD24C1A1551EFEEA, A6DF35433337B6DF, AD735A62659B5116, FADED64AD3E99C03);
	}
};
