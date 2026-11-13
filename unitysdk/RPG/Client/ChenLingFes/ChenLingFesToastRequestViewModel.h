#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/Sofa/BaseViewModel.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGFHCJIAOLH;
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC90390)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETFORMATTEDTEXT_OFFSET UNITYSDK_OFFSET(0x1CC92510)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETTARGETENTITYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1CC91130)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1CC92B60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GET_ISVALUEUP_OFFSET UNITYSDK_OFFSET(0x1CC92620)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastRequestViewModel_TypeDefinitionIndex = 84188;

	class ChenLingFesToastRequestViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::String* PrefabPath; // 0x20
		::System::String* IconPath; // 0x28
		::System::String* Text; // 0x30
		::NGFHCJIAOLH* TargetEntity; // 0x38
		::RPG::Client::TextID TextID; // 0x40
		::RPG::GameCore::ChenLingFesToastStyleType ToastStyleType; // 0x50
		::System::Single Duration; // 0x54
		::System::Boolean IsHideRequest; // 0x58
		::System::Boolean IsFollowTargetEntity; // 0x59
		::System::Boolean IsSpecial; // 0x5A
		::System::Byte _padding0[0x1];
		::System::Single DynamicValue; // 0x5C
		::System::Int32 TargetRuntimeID; // 0x60
		::RPG::GameCore::ChenLingFesDialogStyleType DialogStyleType; // 0x64
		::UnityEngine::Vector3 WorldPosition; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::String* GetFormattedText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETFORMATTEDTEXT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETWORLDPOSITION_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetTargetEntityWorldPosition(::NGFHCJIAOLH* a1)
		{
			return ((::UnityEngine::Vector3(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GETTARGETENTITYWORLDPOSITION_OFFSET))(a1);
		}

		::System::Boolean get_IsValueUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTREQUESTVIEWMODEL_GET_ISVALUEUP_OFFSET))(this);
		}

	};
}
