#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDOPEFMMILF;
class JPBMIDPNFMP;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPDGBMGOPHM_AALCCPJCBME_OFFSET UNITYSDK_OFFSET(0x155D1A50)
#define EPDGBMGOPHM_CTOR_OFFSET UNITYSDK_OFFSET(0x155D1BC0)
#define EPDGBMGOPHM_DAEPMLPPBND_OFFSET UNITYSDK_OFFSET(0x155D1470)
#define EPDGBMGOPHM_FMMLDJKGGIL_OFFSET UNITYSDK_OFFSET(0x155D1820)
#define EPDGBMGOPHM_IAEAJCHBEHE_OFFSET UNITYSDK_OFFSET(0x155D15E0)
#define EPDGBMGOPHM_OMIIBKAFCPJ_OFFSET UNITYSDK_OFFSET(0x155D1240)
#define EPDGBMGOPHM_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x155D1150)
#define EPDGBMGOPHM_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x155D11A0)

inline static constexpr unsigned int EPDGBMGOPHM_TypeDefinitionIndex = 57822;

	class EPDGBMGOPHM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::JPBMIDPNFMP*>* BIFMMBFPHIH; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDGBMGOPHM_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + EPDGBMGOPHM_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDGBMGOPHM_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void OMIIBKAFCPJ(::System::String* a1, ::JDOPEFMMILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::JDOPEFMMILF*))((::PBYTE)hIl2Cpp + EPDGBMGOPHM_OMIIBKAFCPJ_OFFSET))(this, a1, a2);
		}

		::System::Void DAEPMLPPBND(::System::String* a1, ::JDOPEFMMILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::JDOPEFMMILF*))((::PBYTE)hIl2Cpp + EPDGBMGOPHM_DAEPMLPPBND_OFFSET))(this, a1, a2);
		}

		::System::Void IAEAJCHBEHE(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EPDGBMGOPHM_IAEAJCHBEHE_OFFSET))(this, a1, a2);
		}

		::JPBMIDPNFMP* FMMLDJKGGIL(::System::String* a1, ::System::Boolean a2)
		{
			return ((::JPBMIDPNFMP*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EPDGBMGOPHM_FMMLDJKGGIL_OFFSET))(this, a1, a2);
		}

		::System::Boolean AALCCPJCBME(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPDGBMGOPHM_AALCCPJCBME_OFFSET))(this, a1);
		}

	};
