#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPFIAJIIAEH_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x177DA2A0)
#define MPFIAJIIAEH__CTOR_OFFSET UNITYSDK_OFFSET(0x177DA290)

inline static constexpr unsigned int MPFIAJIIAEH_TypeDefinitionIndex = 82709;

class MPFIAJIIAEH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* CDBAMGGBFKB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* AGBPFKPPMPB; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* BLFELDDPCLM; // 0x20
	::Il2CppArray<::UnityEngine::Plane>* EMJFFEJNCIO; // 0x28
	::UnityEngine::PhysicsScene AHGGAKHJMPI; // 0x30
	::System::Single LPNDJOHLJBF; // 0x34
	::System::Single EFNJMBDJCDI; // 0x38
	::System::Single PMNLNNGEIFM; // 0x3C
	::UnityEngine::Vector3 JCJIFCPFIFB; // 0x40
	::System::Single FNIOPKPHDEH; // 0x4C
	::System::Single HCGMPFLECBB; // 0x50
	::UnityEngine::Vector3 LKKGLAHDEEA; // 0x54
	::UnityEngine::Vector3 IOCOPGBBKCM; // 0x60
	::System::Single FCEGDEJDDEF; // 0x6C
	::System::Boolean NDFFLOJAELB; // 0x70
	::System::Byte _padding0[0x3];
	::UnityEngine::Matrix4x4 MHLBCNHFKLN; // 0x74
	::System::Single EDKLELIHIAF; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFIAJIIAEH__CTOR_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFIAJIIAEH_BJANDJKKNCD_OFFSET))(this);
	}
};
