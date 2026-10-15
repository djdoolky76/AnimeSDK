#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Object; }

#define IDHNPGBOIKD_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED4240)
#define IDHNPGBOIKD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15ED41F0)

inline static constexpr unsigned int IDHNPGBOIKD_TypeDefinitionIndex = 82301;

	class IDHNPGBOIKD : public ::System::Object
	{
	public:
		::UnityEngine::Object* BKDOPGFCEKH; // 0x10
		::System::String* GKHIHPGCLIK; // 0x18
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
