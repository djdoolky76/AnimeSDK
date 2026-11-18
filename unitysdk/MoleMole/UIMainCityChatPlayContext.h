#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DPFMDEBJEMG;
class NCPFEKEPEKK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define MOLEMOLE_UIMAINCITYCHATPLAYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186BE550)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayContext_TypeDefinitionIndex = 44698;

	class UIMainCityChatPlayContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::DPFMDEBJEMG*>* onUICloseCallback; // 0x28
		::System::Action_1<::DPFMDEBJEMG*>* callback; // 0x30
		::NCPFEKEPEKK* CameraHandler; // 0x38
		::System::String* replaceTextMapTD; // 0x40
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::System::String*>* ParticipatorMap; // 0x48
		::System::Boolean ManualStart; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 id; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
