#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBGCEENEKND.h"
#include "unitysdk/System/Object.h"
class JNPKHNPNMFC;
namespace UnityEngine { class Material; }

#define DDPFPHOOCLN_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4F1550)
#define DDPFPHOOCLN_CTOR_OFFSET UNITYSDK_OFFSET(0xE4F15A0)

	class DDPFPHOOCLN : public ::System::Object
	{
	public:
		::JNPKHNPNMFC* CPOAKCIODHA; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* HNOOHPDGPEA; // 0x18
		::System::Int32 BJIOBCHFCAA; // 0x20
		::FBGCEENEKND MJMEEOIEMMM; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPFPHOOCLN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDPFPHOOCLN_CLEAR_OFFSET))(this);
		}

	};
