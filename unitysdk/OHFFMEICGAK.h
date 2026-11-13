#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OHFFMEICGAK_ACOOCANFNOG_OFFSET UNITYSDK_OFFSET(0x18E0FDF0)
#define OHFFMEICGAK_BCBOMEKKPNC_1_OFFSET UNITYSDK_OFFSET(0x18E0E860)
#define OHFFMEICGAK_BCBOMEKKPNC_OFFSET UNITYSDK_OFFSET(0x18E0DF20)
#define OHFFMEICGAK_DIIDLAKHDIH_OFFSET UNITYSDK_OFFSET(0x18E0FFE0)
#define OHFFMEICGAK_DPLGHOCCJDO_OFFSET UNITYSDK_OFFSET(0x18E0F340)
#define OHFFMEICGAK_GGJKBBOGMJH_1_OFFSET UNITYSDK_OFFSET(0x18E105A0)
#define OHFFMEICGAK_GGJKBBOGMJH_OFFSET UNITYSDK_OFFSET(0x18E10360)
#define OHFFMEICGAK_GKCDFJNNMNK_1_OFFSET UNITYSDK_OFFSET(0x18E0E570)
#define OHFFMEICGAK_GKCDFJNNMNK_OFFSET UNITYSDK_OFFSET(0x18E0DD70)
#define OHFFMEICGAK_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0x18E0F160)
#define OHFFMEICGAK_IGKIIAJHELE_OFFSET UNITYSDK_OFFSET(0x18E0FB70)
#define OHFFMEICGAK_IPNAFJDEEJE_1_OFFSET UNITYSDK_OFFSET(0x18E10A00)
#define OHFFMEICGAK_IPNAFJDEEJE_OFFSET UNITYSDK_OFFSET(0x18E10630)
#define OHFFMEICGAK_JNJOIPKILGP_OFFSET UNITYSDK_OFFSET(0x18E0F500)
#define OHFFMEICGAK_JNOBFOBKDBM_OFFSET UNITYSDK_OFFSET(0x18E0F9E0)
#define OHFFMEICGAK_KFMBAENKAAP_OFFSET UNITYSDK_OFFSET(0x18E0F420)
#define OHFFMEICGAK_KOBLLLENLLD_1_OFFSET UNITYSDK_OFFSET(0x18E0EB10)
#define OHFFMEICGAK_KOBLLLENLLD_OFFSET UNITYSDK_OFFSET(0x18E0E0B0)
#define OHFFMEICGAK_MEOIODMFOBK_OFFSET UNITYSDK_OFFSET(0x18E0F250)
#define OHFFMEICGAK_MFIKKGLCFII_OFFSET UNITYSDK_OFFSET(0x18E0F860)
#define OHFFMEICGAK_OAEDEIOMIIE_OFFSET UNITYSDK_OFFSET(0x18E0F6E0)

inline static constexpr unsigned int OHFFMEICGAK_TypeDefinitionIndex = 76422;

	class OHFFMEICGAK : public ::System::Object
	{
	public:
		static ::System::Single GKCDFJNNMNK(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OHFFMEICGAK_GKCDFJNNMNK_OFFSET))(a1, a2);
		}

		static ::System::Single BCBOMEKKPNC(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OHFFMEICGAK_BCBOMEKKPNC_OFFSET))(a1, a2);
		}

		static ::System::Single KOBLLLENLLD(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OHFFMEICGAK_KOBLLLENLLD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GKCDFJNNMNK_1(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OHFFMEICGAK_GKCDFJNNMNK_1_OFFSET))(a1, a2);
		}

		static ::System::Single BCBOMEKKPNC_1(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OHFFMEICGAK_BCBOMEKKPNC_1_OFFSET))(a1, a2);
		}

		static ::System::Single KOBLLLENLLD_1(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Single(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OHFFMEICGAK_KOBLLLENLLD_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion HAIHHFOPBLN(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + OHFFMEICGAK_HAIHHFOPBLN_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion MEOIODMFOBK(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + OHFFMEICGAK_MEOIODMFOBK_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion DPLGHOCCJDO(::UnityEngine::Quaternion a1, ::System::Single a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + OHFFMEICGAK_DPLGHOCCJDO_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion KFMBAENKAAP(::UnityEngine::Quaternion a1, ::System::Single a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + OHFFMEICGAK_KFMBAENKAAP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion JNJOIPKILGP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OHFFMEICGAK_JNJOIPKILGP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion OAEDEIOMIIE(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OHFFMEICGAK_OAEDEIOMIIE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion MFIKKGLCFII(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OHFFMEICGAK_MFIKKGLCFII_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 JNOBFOBKDBM(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OHFFMEICGAK_JNOBFOBKDBM_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion IGKIIAJHELE(::UnityEngine::Quaternion a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OHFFMEICGAK_IGKIIAJHELE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ACOOCANFNOG(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OHFFMEICGAK_ACOOCANFNOG_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion DIIDLAKHDIH(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OHFFMEICGAK_DIIDLAKHDIH_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 GGJKBBOGMJH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OHFFMEICGAK_GGJKBBOGMJH_OFFSET))(a1);
		}

		static ::System::Single GGJKBBOGMJH_1(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + OHFFMEICGAK_GGJKBBOGMJH_1_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion IPNAFJDEEJE(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OHFFMEICGAK_IPNAFJDEEJE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion IPNAFJDEEJE_1(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OHFFMEICGAK_IPNAFJDEEJE_1_OFFSET))(a1);
		}

	};
