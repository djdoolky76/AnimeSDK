#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/E18D0486499A5F76.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RayfireRigid; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RAYFIRE_RFLIMITATIONS_CHECKS_OFFSET UNITYSDK_OFFSET(0x2956110)
#define RAYFIRE_RFLIMITATIONS_COPYFROM_OFFSET UNITYSDK_OFFSET(0x2957690)
#define RAYFIRE_RFLIMITATIONS_CREATEROOT_OFFSET UNITYSDK_OFFSET(0x29576D0)
#define RAYFIRE_RFLIMITATIONS_DEMOLISHABLECOR_OFFSET UNITYSDK_OFFSET(0x2957890)
#define RAYFIRE_RFLIMITATIONS_RESET_OFFSET UNITYSDK_OFFSET(0x2957920)
#define RAYFIRE_RFLIMITATIONS_SETANCESTOR_OFFSET UNITYSDK_OFFSET(0x2957A10)
#define RAYFIRE_RFLIMITATIONS_SETBOUND_OFFSET UNITYSDK_OFFSET(0x2957B70)
#define RAYFIRE_RFLIMITATIONS_SETDESCENDANTS_OFFSET UNITYSDK_OFFSET(0x2957CF0)
#define RAYFIRE_RFLIMITATIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x2957DC0)
#define RAYFIRE_RFLIMITATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x2957E20)

namespace RayFire
{
	inline static constexpr unsigned int RFLimitations_TypeDefinitionIndex = 15449;

	class RFLimitations : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_rootStr()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RFLimitations_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Single solidity; // 0x10
		::System::Int32 depth; // 0x14
		::System::Single time; // 0x18
		::System::Single size; // 0x1C
		::System::Boolean visible; // 0x20
		::System::Boolean sliceByBlade; // 0x21
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* slicePlanes; // 0x28
		::UnityEngine::E18D0486499A5F76 contactPoint; // 0x30
		::UnityEngine::Vector3 contactVector3; // 0x60
		::UnityEngine::Vector3 contactNormal; // 0x6C
		::System::Boolean demolitionShould; // 0x78
		::System::Boolean demolished; // 0x79
		::System::Byte _padding1[0x2];
		::System::Single birthTime; // 0x7C
		::System::Single bboxSize; // 0x80
		::System::Int32 currentDepth; // 0x84
		::System::Boolean demolishableCorState; // 0x88
		::System::Byte _padding2[0x3];
		::System::Single sliceForce; // 0x8C
		::System::Boolean affectInactive; // 0x90
		::System::Byte _padding3[0x7];
		::RayFire::RayfireRigid* ancestor; // 0x98
		::System::Collections::Generic::List_1<::RayFire::RayfireRigid*>* descendants; // 0xA0
		::UnityEngine::B3A7F113FE1DE383 bound; // 0xA8

		static ::System::Void SetDescendants(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS_SETDESCENDANTS_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS_RESET_OFFSET))(this);
		}

		static ::System::Void Checks(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS_CHECKS_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void CopyFrom(::RayFire::RFLimitations* AA0B85A8DB8D462F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFLimitations*))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS_COPYFROM_OFFSET))(this, AA0B85A8DB8D462F);
		}

		static ::System::Void SetBound(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS_SETBOUND_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Collections::IEnumerator* DemolishableCor(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS_DEMOLISHABLECOR_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void CreateRoot(::RayFire::RayfireRigid* A2395A471E8081EB)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS_CREATEROOT_OFFSET))(A2395A471E8081EB);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS__CTOR_OFFSET))(this);
		}

		static ::System::Void SetAncestor(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFLIMITATIONS_SETANCESTOR_OFFSET))(F2C7FF5A19F78852);
		}
	};
}
