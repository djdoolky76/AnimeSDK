#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DFKPNOPBCAH;
class JKDLIBFIHAB;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define PIJMKBDHLBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BB280)

inline static constexpr unsigned int PIJMKBDHLBH_TypeDefinitionIndex = 43189;

	class PIJMKBDHLBH : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NJGPHAIEOBP; // 0x10
		::JKDLIBFIHAB* ODPDOBEGCOE; // 0x18
		::DFKPNOPBCAH* IJDAJGKLAKH; // 0x20
		::UnityEngine::GameObject* BOFGHEHAMKC; // 0x28
		::UnityEngine::GameObject* PBPHJKOGPBA; // 0x30
		::UnityEngine::Vector3 PGJPJLJOGFN; // 0x38
		::UnityEngine::Vector3 GFEOBHAAGJL; // 0x44
		::UnityEngine::Vector3 BNDDLHFKMPO; // 0x50
		::System::Boolean IJGHLLIBDKI; // 0x5C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 MBEHLMNAFKL; // 0x60
		::UnityEngine::Quaternion GJMALPAMOAC; // 0x6C
		::UnityEngine::Quaternion IJECOIOPNFN; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJMKBDHLBH_CTOR_OFFSET))(this);
		}

	};
