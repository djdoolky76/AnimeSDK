#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMPGEAFHHDC;
namespace RPG::GameCore { class EventManager; }

#define CMPGEAFHHDC_AONEONHEHNA_OFFSET UNITYSDK_OFFSET(0xDA45D70)
#define CMPGEAFHHDC_CLEAR_OFFSET UNITYSDK_OFFSET(0xDA45C70)
#define CMPGEAFHHDC_CMJHMIHNMPL_OFFSET UNITYSDK_OFFSET(0xDA45E00)
#define CMPGEAFHHDC_CTOR_OFFSET UNITYSDK_OFFSET(0xDA45E50)
#define CMPGEAFHHDC_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0xDA45CC0)

inline static constexpr unsigned int CMPGEAFHHDC_TypeDefinitionIndex = 56688;

	class CMPGEAFHHDC : public ::System::Object
	{
	public:
		::RPG::GameCore::EventManager* BIOMICKJCKG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPGEAFHHDC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPGEAFHHDC_CLEAR_OFFSET))(this);
		}

		::CMPGEAFHHDC* EPHFABNKFGJ(::System::Boolean a1)
		{
			return ((::CMPGEAFHHDC*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMPGEAFHHDC_EPHFABNKFGJ_OFFSET))(this, a1);
		}

		::System::Void AONEONHEHNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPGEAFHHDC_AONEONHEHNA_OFFSET))(this);
		}

		::System::Void CMJHMIHNMPL(::RPG::GameCore::EventManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*))((::PBYTE)hIl2Cpp + CMPGEAFHHDC_CMJHMIHNMPL_OFFSET))(this, a1);
		}

	};
