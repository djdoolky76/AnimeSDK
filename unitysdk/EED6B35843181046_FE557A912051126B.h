#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EED6B35843181046_FE557A912051126B_INVOKE_OFFSET UNITYSDK_OFFSET(0x3A6F960)
#define EED6B35843181046_FE557A912051126B__CTOR_OFFSET UNITYSDK_OFFSET(0x3A6F980)

inline static constexpr unsigned int EED6B35843181046_FE557A912051126B_TypeDefinitionIndex = 11983;

class EED6B35843181046_FE557A912051126B : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EED6B35843181046_FE557A912051126B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* FB64E20BC7542B16, ::System::String* A2F72F00CA1FE98D, ::Il2CppArray<::System::Byte>* A660A143250742F6, ::System::Int32 F6698D705D169122, ::System::Action_1<::System::String*>* E8158D6D9A56F03B, ::System::Action* E5753F48089F9529, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* A224B3BD292F0D38, ::System::Boolean ED79BCB10F674D0B, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* F0EED051181023A2, ::System::Int32 EEDCCADA683B76AF, ::System::Int32 B4A98C9EDFF15CCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Action_1<::System::String*>*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EED6B35843181046_FE557A912051126B_INVOKE_OFFSET))(this, FB64E20BC7542B16, A2F72F00CA1FE98D, A660A143250742F6, F6698D705D169122, E8158D6D9A56F03B, E5753F48089F9529, A224B3BD292F0D38, ED79BCB10F674D0B, F0EED051181023A2, EEDCCADA683B76AF, B4A98C9EDFF15CCD);
	}
};
