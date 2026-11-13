#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define NCAIMKJIOIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x150E3050)

inline static constexpr unsigned int NCAIMKJIOIJ_TypeDefinitionIndex = 81268;

	class NCAIMKJIOIJ : public ::System::Object
	{
	public:
		::System::Action* DPANHIICMLD; // 0x10
		::UnityEngine::Transform* MCLLALGABAB; // 0x18
		::System::Single GCJMFBKLGHI; // 0x20
		::UnityEngine::Vector3 FJMCLOIEMKG; // 0x24
		::System::Single PMHMEGEJDGP; // 0x30
		::System::Single IEHPFADHJFD; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAIMKJIOIJ_CTOR_OFFSET))(this);
		}

	};
