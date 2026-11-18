#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OGDODCNMJOI;
class PGONJHLJIMM;
namespace MoleMole { class UIShoppingMallCasperPageController; }
namespace System { class Action; }

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_GET_SHOPTABGROUPMAP_OFFSET UNITYSDK_OFFSET(0x19C846E0)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_GET_SHOPTABMAP_OFFSET UNITYSDK_OFFSET(0x19C84620)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENARCADESHOP_OFFSET UNITYSDK_OFFSET(0x19C84A50)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENMINDSCAPESHOP_OFFSET UNITYSDK_OFFSET(0x19C84E50)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENSOCIALSHOP_OFFSET UNITYSDK_OFFSET(0x19C84C50)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENZEROSHOP_OFFSET UNITYSDK_OFFSET(0x19C847A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController_Utility_TypeDefinitionIndex = 60506;

	class UIShoppingMallCasperPageController_Utility : public ::System::Object
	{
	public:
		static ::PGONJHLJIMM* get_ShopTabMap()
		{
			return ((::PGONJHLJIMM*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_GET_SHOPTABMAP_OFFSET))();
		}

		static ::OGDODCNMJOI* get_ShopTabGroupMap()
		{
			return ((::OGDODCNMJOI*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_GET_SHOPTABGROUPMAP_OFFSET))();
		}

		static ::MoleMole::UIShoppingMallCasperPageController* OpenZeroShop(::System::Int32 shopTabID, ::System::Boolean markJump)
		{
			return ((::MoleMole::UIShoppingMallCasperPageController*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENZEROSHOP_OFFSET))(shopTabID, markJump);
		}

		static ::MoleMole::UIShoppingMallCasperPageController* OpenArcadeShop(::System::Action* storeCloseAction)
		{
			return ((::MoleMole::UIShoppingMallCasperPageController*(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENARCADESHOP_OFFSET))(storeCloseAction);
		}

		static ::MoleMole::UIShoppingMallCasperPageController* OpenSocialShop(::System::Int32 shopTabID)
		{
			return ((::MoleMole::UIShoppingMallCasperPageController*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENSOCIALSHOP_OFFSET))(shopTabID);
		}

		static ::MoleMole::UIShoppingMallCasperPageController* OpenMindScapeShop()
		{
			return ((::MoleMole::UIShoppingMallCasperPageController*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENMINDSCAPESHOP_OFFSET))();
		}
	};
}
