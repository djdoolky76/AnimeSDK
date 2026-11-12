#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABEIDKHKGPN;

#define EOADBGMPJPH_CTOR_OFFSET UNITYSDK_OFFSET(0x164C9730)
#define EOADBGMPJPH_EELIONFPJHL_OFFSET UNITYSDK_OFFSET(0x164C9480)
#define EOADBGMPJPH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x164C9250)
#define EOADBGMPJPH_IJCHJDPKANM_OFFSET UNITYSDK_OFFSET(0x164C94D0)
#define EOADBGMPJPH_JKOFBAECIHD_OFFSET UNITYSDK_OFFSET(0x164C9440)
#define EOADBGMPJPH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x164C90E0)
#define EOADBGMPJPH_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x164C9400)
#define EOADBGMPJPH_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x164C93C0)

inline static constexpr unsigned int EOADBGMPJPH_TypeDefinitionIndex = 80669;

	class EOADBGMPJPH : public ::System::Object
	{
	public:
		::ABEIDKHKGPN* JJBOPOPCOCH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOADBGMPJPH_CTOR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOADBGMPJPH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOADBGMPJPH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOADBGMPJPH_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOADBGMPJPH_MFCDKJIHDEH_OFFSET))(this);
		}

		::ABEIDKHKGPN* JKOFBAECIHD()
		{
			return ((::ABEIDKHKGPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOADBGMPJPH_JKOFBAECIHD_OFFSET))(this);
		}

		::System::Void EELIONFPJHL(::ABEIDKHKGPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABEIDKHKGPN*))((::PBYTE)hIl2Cpp + EOADBGMPJPH_EELIONFPJHL_OFFSET))(this, a1);
		}

		::System::Void IJCHJDPKANM(::ABEIDKHKGPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABEIDKHKGPN*))((::PBYTE)hIl2Cpp + EOADBGMPJPH_IJCHJDPKANM_OFFSET))(this, a1);
		}

	};
