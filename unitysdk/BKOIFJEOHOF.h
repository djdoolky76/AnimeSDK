#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIOAHMPNJCH;
class EBGGEOGBOGN;
class OKIBHNGFOLI;
namespace RPG::Client { class UIController; }

#define BKOIFJEOHOF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA5EA90)
#define BKOIFJEOHOF_PFBGMPJELCL_OFFSET UNITYSDK_OFFSET(0xBA5EAA0)

inline static constexpr unsigned int BKOIFJEOHOF_TypeDefinitionIndex = 82103;

	class BKOIFJEOHOF : public ::System::Object
	{
	public:
		::BIOAHMPNJCH* MPFFGNPIDOA; // 0x10
		::EBGGEOGBOGN* LBNAGLIGKIO; // 0x18
		::OKIBHNGFOLI* JDGBDKHIEGG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIFJEOHOF_CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* PFBGMPJELCL()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOIFJEOHOF_PFBGMPJELCL_OFFSET))(this);
		}

	};
