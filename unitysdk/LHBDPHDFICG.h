#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHBDPHDFICG_MPBCIEGCBFF_LFBEANMIBKJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class LHBDPHDFICG_MPBCIEGCBFF;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define LHBDPHDFICG_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x18AE57F0)
#define LHBDPHDFICG_DIJGKMCCCDK_OFFSET UNITYSDK_OFFSET(0x18AE58B0)
#define LHBDPHDFICG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AE5760)

inline static constexpr unsigned int LHBDPHDFICG_TypeDefinitionIndex = 8112;

class LHBDPHDFICG : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::System::Object*>** StaticGet_MNJLKODBOOO()
	{
		return (::System::Collections::Generic::Queue_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(LHBDPHDFICG_TypeDefinitionIndex)->GetStaticField(0x74E0);
	}
	static ::UnityEngine::Vector2* StaticGet_OICMAJNGGBH()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(LHBDPHDFICG_TypeDefinitionIndex)->GetStaticField(0x3A70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHBDPHDFICG__CCTOR_OFFSET))();
	}

	static ::System::Void COFHOCIEHPD(::LHBDPHDFICG_MPBCIEGCBFF_LFBEANMIBKJ KAMJLKGLFDB, ::System::Object* GPGKIBELFBG)
	{
		return ((::System::Void(*)(::LHBDPHDFICG_MPBCIEGCBFF_LFBEANMIBKJ, ::System::Object*))((::PBYTE)hIl2Cpp + LHBDPHDFICG_COFHOCIEHPD_OFFSET))(KAMJLKGLFDB, GPGKIBELFBG);
	}

	static ::LHBDPHDFICG_MPBCIEGCBFF* DIJGKMCCCDK()
	{
		return ((::LHBDPHDFICG_MPBCIEGCBFF*(*)())((::PBYTE)hIl2Cpp + LHBDPHDFICG_DIJGKMCCCDK_OFFSET))();
	}
};
