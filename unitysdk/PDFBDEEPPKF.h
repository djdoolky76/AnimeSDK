#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }

#define PDFBDEEPPKF_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x20938CA0)
#define PDFBDEEPPKF_CONVERT_OFFSET UNITYSDK_OFFSET(0x20938BF0)
#define PDFBDEEPPKF_CTOR_OFFSET UNITYSDK_OFFSET(0x20938880)

inline static constexpr unsigned int PDFBDEEPPKF_TypeDefinitionIndex = 44969;

	class PDFBDEEPPKF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFBDEEPPKF_CTOR_OFFSET))(this);
		}

		::System::Decimal Convert(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + PDFBDEEPPKF_CONVERT_OFFSET))(this, a1);
		}

		::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + PDFBDEEPPKF_CONVERTBOXED_OFFSET))(this, a1);
		}

	};
