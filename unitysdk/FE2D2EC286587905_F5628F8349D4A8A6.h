#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }

#define FE2D2EC286587905_F5628F8349D4A8A6_A5B74319E6A1D9B0_OFFSET UNITYSDK_OFFSET(0x3D80D60)
#define FE2D2EC286587905_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D80E40)
#define FE2D2EC286587905_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE2D2EC286587905_F5628F8349D4A8A6_TypeDefinitionIndex = 18800;

class FE2D2EC286587905_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FE2D2EC286587905_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FE2D2EC286587905_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FE2D2EC286587905_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::UnityEngine::Vector2>** StaticGet_BCB5776C6392BCE4()
	{
		return (::System::ADDF5F55A85EB950<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(FE2D2EC286587905_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FE2D2EC286587905_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE2D2EC286587905_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 A5B74319E6A1D9B0(::UnityEngine::Vector2 F761046FE19623C7, ::UnityEngine::Vector2 ABAEB18D11EC1409)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FE2D2EC286587905_F5628F8349D4A8A6_A5B74319E6A1D9B0_OFFSET))(this, F761046FE19623C7, ABAEB18D11EC1409);
	}
};
