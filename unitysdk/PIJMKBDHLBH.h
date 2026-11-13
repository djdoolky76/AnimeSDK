#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DFKPNOPBCAH;
class JKDLIBFIHAB;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define PIJMKBDHLBH_CTOR_OFFSET UNITYSDK_OFFSET(0x176BE1F0)

inline static constexpr unsigned int PIJMKBDHLBH_TypeDefinitionIndex = 44170;

	class PIJMKBDHLBH : public ::System::Object
	{
	public:
		::JKDLIBFIHAB* ODPDOBEGCOE; // 0x10
		::UnityEngine::GameObject* PBPHJKOGPBA; // 0x18
		::DFKPNOPBCAH* IJDAJGKLAKH; // 0x20
		::UnityEngine::Transform* NJGPHAIEOBP; // 0x28
		::UnityEngine::GameObject* BOFGHEHAMKC; // 0x30
		::UnityEngine::Quaternion IJECOIOPNFN; // 0x38
		::UnityEngine::Quaternion GJMALPAMOAC; // 0x48
		::UnityEngine::Vector3 BNDDLHFKMPO; // 0x58
		::UnityEngine::Vector3 PGJPJLJOGFN; // 0x64
		::UnityEngine::Vector3 MBEHLMNAFKL; // 0x70
		::System::Boolean IJGHLLIBDKI; // 0x7C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 GFEOBHAAGJL; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJMKBDHLBH_CTOR_OFFSET))(this);
		}

	};
