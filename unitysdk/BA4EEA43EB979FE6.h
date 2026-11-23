#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define BA4EEA43EB979FE6_B28F9FFA4EFA0AB7_OFFSET UNITYSDK_OFFSET(0x28DA780)
#define BA4EEA43EB979FE6_E907B99E0779BE84_OFFSET UNITYSDK_OFFSET(0x28DA230)
#define BA4EEA43EB979FE6_EF87AD00441330DB_OFFSET UNITYSDK_OFFSET(0x28DA390)
#define BA4EEA43EB979FE6_F16D59E7C0E9D4C8_OFFSET UNITYSDK_OFFSET(0x28DA680)
#define BA4EEA43EB979FE6_F62A6ED932C01155_OFFSET UNITYSDK_OFFSET(0x28DA4F0)

inline static constexpr unsigned int BA4EEA43EB979FE6_TypeDefinitionIndex = 16399;

class BA4EEA43EB979FE6 : public ::System::Object
{
public:
	static ::UnityEngine::Texture2D** StaticGet_FD180BD5A27A01C3()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(BA4EEA43EB979FE6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::Texture2D** StaticGet_BA0EECD6BBB82B65()
	{
		return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(BA4EEA43EB979FE6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::UnityEngine::Texture2D* F16D59E7C0E9D4C8()
	{
		return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + BA4EEA43EB979FE6_F16D59E7C0E9D4C8_OFFSET))();
	}

	static ::UnityEngine::Texture2D* B28F9FFA4EFA0AB7()
	{
		return ((::UnityEngine::Texture2D*(*)())((::PBYTE)hIl2Cpp + BA4EEA43EB979FE6_B28F9FFA4EFA0AB7_OFFSET))();
	}

	static ::UnityEngine::Texture2D* EF87AD00441330DB(::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110, ::System::Single B293560EBB811EA6)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::E46B881AA2636190, ::System::Single))((::PBYTE)hIl2Cpp + BA4EEA43EB979FE6_EF87AD00441330DB_OFFSET))(FD6BEC6563AC7110, B293560EBB811EA6);
	}

	static ::UnityEngine::Cubemap* E907B99E0779BE84(::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110, ::System::Single B293560EBB811EA6)
	{
		return ((::UnityEngine::Cubemap*(*)(::UnityEngine::E46B881AA2636190, ::System::Single))((::PBYTE)hIl2Cpp + BA4EEA43EB979FE6_E907B99E0779BE84_OFFSET))(FD6BEC6563AC7110, B293560EBB811EA6);
	}

	static ::UnityEngine::Texture3D* F62A6ED932C01155(::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110, ::System::Single B293560EBB811EA6)
	{
		return ((::UnityEngine::Texture3D*(*)(::UnityEngine::E46B881AA2636190, ::System::Single))((::PBYTE)hIl2Cpp + BA4EEA43EB979FE6_F62A6ED932C01155_OFFSET))(FD6BEC6563AC7110, B293560EBB811EA6);
	}
};
