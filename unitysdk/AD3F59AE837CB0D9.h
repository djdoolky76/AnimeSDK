#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AD3F59AE837CB0D9_AA47CB49D4BE90CC_OFFSET UNITYSDK_OFFSET(0x4358BC0)
#define AD3F59AE837CB0D9_F9A8F3E37BBBC1B1_OFFSET UNITYSDK_OFFSET(0x4358BA0)
#define AD3F59AE837CB0D9__CCTOR_OFFSET UNITYSDK_OFFSET(0x4358CD0)

inline static constexpr unsigned int AD3F59AE837CB0D9_TypeDefinitionIndex = 13641;

class AD3F59AE837CB0D9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::A32676FCB736C8E8>** StaticGet_EB94B1AB685702F3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::A32676FCB736C8E8>**)Il2CppClass::FromTypeDefinitionIndex(AD3F59AE837CB0D9_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Boolean AA47CB49D4BE90CC(::System::String* F79B4D487F303AB2, ::UnityEngine::E46B881AA2636190& FD6BEC6563AC7110)
	{
		return ((::System::Boolean(*)(::System::String*, ::UnityEngine::E46B881AA2636190&))((::PBYTE)hIl2Cpp + AD3F59AE837CB0D9_AA47CB49D4BE90CC_OFFSET))(F79B4D487F303AB2, FD6BEC6563AC7110);
	}

	static ::UnityEngine::A32676FCB736C8E8 F9A8F3E37BBBC1B1(::System::UInt32 FD6BEC6563AC7110)
	{
		return ((::UnityEngine::A32676FCB736C8E8(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AD3F59AE837CB0D9_F9A8F3E37BBBC1B1_OFFSET))(FD6BEC6563AC7110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AD3F59AE837CB0D9__CCTOR_OFFSET))();
	}
};
