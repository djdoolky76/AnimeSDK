#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMIIOKPLDE.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IBENDELLLAO;
class OJDPGBEDCNF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALDROPDOWNOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F09BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropdownOptionContext_TypeDefinitionIndex = 74436;

	class UIGeneralDropdownOptionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IBENDELLLAO* node; // 0x28
		::OJDPGBEDCNF* loginParam; // 0x30
		::DPKOIBEFPAO otherInfo; // 0x38
		::Foundation::AssetPath redImagePath; // 0x50
		::System::String* descKey; // 0x60
		::System::Action_1<::System::Int32>* onLockedClick; // 0x68
		::Foundation::AssetPath iconPath; // 0x70
		::System::String* desc; // 0x80
		::BIMIIOKPLDE iconType; // 0x88
		::MoleMole::LanguageType languageType; // 0x8C
		::System::Boolean locked; // 0x90
		::System::Boolean isRed; // 0x91
		::System::Boolean isDesCenter; // 0x92
		::System::Boolean isNew; // 0x93
		::System::Int32 index; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
