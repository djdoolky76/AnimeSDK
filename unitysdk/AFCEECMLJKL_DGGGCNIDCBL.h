#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/OverlapResult.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AFCEECMLJKL_DGGGCNIDCBL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x154EED70)
#define AFCEECMLJKL_DGGGCNIDCBL__CTOR_OFFSET UNITYSDK_OFFSET(0x154EED00)

inline static constexpr unsigned int AFCEECMLJKL_DGGGCNIDCBL_TypeDefinitionIndex = 71522;

class AFCEECMLJKL_DGGGCNIDCBL : public ::System::Object
{
public:
	// static const ::System::Int32 CHAFBHPKEMM = 0x8; // 0x0
	::Il2CppArray<::UnityEngine::OverlapResult>* LAEKPMOCNEE; // 0x10
	::Il2CppArray<::UnityEngine::RaycastHit>* GPEFFIBECIC; // 0x18
	::Il2CppArray<::UnityEngine::OverlapResult>* EFEHNFBDHPO; // 0x20
	::System::Int32 OPIHEEFFDIP; // 0x28
	::System::Int32 DNJMCBBBFNK; // 0x2C
	::System::Int32 BKCJBPPJCEL; // 0x30
	::UnityEngine::Vector3 PIAFALGHEJJ; // 0x34
	::System::Int32 GGMFNBGBNMP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_DGGGCNIDCBL__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCEECMLJKL_DGGGCNIDCBL_PHOADBJGFBE_OFFSET))(this);
	}
};
