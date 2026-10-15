#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GCEJKLFGMCF_ACOOCANFNOG_OFFSET UNITYSDK_OFFSET(0x1CA50BE0)
#define GCEJKLFGMCF_IPCNGGJPKLF_1_OFFSET UNITYSDK_OFFSET(0x1CA518F0)
#define GCEJKLFGMCF_IPCNGGJPKLF_OFFSET UNITYSDK_OFFSET(0x1CA51660)
#define GCEJKLFGMCF_KNCOAPHOPKG_OFFSET UNITYSDK_OFFSET(0x1CA50D50)
#define GCEJKLFGMCF_LJBDLFEAMBG_OFFSET UNITYSDK_OFFSET(0x1CA51EC0)
#define GCEJKLFGMCF_LPENFMNKMEO_OFFSET UNITYSDK_OFFSET(0x1CA510E0)
#define GCEJKLFGMCF_MHNCIMNFDAF_OFFSET UNITYSDK_OFFSET(0x1CA50C70)
#define GCEJKLFGMCF_MMDPMEAHNBC_OFFSET UNITYSDK_OFFSET(0x1CA50F30)
#define GCEJKLFGMCF_NPMPAPPNADO_OFFSET UNITYSDK_OFFSET(0x1CA513E0)
#define GCEJKLFGMCF_PEGNIMOJGMD_OFFSET UNITYSDK_OFFSET(0x1CA51170)

inline static constexpr unsigned int GCEJKLFGMCF_TypeDefinitionIndex = 42069;

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
