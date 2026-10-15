#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DFKPNOPBCAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA28590)

	class DFKPNOPBCAH : public ::System::Object
	{
	public:
		::UnityEngine::Transform* FMMNCMNFDHP; // 0x10
		::UnityEngine::GameObject* HIJPCPIOCNL; // 0x18
		::UnityEngine::GameObject* MOAGBKPPHCF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKPNOPBCAH_CTOR_OFFSET))(this);
		}

	};
