#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LDKGOJKHAGK_BGCCMKHOJJK_OFFSET UNITYSDK_OFFSET(0xB62FB80)
#define LDKGOJKHAGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB62FF80)
#define LDKGOJKHAGK_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0xB62F9C0)
#define LDKGOJKHAGK_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xB62F9D0)
#define LDKGOJKHAGK_DPMEHODELHL_OFFSET UNITYSDK_OFFSET(0xB62FBD0)
#define LDKGOJKHAGK_IGEMNJGFGHA_OFFSET UNITYSDK_OFFSET(0xB62FAD0)
#define LDKGOJKHAGK_INFEJCFMHOD_OFFSET UNITYSDK_OFFSET(0xB62FA70)
#define LDKGOJKHAGK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB62FC20)
#define LDKGOJKHAGK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB62FB10)

inline static constexpr unsigned int LDKGOJKHAGK_TypeDefinitionIndex = 57725;

	class LDKGOJKHAGK : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x10
		::System::Single DBMDDDIFFLN; // 0x1C
		::UnityEngine::Vector3 LAMALDEMMNP; // 0x20
		::System::Single JBPOAHBLEHI; // 0x2C
		::System::Boolean BANPGPAFIAI; // 0x30
		::System::Boolean ACAPCHBDIBF; // 0x31
		::System::Boolean HHLHBGODKIF; // 0x32
		::System::Boolean HONDLODHKKN; // 0x33
		::System::Single KBAHDOGFJMI; // 0x34
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
