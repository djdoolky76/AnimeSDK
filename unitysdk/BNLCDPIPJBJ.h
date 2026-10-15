#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNLCDPIPJBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDCBF0)
#define BNLCDPIPJBJ_DJIKKEKBCOM_OFFSET UNITYSDK_OFFSET(0xBDDCDA0)
#define BNLCDPIPJBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBDDCC70)
#define BNLCDPIPJBJ_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xBDDCD00)

	class BNLCDPIPJBJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueMiracle*>* KILMJLFDOAA; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*))((::PBYTE)hIl2Cpp + BNLCDPIPJBJ_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLCDPIPJBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLCDPIPJBJ_TRIGGERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>* DJIKKEKBCOM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueMiracle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLCDPIPJBJ_DJIKKEKBCOM_OFFSET))(this);
		}

	};
