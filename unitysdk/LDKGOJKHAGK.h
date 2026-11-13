#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LDKGOJKHAGK_BGCCMKHOJJK_OFFSET UNITYSDK_OFFSET(0x1AC91DF0)
#define LDKGOJKHAGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC921F0)
#define LDKGOJKHAGK_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0x1AC91C30)
#define LDKGOJKHAGK_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1AC91C40)
#define LDKGOJKHAGK_DPMEHODELHL_OFFSET UNITYSDK_OFFSET(0x1AC91E40)
#define LDKGOJKHAGK_IGEMNJGFGHA_OFFSET UNITYSDK_OFFSET(0x1AC91D40)
#define LDKGOJKHAGK_INFEJCFMHOD_OFFSET UNITYSDK_OFFSET(0x1AC91CE0)
#define LDKGOJKHAGK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1AC91E90)
#define LDKGOJKHAGK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1AC91D80)

inline static constexpr unsigned int LDKGOJKHAGK_TypeDefinitionIndex = 58958;

	class LDKGOJKHAGK : public ::System::Object
	{
	public:
		::System::Single DBMDDDIFFLN; // 0x10
		::System::Single KBAHDOGFJMI; // 0x14
		::System::Boolean BANPGPAFIAI; // 0x18
		::System::Boolean HHLHBGODKIF; // 0x19
		::System::Boolean ACAPCHBDIBF; // 0x1A
		::System::Boolean HONDLODHKKN; // 0x1B
		::System::Single JBPOAHBLEHI; // 0x1C
		::UnityEngine::Vector3 LAMALDEMMNP; // 0x20
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_CTOR_OFFSET))(this);
		}

		::System::Boolean DIPFOIAKDDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_DIPFOIAKDDM_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void INFEJCFMHOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_INFEJCFMHOD_OFFSET))(this);
		}

		::System::Void IGEMNJGFGHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_IGEMNJGFGHA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void BGCCMKHOJJK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_BGCCMKHOJJK_OFFSET))(this, a1);
		}

		::System::Void DPMEHODELHL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_DPMEHODELHL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDKGOJKHAGK_JLANKNHFKCN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
