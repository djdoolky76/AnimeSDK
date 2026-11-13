#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define CEDOCEHLDLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D9FD0)

inline static constexpr unsigned int CEDOCEHLDLF_TypeDefinitionIndex = 44178;

	class CEDOCEHLDLF : public ::System::Object
	{
	public:
		::System::Action* DPANHIICMLD; // 0x10
		::UnityEngine::Vector3 ILPMEGCIAOA; // 0x18
		::UnityEngine::Vector3 DNFLHFPODGF; // 0x24
		::System::Single IEHPFADHJFD; // 0x30
		::UnityEngine::Quaternion LMHMOCNANAE; // 0x34
		::System::Boolean ELLNLDDDJLO; // 0x44
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion PHKKNFLLCFF; // 0x48
		::System::Single BJMAMHMCOEL; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDOCEHLDLF_CTOR_OFFSET))(this);
		}

	};
