#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define GLCCLFPBBML___C_CBPGNIBHJNO_OFFSET UNITYSDK_OFFSET(0x13DDF3C0)
#define GLCCLFPBBML___C_ENABMFGLFIM_OFFSET UNITYSDK_OFFSET(0x13DDF3D0)
#define GLCCLFPBBML___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DDF370)
#define GLCCLFPBBML___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DDF3B0)

inline static constexpr unsigned int GLCCLFPBBML___c_TypeDefinitionIndex = 72298;

class GLCCLFPBBML___c : public ::System::Object
{
public:
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__5_1()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(GLCCLFPBBML___c_TypeDefinitionIndex)->GetStaticField(0x4B9F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GLCCLFPBBML___c_TypeDefinitionIndex)->GetStaticField(0x4B9F8);
	}
	static ::System::Action** StaticGet___9__3_4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GLCCLFPBBML___c_TypeDefinitionIndex)->GetStaticField(0x4BA00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLCCLFPBBML___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML___C__CTOR_OFFSET))(this);
	}

	::System::Void CBPGNIBHJNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML___C_CBPGNIBHJNO_OFFSET))(this);
	}

	::UnityEngine::Vector3 ENABMFGLFIM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML___C_ENABMFGLFIM_OFFSET))(this);
	}
};
