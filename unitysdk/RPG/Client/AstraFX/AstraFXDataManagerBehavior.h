#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client::AstraFX { class AstraFXDataManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_AIIAJGDNBMG_OFFSET UNITYSDK_OFFSET(0x1CAA84E0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1CAA62D0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA87F0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1CAA64F0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1CAA81A0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_GMIBJDPFDOO_OFFSET UNITYSDK_OFFSET(0x1CAA8220)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x1CAA6330)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1CAA61A0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1CAA6270)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x1CAA6490)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x1CAA6430)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_NJNNGGMBCIO_OFFSET UNITYSDK_OFFSET(0x1CAA6550)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x1CAA6390)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_OKDLNCMGPGE_OFFSET UNITYSDK_OFFSET(0x1CAA72D0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1CAA6210)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x1CAA63F0)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataManagerBehavior_TypeDefinitionIndex = 75806;

	class AstraFXDataManagerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>*>* _TexturePool; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::ComputeBuffer*>*>* _BufferPool; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void NJNNGGMBCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_NJNNGGMBCIO_OFFSET))(this);
		}

		::System::Void OKDLNCMGPGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_OKDLNCMGPGE_OFFSET))(this);
		}

		::System::Void GMIBJDPFDOO(::UnityEngine::Component* a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_GMIBJDPFDOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AIIAJGDNBMG(::UnityEngine::Component* a1, ::System::String* a2, ::UnityEngine::ComputeBuffer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_AIIAJGDNBMG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AstraFX::AstraFXDataManager* get__Owner()
		{
			return ((::RPG::Client::AstraFX::AstraFXDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
