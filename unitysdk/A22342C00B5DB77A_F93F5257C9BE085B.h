#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A22342C00B5DB77A_A580D8BB0952918A;
namespace System { class Object; }
namespace System { class String; }

#define A22342C00B5DB77A_F93F5257C9BE085B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define A22342C00B5DB77A_F93F5257C9BE085B__CTOR_OFFSET UNITYSDK_OFFSET(0x3A23C40)

inline static constexpr unsigned int A22342C00B5DB77A_F93F5257C9BE085B_TypeDefinitionIndex = 12847;

class A22342C00B5DB77A_F93F5257C9BE085B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_F93F5257C9BE085B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Int32 Invoke(::System::String* F6FB39503B89A1C9, ::System::Boolean FF6F148D81259221, ::A22342C00B5DB77A_A580D8BB0952918A* A148D02C64816912)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean, ::A22342C00B5DB77A_A580D8BB0952918A*))((::PBYTE)hIl2Cpp + A22342C00B5DB77A_F93F5257C9BE085B_INVOKE_OFFSET))(this, F6FB39503B89A1C9, FF6F148D81259221, A148D02C64816912);
	}
};
