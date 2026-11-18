#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALCONVERSIONTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180A71B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralConversionTipsPopWindowContext_TypeDefinitionIndex = 83663;

	class UIGeneralConversionTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* conversionMaterialDataList; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* conversionResultMaterialDataList; // 0x30
		::System::Action* OnConversion; // 0x38
		::System::Int32 costNum; // 0x40
		::System::Int32 targetId; // 0x44
		::System::Int32 adaptiveUseCount; // 0x48
		::System::Int32 adaptiveItemID; // 0x4C
		::System::Int32 needTargetCount; // 0x50
		::System::Int32 adaptiveItemCount; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONVERSIONTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
