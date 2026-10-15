#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBFCMNEMBDI_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE4C10)
#define PBFCMNEMBDI_DJIKKEKBCOM_OFFSET UNITYSDK_OFFSET(0xBFE4DC0)
#define PBFCMNEMBDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBFE4C90)
#define PBFCMNEMBDI_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xBFE4D20)

inline static constexpr unsigned int PBFCMNEMBDI_TypeDefinitionIndex = 67024;

	class PBFCMNEMBDI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* KILMJLFDOAA; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*))((::PBYTE)hIl2Cpp + PBFCMNEMBDI_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFCMNEMBDI_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFCMNEMBDI_TRIGGERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* DJIKKEKBCOM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFCMNEMBDI_DJIKKEKBCOM_OFFSET))(this);
		}

	};
