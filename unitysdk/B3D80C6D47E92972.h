#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F0D7E1CC79344FE9.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BB53FDCEC0659F4F;
namespace A970A434E9CC38AD { class E081240858EC757E; }

#define B3D80C6D47E92972_AFD5178090BD77F2_OFFSET UNITYSDK_OFFSET(0x1892320)
#define B3D80C6D47E92972__CTOR_OFFSET UNITYSDK_OFFSET(0x1892410)

inline static constexpr unsigned int B3D80C6D47E92972_TypeDefinitionIndex = 136;

class B3D80C6D47E92972 : public ::F0D7E1CC79344FE9
{
public:
	::UnityEngine::Vector3 B80688789ABA43E6; // 0x28
	::UnityEngine::Quaternion F90A0854DA35175E; // 0x34

	::System::Void _ctor(::BB53FDCEC0659F4F* BBDFEFADBEC28609, ::A970A434E9CC38AD::E081240858EC757E* E0C29B9F427F1B80, ::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Quaternion A0556B8B541B6D55)
	{
		return ((::System::Void(*)(::PVOID, ::BB53FDCEC0659F4F*, ::A970A434E9CC38AD::E081240858EC757E*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + B3D80C6D47E92972__CTOR_OFFSET))(this, BBDFEFADBEC28609, E0C29B9F427F1B80, EB211B01816ACA79, A0556B8B541B6D55);
	}

	::System::Void AFD5178090BD77F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3D80C6D47E92972_AFD5178090BD77F2_OFFSET))(this);
	}
};
