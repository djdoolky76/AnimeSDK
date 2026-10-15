#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKNHDOLPFEK_CTOR_OFFSET UNITYSDK_OFFSET(0xD763BD0)
#define CKNHDOLPFEK_DJIKKEKBCOM_OFFSET UNITYSDK_OFFSET(0xD763D80)
#define CKNHDOLPFEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0xD763C50)
#define CKNHDOLPFEK_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xD763CE0)

inline static constexpr unsigned int CKNHDOLPFEK_TypeDefinitionIndex = 67021;

	class CKNHDOLPFEK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* KILMJLFDOAA; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*))((::PBYTE)hIl2Cpp + CKNHDOLPFEK_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNHDOLPFEK_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNHDOLPFEK_TRIGGERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* DJIKKEKBCOM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKNHDOLPFEK_DJIKKEKBCOM_OFFSET))(this);
		}

	};
