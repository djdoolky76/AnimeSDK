#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }
namespace System { class Action; }

#define DHPBHHKHIGO___C_JODBBADHJAN_OFFSET UNITYSDK_OFFSET(0x19D61180)
#define DHPBHHKHIGO___C_MONGKCHEOEG_OFFSET UNITYSDK_OFFSET(0x19D61190)
#define DHPBHHKHIGO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D61130)
#define DHPBHHKHIGO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D61170)

inline static constexpr unsigned int DHPBHHKHIGO___c_TypeDefinitionIndex = 91676;

class DHPBHHKHIGO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DHPBHHKHIGO___c_TypeDefinitionIndex)->GetStaticField(0x3A960);
	}
	static ::NapStreaming::NapStreamingManager_StreamingPosProvider** StaticGet___9__50_0()
	{
		return (::NapStreaming::NapStreamingManager_StreamingPosProvider**)Il2CppClass::FromTypeDefinitionIndex(DHPBHHKHIGO___c_TypeDefinitionIndex)->GetStaticField(0x3A968);
	}
	static ::System::Action** StaticGet___9__37_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DHPBHHKHIGO___c_TypeDefinitionIndex)->GetStaticField(0x3A970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHPBHHKHIGO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO___C__CTOR_OFFSET))(this);
	}

	::System::Void JODBBADHJAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO___C_JODBBADHJAN_OFFSET))(this);
	}

	::UnityEngine::Vector3 MONGKCHEOEG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO___C_MONGKCHEOEG_OFFSET))(this);
	}
};
