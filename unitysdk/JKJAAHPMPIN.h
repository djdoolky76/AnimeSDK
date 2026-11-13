#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define JKJAAHPMPIN_CTOR_OFFSET UNITYSDK_OFFSET(0x17B254A0)
#define JKJAAHPMPIN_DMPBDGEBGCH_OFFSET UNITYSDK_OFFSET(0x17B25370)
#define JKJAAHPMPIN_FKJCPLIBJJN_OFFSET UNITYSDK_OFFSET(0x17B24F80)
#define JKJAAHPMPIN_GET_ID_OFFSET UNITYSDK_OFFSET(0x17B24F60)
#define JKJAAHPMPIN_IOBJFEJFLJP_OFFSET UNITYSDK_OFFSET(0x17B25050)
#define JKJAAHPMPIN_JIADLIAHFNI_OFFSET UNITYSDK_OFFSET(0x17B24FF0)
#define JKJAAHPMPIN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x17B252E0)
#define JKJAAHPMPIN_SET_ID_OFFSET UNITYSDK_OFFSET(0x17B24F70)

inline static constexpr unsigned int JKJAAHPMPIN_TypeDefinitionIndex = 58238;

	class JKJAAHPMPIN : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* HNAFDCODNGN; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Boolean HKBAKDEIEHK; // 0x1C
		::System::Boolean CJKOLDONNCL; // 0x1D
		::System::Boolean DMIBLDMPCMH; // 0x1E
		::System::Byte _padding0[0x1];
		::System::Single CDKHGBOPKDM; // 0x20
		::UnityEngine::Vector3 AKEGBNBJKKM; // 0x24
		::System::Single GEJKDKGKFPK; // 0x30
		::System::Boolean JDIALKFNJDP; // 0x34
		::System::Boolean BJBBGPNPDNM; // 0x35
		::System::Byte _padding1[0x2];
		::System::Single MGIAJMOKOCC; // 0x38
		::UnityEngine::Quaternion NGEJDEFDOOP; // 0x3C
		::System::Single KNCNBOIDKLD; // 0x4C
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
