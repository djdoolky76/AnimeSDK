#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_A2D6DEE2C4DA1FE3_A17D42F70FF0B27B_OFFSET UNITYSDK_OFFSET(0x410A3D0)
#define UNITYENGINE_A2D6DEE2C4DA1FE3_A61465E017CE627E_OFFSET UNITYSDK_OFFSET(0x410A420)
#define UNITYENGINE_A2D6DEE2C4DA1FE3_BF9ADC7EFFC866BE_OFFSET UNITYSDK_OFFSET(0x410A370)

namespace UnityEngine
{
	inline static constexpr unsigned int A2D6DEE2C4DA1FE3_TypeDefinitionIndex = 16983;

	class A2D6DEE2C4DA1FE3 : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_BC72F1C82FEE7593()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A2D6DEE2C4DA1FE3_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Boolean A17D42F70FF0B27B(::System::String* A288CB28FC2A6DA3, ::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A2D6DEE2C4DA1FE3_A17D42F70FF0B27B_OFFSET))(A288CB28FC2A6DA3, E937D4885DAA1AE8);
		}

		static ::System::Void A61465E017CE627E(::System::String* F466F7D84DF8D0DE)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A2D6DEE2C4DA1FE3_A61465E017CE627E_OFFSET))(F466F7D84DF8D0DE);
		}

		static ::System::Void BF9ADC7EFFC866BE(::System::String* F466F7D84DF8D0DE)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A2D6DEE2C4DA1FE3_BF9ADC7EFFC866BE_OFFSET))(F466F7D84DF8D0DE);
		}
	};
}
