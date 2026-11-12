#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class PEEDLCHFAFL;

#define LFKJCGCCIOA_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF17E30)
#define LFKJCGCCIOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF17EE0)
#define LFKJCGCCIOA_DMHJINGNBIH_OFFSET UNITYSDK_OFFSET(0xBF17B80)
#define LFKJCGCCIOA_EAPDDANICKG_OFFSET UNITYSDK_OFFSET(0xBF17D70)
#define LFKJCGCCIOA_FGAMNFHJBAE_OFFSET UNITYSDK_OFFSET(0xBF17C70)
#define LFKJCGCCIOA_GCNFAHFNLIH_OFFSET UNITYSDK_OFFSET(0xBF17B30)
#define LFKJCGCCIOA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF17E80)
#define LFKJCGCCIOA_MKNIGJPLONJ_OFFSET UNITYSDK_OFFSET(0xBF17BD0)

inline static constexpr unsigned int LFKJCGCCIOA_TypeDefinitionIndex = 79212;

	class LFKJCGCCIOA : public ::System::Object
	{
	public:
		::HIOEAKHGILF* KAKEIDJDNHJ; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJCGCCIOA_CTOR_OFFSET))(this);
		}

		::System::Single GCNFAHFNLIH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJCGCCIOA_GCNFAHFNLIH_OFFSET))(this);
		}

		::System::Boolean DMHJINGNBIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJCGCCIOA_DMHJINGNBIH_OFFSET))(this);
		}

		::System::Single MKNIGJPLONJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJCGCCIOA_MKNIGJPLONJ_OFFSET))(this);
		}

		::UnityEngine::Vector2 FGAMNFHJBAE()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJCGCCIOA_FGAMNFHJBAE_OFFSET))(this);
		}

		::UnityEngine::Vector3 EAPDDANICKG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJCGCCIOA_EAPDDANICKG_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJCGCCIOA_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HIOEAKHGILF* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LFKJCGCCIOA_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

	};
