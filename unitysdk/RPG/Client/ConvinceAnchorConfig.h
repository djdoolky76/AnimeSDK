#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ConvinceAnchorConfig_AnchorData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONVINCEANCHORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC69A0)
#define RPG_CLIENT_CONVINCEANCHORCONFIG_JBIPJPELNOD_OFFSET UNITYSDK_OFFSET(0xCBC67B0)
#define RPG_CLIENT_CONVINCEANCHORCONFIG_NNKDIEAIFOE_OFFSET UNITYSDK_OFFSET(0xCBC6810)
#define RPG_CLIENT_CONVINCEANCHORCONFIG_OIMBPMNDIPI_OFFSET UNITYSDK_OFFSET(0xCBC6940)

namespace RPG::Client
{
	class ConvinceAnchorConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* LeftAnchors; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* RightAnchors; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::ConvinceAnchorConfig_AnchorData* JBIPJPELNOD(::System::String* a1)
		{
			return ((::RPG::Client::ConvinceAnchorConfig_AnchorData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG_JBIPJPELNOD_OFFSET))(this, a1);
		}

		::RPG::Client::ConvinceAnchorConfig_AnchorData* OIMBPMNDIPI(::System::String* a1)
		{
			return ((::RPG::Client::ConvinceAnchorConfig_AnchorData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG_OIMBPMNDIPI_OFFSET))(this, a1);
		}

		::RPG::Client::ConvinceAnchorConfig_AnchorData* NNKDIEAIFOE(::System::String* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::RPG::Client::ConvinceAnchorConfig_AnchorData*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCEANCHORCONFIG_NNKDIEAIFOE_OFFSET))(this, a1, a2);
		}

	};
}
