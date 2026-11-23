#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/A49B248CCD51CA3D_FD407FE66B32BF83.h"

class A49B248CCD51CA3D_F8C305CC1956FE2C;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class SmoothMask; }

#define A49B248CCD51CA3D_A1D6FDEABD85431C_OFFSET UNITYSDK_OFFSET(0x43BCD60)
#define A49B248CCD51CA3D_AF703D80759B60D4_OFFSET UNITYSDK_OFFSET(0x43BC0B0)
#define A49B248CCD51CA3D_B481E522BF48827B_OFFSET UNITYSDK_OFFSET(0x43BC710)
#define A49B248CCD51CA3D_B65DE626B595A8B3_OFFSET UNITYSDK_OFFSET(0x43BCBB0)
#define A49B248CCD51CA3D_B98284D3039A3468_OFFSET UNITYSDK_OFFSET(0x43BC860)
#define A49B248CCD51CA3D_E8D93C1BCB4B6431_OFFSET UNITYSDK_OFFSET(0x43BCA50)
#define A49B248CCD51CA3D_F77A2EEABE94D751_OFFSET UNITYSDK_OFFSET(0x43BC260)
#define A49B248CCD51CA3D__CCTOR_OFFSET UNITYSDK_OFFSET(0x43BD360)

inline static constexpr unsigned int A49B248CCD51CA3D_TypeDefinitionIndex = 18588;

class A49B248CCD51CA3D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_AC980E57FC2CF7F5()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A49B248CCD51CA3D_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void E8D93C1BCB4B6431(::UnityEngine::UI::SmoothMask* B9734AD19DA91385)
	{
		return ((::System::Void(*)(::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + A49B248CCD51CA3D_E8D93C1BCB4B6431_OFFSET))(B9734AD19DA91385);
	}

	static ::System::Void B98284D3039A3468(::UnityEngine::Material* A5122AFA17509D29)
	{
		return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + A49B248CCD51CA3D_B98284D3039A3468_OFFSET))(A5122AFA17509D29);
	}

	static ::System::Void AF703D80759B60D4(::UnityEngine::Material* B711DDFE5E2A139B, ::UnityEngine::Material* B81A19C909D1D017)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + A49B248CCD51CA3D_AF703D80759B60D4_OFFSET))(B711DDFE5E2A139B, B81A19C909D1D017);
	}

	static ::System::Void B65DE626B595A8B3(::A49B248CCD51CA3D_F8C305CC1956FE2C* A1D66F7B369F1DE5, ::A49B248CCD51CA3D_FD407FE66B32BF83& B652C74F012A9C5B, ::System::Boolean A6341C9F2C4172BD)
	{
		return ((::System::Void(*)(::A49B248CCD51CA3D_F8C305CC1956FE2C*, ::A49B248CCD51CA3D_FD407FE66B32BF83&, ::System::Boolean))((::PBYTE)hIl2Cpp + A49B248CCD51CA3D_B65DE626B595A8B3_OFFSET))(A1D66F7B369F1DE5, B652C74F012A9C5B, A6341C9F2C4172BD);
	}

	static ::System::Void A1D6FDEABD85431C(::UnityEngine::Material* E3AD885F703BB54B, ::A49B248CCD51CA3D_FD407FE66B32BF83& B652C74F012A9C5B, ::System::Boolean A6341C9F2C4172BD)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::A49B248CCD51CA3D_FD407FE66B32BF83&, ::System::Boolean))((::PBYTE)hIl2Cpp + A49B248CCD51CA3D_A1D6FDEABD85431C_OFFSET))(E3AD885F703BB54B, B652C74F012A9C5B, A6341C9F2C4172BD);
	}

	static ::UnityEngine::Material* F77A2EEABE94D751(::UnityEngine::Material* F179FB8D0E9915A9, ::UnityEngine::UI::SmoothMask* B9734AD19DA91385)
	{
		return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + A49B248CCD51CA3D_F77A2EEABE94D751_OFFSET))(F179FB8D0E9915A9, B9734AD19DA91385);
	}

	static ::System::Void B481E522BF48827B(::UnityEngine::Material* B711DDFE5E2A139B, ::UnityEngine::Material* B81A19C909D1D017)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + A49B248CCD51CA3D_B481E522BF48827B_OFFSET))(B711DDFE5E2A139B, B81A19C909D1D017);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A49B248CCD51CA3D__CCTOR_OFFSET))();
	}
};
