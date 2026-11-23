#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define EFA9417F70EEB01C_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x3A455C0)
#define EFA9417F70EEB01C_A6844E47CB8D9DDD_OFFSET UNITYSDK_OFFSET(0x3A45190)
#define EFA9417F70EEB01C_B61D163A7A67B7D5_OFFSET UNITYSDK_OFFSET(0x3A453F0)
#define EFA9417F70EEB01C_E28C8DDBD01A0714_OFFSET UNITYSDK_OFFSET(0x3A46110)
#define EFA9417F70EEB01C_F68E8828D6BB95A9_OFFSET UNITYSDK_OFFSET(0x3A457D0)
#define EFA9417F70EEB01C__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A46310)
#define EFA9417F70EEB01C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EFA9417F70EEB01C_TypeDefinitionIndex = 12947;

class EFA9417F70EEB01C : public ::System::Object
{
public:
	static ::EFA9417F70EEB01C** StaticGet_EE999965A1D2099B()
	{
		return (::EFA9417F70EEB01C**)Il2CppClass::FromTypeDefinitionIndex(EFA9417F70EEB01C_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFA9417F70EEB01C_A1E97155B145443C_OFFSET))(this);
	}

	::System::Void E28C8DDBD01A0714(::System::String* F0D3F87128A7C4CA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFA9417F70EEB01C_E28C8DDBD01A0714_OFFSET))(this, F0D3F87128A7C4CA);
	}

	::System::Boolean A6844E47CB8D9DDD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFA9417F70EEB01C_A6844E47CB8D9DDD_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFA9417F70EEB01C__CTOR_OFFSET))(this);
	}

	::System::Void F68E8828D6BB95A9(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFA9417F70EEB01C_F68E8828D6BB95A9_OFFSET))(this, F1BF0FE85E9DD584);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFA9417F70EEB01C__CCTOR_OFFSET))();
	}

	::System::Void B61D163A7A67B7D5(::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* E04D2BE64FCE9814, ::System::Single B8CEFF124B3872B8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::Single))((::PBYTE)hIl2Cpp + EFA9417F70EEB01C_B61D163A7A67B7D5_OFFSET))(this, F5EF7E29767E03BF, F0961C93719F7B0D, E04D2BE64FCE9814, B8CEFF124B3872B8);
	}
};
