#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define NCAIMKJIOIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBAF7240)

inline static constexpr unsigned int NCAIMKJIOIJ_TypeDefinitionIndex = 78534;

	class NCAIMKJIOIJ : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MCLLALGABAB; // 0x10
		::System::Action* DPANHIICMLD; // 0x18
		::UnityEngine::Vector3 FJMCLOIEMKG; // 0x20
		::System::Single PMHMEGEJDGP; // 0x2C
		::System::Single GCJMFBKLGHI; // 0x30
		::System::Single IEHPFADHJFD; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAIMKJIOIJ_CTOR_OFFSET))(this);
		}

	};
