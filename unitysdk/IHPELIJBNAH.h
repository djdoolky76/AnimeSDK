#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IAHLAPEHFKN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define IHPELIJBNAH__CTOR_OFFSET UNITYSDK_OFFSET(0x16578630)

inline static constexpr unsigned int IHPELIJBNAH_TypeDefinitionIndex = 72114;

class IHPELIJBNAH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IAHLAPEHFKN*>* AFCDIAEIPGH; // 0x10
	::System::String* JFPNILCHFGO; // 0x18
	::UnityEngine::Collider* GALHMINJEKJ; // 0x20
	::System::Int32 GOEBHFLCJFA; // 0x28
	::System::Single GCIDCFLCDII; // 0x2C
	::UnityEngine::Vector3 FKMALCNPIDN; // 0x30
	::System::Single KLMPAILPGEC; // 0x3C
	::System::Boolean JDMHOIIFKHK; // 0x40
	::System::Boolean EKCJKABFLHM; // 0x41
	::System::Boolean EDDDBMCFJMH; // 0x42
	::System::Byte _padding0[0x1];
	::System::Single GOGGBBOGMKD; // 0x44
	::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType GIANNJMEPMJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPELIJBNAH__CTOR_OFFSET))(this);
	}
};
