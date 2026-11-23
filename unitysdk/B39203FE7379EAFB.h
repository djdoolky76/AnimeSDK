#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39203FE7379EAFB_EB41934C14349BF3.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class F36C0BC0E46C051E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define B39203FE7379EAFB_BCD271AE505FAA37_OFFSET UNITYSDK_OFFSET(0x2436050)
#define B39203FE7379EAFB_E79477532700D1FD_OFFSET UNITYSDK_OFFSET(0x24364A0)
#define B39203FE7379EAFB_F55F2C606C0E4AD0_OFFSET UNITYSDK_OFFSET(0x24365E0)

inline static constexpr unsigned int B39203FE7379EAFB_TypeDefinitionIndex = 4348;

class B39203FE7379EAFB : public ::System::Object
{
public:
	static ::F36C0BC0E46C051E** StaticGet_EFBD633E1FA2C66C()
	{
		return (::F36C0BC0E46C051E**)Il2CppClass::FromTypeDefinitionIndex(B39203FE7379EAFB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Nullable_1<::System::Guid>>*>** StaticGet_F4A1E7F2D3C1CA79()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Nullable_1<::System::Guid>>*>**)Il2CppClass::FromTypeDefinitionIndex(B39203FE7379EAFB_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::F36C0BC0E46C051E* F55F2C606C0E4AD0()
	{
		return ((::F36C0BC0E46C051E*(*)())((::PBYTE)hIl2Cpp + B39203FE7379EAFB_F55F2C606C0E4AD0_OFFSET))();
	}

	static ::UnityEngine::InputSystem::InputActionMap* E79477532700D1FD(::B39203FE7379EAFB_EB41934C14349BF3 F7DDF0FD990AF6E5)
	{
		return ((::UnityEngine::InputSystem::InputActionMap*(*)(::B39203FE7379EAFB_EB41934C14349BF3))((::PBYTE)hIl2Cpp + B39203FE7379EAFB_E79477532700D1FD_OFFSET))(F7DDF0FD990AF6E5);
	}

	static ::System::Boolean BCD271AE505FAA37(::B39203FE7379EAFB_EB41934C14349BF3 F7DDF0FD990AF6E5, ::System::String* E7C99297BCFC5085, ::System::Guid& FD05558570F4A509)
	{
		return ((::System::Boolean(*)(::B39203FE7379EAFB_EB41934C14349BF3, ::System::String*, ::System::Guid&))((::PBYTE)hIl2Cpp + B39203FE7379EAFB_BCD271AE505FAA37_OFFSET))(F7DDF0FD990AF6E5, E7C99297BCFC5085, FD05558570F4A509);
	}
};
