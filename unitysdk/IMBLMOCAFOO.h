#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKPPDDOFADO.h"
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define IMBLMOCAFOO_CTOR_OFFSET UNITYSDK_OFFSET(0x164CE960)
#define IMBLMOCAFOO_GGPEDBPMGHO_OFFSET UNITYSDK_OFFSET(0x164CEBE0)
#define IMBLMOCAFOO_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0x164CED10)

inline static constexpr unsigned int IMBLMOCAFOO_TypeDefinitionIndex = 65142;

	class IMBLMOCAFOO : public ::KKPPDDOFADO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBLMOCAFOO_CTOR_OFFSET))(this);
		}

		::System::Void GGPEDBPMGHO(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + IMBLMOCAFOO_GGPEDBPMGHO_OFFSET))(this, a1, a2);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBLMOCAFOO_LNEPAFGAPJH_OFFSET))(this);
		}

	};
