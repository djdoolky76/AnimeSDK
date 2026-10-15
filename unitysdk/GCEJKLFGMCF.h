#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GCEJKLFGMCF_ACOOCANFNOG_OFFSET UNITYSDK_OFFSET(0x1CA7F030)
#define GCEJKLFGMCF_IPCNGGJPKLF_1_OFFSET UNITYSDK_OFFSET(0x1CA7FD40)
#define GCEJKLFGMCF_IPCNGGJPKLF_OFFSET UNITYSDK_OFFSET(0x1CA7FAB0)
#define GCEJKLFGMCF_KNCOAPHOPKG_OFFSET UNITYSDK_OFFSET(0x1CA7F1A0)
#define GCEJKLFGMCF_LJBDLFEAMBG_OFFSET UNITYSDK_OFFSET(0x1CA80310)
#define GCEJKLFGMCF_LPENFMNKMEO_OFFSET UNITYSDK_OFFSET(0x1CA7F530)
#define GCEJKLFGMCF_MHNCIMNFDAF_OFFSET UNITYSDK_OFFSET(0x1CA7F0C0)
#define GCEJKLFGMCF_MMDPMEAHNBC_OFFSET UNITYSDK_OFFSET(0x1CA7F380)
#define GCEJKLFGMCF_NPMPAPPNADO_OFFSET UNITYSDK_OFFSET(0x1CA7F830)
#define GCEJKLFGMCF_PEGNIMOJGMD_OFFSET UNITYSDK_OFFSET(0x1CA7F5C0)

	class GCEJKLFGMCF : public ::System::Object
	{
	public:
		// static const ::System::Object PPNKONDDNJE; // 0x0
		// static const ::System::Object KOKCMBCHBNO; // 0x0
		// static const ::System::Object NKOIJGHCJMO; // 0x0
		// static const ::System::Object IEFICDCNFDM; // 0x0
		// static const ::System::Object LEKCBOBBAFJ; // 0x0
		static ::System::Single ACOOCANFNOG(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_ACOOCANFNOG_OFFSET))(a1);
		}

		static ::System::Single MHNCIMNFDAF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_MHNCIMNFDAF_OFFSET))(a1);
		}

		static ::System::Single KNCOAPHOPKG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_KNCOAPHOPKG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MMDPMEAHNBC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_MMDPMEAHNBC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LPENFMNKMEO(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_LPENFMNKMEO_OFFSET))(a1);
		}

		static ::System::Boolean PEGNIMOJGMD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_PEGNIMOJGMD_OFFSET))(a1, a2);
		}

		static ::System::Boolean NPMPAPPNADO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_NPMPAPPNADO_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion IPCNGGJPKLF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_IPCNGGJPKLF_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion IPCNGGJPKLF_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_IPCNGGJPKLF_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LJBDLFEAMBG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCEJKLFGMCF_LJBDLFEAMBG_OFFSET))(a1, a2);
		}

	};
