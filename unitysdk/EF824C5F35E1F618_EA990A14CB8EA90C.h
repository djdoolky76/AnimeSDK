#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EF824C5F35E1F618_EA990A14CB8EA90C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define EF824C5F35E1F618_EA990A14CB8EA90C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7FA0)

inline static constexpr unsigned int EF824C5F35E1F618_EA990A14CB8EA90C_TypeDefinitionIndex = 12899;

class EF824C5F35E1F618_EA990A14CB8EA90C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EF824C5F35E1F618_EA990A14CB8EA90C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + EF824C5F35E1F618_EA990A14CB8EA90C_INVOKE_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}
};
