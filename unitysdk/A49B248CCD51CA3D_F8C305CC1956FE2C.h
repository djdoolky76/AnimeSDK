#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class SmoothMask; }

#define A49B248CCD51CA3D_F8C305CC1956FE2C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A49B248CCD51CA3D_F8C305CC1956FE2C_TypeDefinitionIndex = 18587;

class A49B248CCD51CA3D_F8C305CC1956FE2C : public ::System::Object
{
public:
	::UnityEngine::Material* B7838973E91944C5; // 0x10
	::UnityEngine::Material* FECB9986FD1768AB; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* A5BF07C0C975EDE5; // 0x20
	::System::Int32 AD764A56E552E037; // 0x28
	::System::Byte _padding0[0x4];
	::UnityEngine::UI::SmoothMask* EDD1A9EA0A2596B9; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A49B248CCD51CA3D_F8C305CC1956FE2C__CTOR_OFFSET))(this);
	}
};
