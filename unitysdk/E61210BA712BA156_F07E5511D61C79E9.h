#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RayFire { class RayfireBomb; }
namespace System { class Object; }

#define E61210BA712BA156_F07E5511D61C79E9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E61210BA712BA156_F07E5511D61C79E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

inline static constexpr unsigned int E61210BA712BA156_F07E5511D61C79E9_TypeDefinitionIndex = 15616;

class E61210BA712BA156_F07E5511D61C79E9 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E61210BA712BA156_F07E5511D61C79E9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::RayFire::RayfireBomb* AB7D547280ACC742)
	{
		return ((::System::Void(*)(::PVOID, ::RayFire::RayfireBomb*))((::PBYTE)hIl2Cpp + E61210BA712BA156_F07E5511D61C79E9_INVOKE_OFFSET))(this, AB7D547280ACC742);
	}
};
