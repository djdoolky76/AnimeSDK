#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define CEDOCEHLDLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AF3C0)

inline static constexpr unsigned int CEDOCEHLDLF_TypeDefinitionIndex = 43197;

	class CEDOCEHLDLF : public ::System::Object
	{
	public:
		::System::Action* DPANHIICMLD; // 0x10
		::UnityEngine::Quaternion LMHMOCNANAE; // 0x18
		::UnityEngine::Vector3 ILPMEGCIAOA; // 0x28
		::System::Single IEHPFADHJFD; // 0x34
		::System::Boolean ELLNLDDDJLO; // 0x38
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion PHKKNFLLCFF; // 0x3C
		::System::Single BJMAMHMCOEL; // 0x4C
		::UnityEngine::Vector3 DNFLHFPODGF; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDOCEHLDLF_CTOR_OFFSET))(this);
		}

	};
