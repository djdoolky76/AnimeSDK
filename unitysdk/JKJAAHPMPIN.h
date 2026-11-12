#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define JKJAAHPMPIN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA47310)
#define JKJAAHPMPIN_DMPBDGEBGCH_OFFSET UNITYSDK_OFFSET(0xBA471E0)
#define JKJAAHPMPIN_FKJCPLIBJJN_OFFSET UNITYSDK_OFFSET(0xBA46E30)
#define JKJAAHPMPIN_GET_ID_OFFSET UNITYSDK_OFFSET(0xBA46E10)
#define JKJAAHPMPIN_IOBJFEJFLJP_OFFSET UNITYSDK_OFFSET(0xBA46F00)
#define JKJAAHPMPIN_JIADLIAHFNI_OFFSET UNITYSDK_OFFSET(0xBA46EA0)
#define JKJAAHPMPIN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBA47170)
#define JKJAAHPMPIN_SET_ID_OFFSET UNITYSDK_OFFSET(0xBA46E20)

inline static constexpr unsigned int JKJAAHPMPIN_TypeDefinitionIndex = 58238;

	class JKJAAHPMPIN : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* HNAFDCODNGN; // 0x10
		::UnityEngine::Quaternion NGEJDEFDOOP; // 0x18
		::UnityEngine::Vector3 AKEGBNBJKKM; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x34
		::System::Single CDKHGBOPKDM; // 0x38
		::System::Single GEJKDKGKFPK; // 0x3C
		::System::Single KNCNBOIDKLD; // 0x40
		::System::Single MGIAJMOKOCC; // 0x44
		::System::Boolean CJKOLDONNCL; // 0x48
		::System::Boolean BJBBGPNPDNM; // 0x49
		::System::Boolean HKBAKDEIEHK; // 0x4A
		::System::Boolean DMIBLDMPCMH; // 0x4B
		::System::Boolean JDIALKFNJDP; // 0x4C
		// static const ::System::Object OFLDDKENMCE; // 0x0
		// static const ::System::Object ICMKFFBMCJC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJAAHPMPIN_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJAAHPMPIN_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKJAAHPMPIN_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean FKJCPLIBJJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJAAHPMPIN_FKJCPLIBJJN_OFFSET))(this);
		}

		::System::Single JIADLIAHFNI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJAAHPMPIN_JIADLIAHFNI_OFFSET))(this);
		}

		::System::Void IOBJFEJFLJP(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JKJAAHPMPIN_IOBJFEJFLJP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJAAHPMPIN_KHGIKBFDLFB_OFFSET))(this);
		}

		::UnityEngine::Quaternion DMPBDGEBGCH()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJAAHPMPIN_DMPBDGEBGCH_OFFSET))(this);
		}

	};
