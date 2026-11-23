#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E820C206C2A91678/BE203DDF9A8F87DF.h"
#include "unitysdk/F34A89061878DED2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
class B2184A192E923EAB;
namespace System { class String; }
namespace UnityEngine { class AnimageComponent; }

#define E1470A9D88B059CF_B8229F863634C076_OFFSET UNITYSDK_OFFSET(0x240C0B0)
#define E1470A9D88B059CF_BB336564EEAEE97C_OFFSET UNITYSDK_OFFSET(0x25E7F50)
#define E1470A9D88B059CF_EF9171FF664B53AA_OFFSET UNITYSDK_OFFSET(0x25E7800)
#define E1470A9D88B059CF_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x25E7790)
#define E1470A9D88B059CF__CTOR_OFFSET UNITYSDK_OFFSET(0x25E7DE0)

inline static constexpr unsigned int E1470A9D88B059CF_TypeDefinitionIndex = 5742;

class E1470A9D88B059CF : public ::F34A89061878DED2
{
public:
	::UnityEngine::AnimageComponent* F6D1F549F7B4A2E2; // 0x48
	::E820C206C2A91678::BE203DDF9A8F87DF EBC91E8327522330; // 0x50
	::System::Boolean A7431280FA10F888; // 0x54
	::System::Boolean AD77506868A15F26; // 0x55

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1470A9D88B059CF_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Boolean EF9171FF664B53AA(::System::Boolean B0EB68B99CADCF02, ::UnityEngine::Vector3& EB211B01816ACA79, ::UnityEngine::Quaternion& A0556B8B541B6D55)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + E1470A9D88B059CF_EF9171FF664B53AA_OFFSET))(this, B0EB68B99CADCF02, EB211B01816ACA79, A0556B8B541B6D55);
	}

	::System::Boolean B8229F863634C076()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E1470A9D88B059CF_B8229F863634C076_OFFSET))(this);
	}

	::UnityEngine::Vector3 BB336564EEAEE97C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + E1470A9D88B059CF_BB336564EEAEE97C_OFFSET))(this);
	}

	::System::Void _ctor(::B2184A192E923EAB* ACDE58E97E37D13C, ::AB642D1382756991* EEF688477002B28B, ::System::String* BD6DE5F0F0DD2B71, ::UnityEngine::AnimageComponent* B2B1A0C9BD24DEAB)
	{
		return ((::System::Void(*)(::PVOID, ::B2184A192E923EAB*, ::AB642D1382756991*, ::System::String*, ::UnityEngine::AnimageComponent*))((::PBYTE)hIl2Cpp + E1470A9D88B059CF__CTOR_OFFSET))(this, ACDE58E97E37D13C, EEF688477002B28B, BD6DE5F0F0DD2B71, B2B1A0C9BD24DEAB);
	}
};
