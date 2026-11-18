#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_BADGESUBID_OFFSET UNITYSDK_OFFSET(0x185F7540)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_BADGETYPE_OFFSET UNITYSDK_OFFSET(0x185F7530)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x185F7500)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x185F7610)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController_PartnerCampTemplateData_TypeDefinitionIndex = 42272;

	class UIWorkBenchTrustDegreePageController_PartnerCampTemplateData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_TEXT_OFFSET))(this);
		}

		::System::Nullable_1<::Share::ENotificationBadgeType> get_badgeType()
		{
			return ((::System::Nullable_1<::Share::ENotificationBadgeType>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_BADGETYPE_OFFSET))(this);
		}

		::System::Nullable_1<::NodeGraph::VariantUnion> get_badgeSubId()
		{
			return ((::System::Nullable_1<::NodeGraph::VariantUnion>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER_PARTNERCAMPTEMPLATEDATA_GET_BADGESUBID_OFFSET))(this);
		}
	};
}
