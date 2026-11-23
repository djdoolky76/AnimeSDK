#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E733EA16DCBE16B0_FB6E7ECC8EAA152D_E3C796A695B705F0_OFFSET UNITYSDK_OFFSET(0x43E58D0)

namespace E733EA16DCBE16B0
{
	inline static constexpr unsigned int FB6E7ECC8EAA152D_TypeDefinitionIndex = 21554;

	class FB6E7ECC8EAA152D : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet_F024DDB904014C90()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FB6E7ECC8EAA152D_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void E3C796A695B705F0(::System::String* BE4BF5B35F3DDAD0)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + E733EA16DCBE16B0_FB6E7ECC8EAA152D_E3C796A695B705F0_OFFSET))(BE4BF5B35F3DDAD0);
		}
	};
}
