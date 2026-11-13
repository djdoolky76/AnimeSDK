#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Object; }

#define IDHNPGBOIKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1778BE10)
#define IDHNPGBOIKD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1778BDC0)

inline static constexpr unsigned int IDHNPGBOIKD_TypeDefinitionIndex = 85173;

	class IDHNPGBOIKD : public ::System::Object
	{
	public:
		::System::String* GKHIHPGCLIK; // 0x10
		::UnityEngine::Object* BKDOPGFCEKH; // 0x18
		::System::Int64 GDBJDAOOCOH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHNPGBOIKD_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHNPGBOIKD_KHGIKBFDLFB_OFFSET))(this);
		}

	};
