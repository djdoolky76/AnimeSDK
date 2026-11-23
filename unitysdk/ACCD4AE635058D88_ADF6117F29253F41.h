#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/EBFF92DDDDB4A767.h"

class ACCD4AE635058D88;
namespace System { class Object; }

#define ACCD4AE635058D88_ADF6117F29253F41_INVOKE_OFFSET UNITYSDK_OFFSET(0x3A0A910)
#define ACCD4AE635058D88_ADF6117F29253F41__CTOR_OFFSET UNITYSDK_OFFSET(0x3A0A950)

inline static constexpr unsigned int ACCD4AE635058D88_ADF6117F29253F41_TypeDefinitionIndex = 12758;

class ACCD4AE635058D88_ADF6117F29253F41 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_ADF6117F29253F41__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::ACCD4AE635058D88* B8334CB64332323A, ::EBFF92DDDDB4A767 B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::ACCD4AE635058D88*, ::EBFF92DDDDB4A767))((::PBYTE)hIl2Cpp + ACCD4AE635058D88_ADF6117F29253F41_INVOKE_OFFSET))(this, B8334CB64332323A, B083BE7841B347C4);
	}
};
