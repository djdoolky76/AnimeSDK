#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace System { class Action; }

#define OEOOIGIJIMG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE38DA0)
#define OEOOIGIJIMG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE39080)
#define OEOOIGIJIMG_DOAOGHIIPAC_OFFSET UNITYSDK_OFFSET(0xBE38FA0)

inline static constexpr unsigned int OEOOIGIJIMG_TypeDefinitionIndex = 49828;

	class OEOOIGIJIMG : public ::System::Object
	{
	public:
		::RPG::UINavigation::UINavigationButton* AAFGIHCCPOP; // 0x10
		::R3::ReactiveProperty_1<::System::Boolean>* AGFAPPGGKMA; // 0x18
		::System::Action* MBOEDFCNCJF; // 0x20
		::System::Void _ctor(::RPG::UINavigation::UINavigationButton* a1, ::R3::ReactiveProperty_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::R3::ReactiveProperty_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + OEOOIGIJIMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DOAOGHIIPAC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEOOIGIJIMG_DOAOGHIIPAC_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOOIGIJIMG_DISPOSE_OFFSET))(this);
		}

	};
