#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class PEEDLCHFAFL;

#define LFKJCGCCIOA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6821F0)
#define LFKJCGCCIOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB6822A0)
#define LFKJCGCCIOA_DMHJINGNBIH_OFFSET UNITYSDK_OFFSET(0xB681F40)
#define LFKJCGCCIOA_EAPDDANICKG_OFFSET UNITYSDK_OFFSET(0xB682130)
#define LFKJCGCCIOA_FGAMNFHJBAE_OFFSET UNITYSDK_OFFSET(0xB682030)
#define LFKJCGCCIOA_GCNFAHFNLIH_OFFSET UNITYSDK_OFFSET(0xB681EF0)
#define LFKJCGCCIOA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB682240)
#define LFKJCGCCIOA_MKNIGJPLONJ_OFFSET UNITYSDK_OFFSET(0xB681F90)

	class LFKJCGCCIOA : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::HIOEAKHGILF* KAKEIDJDNHJ; // 0x18
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
