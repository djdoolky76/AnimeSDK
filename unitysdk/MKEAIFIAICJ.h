#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/PDHGEKBAEBE_IFOBEDHEDNH.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FGCOIBFFCHB;
class IOOIHHOJOPI;
class LGINJIKKBJA;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MKEAIFIAICJ_COADAJECGLE_1_OFFSET UNITYSDK_OFFSET(0x1216C440)
#define MKEAIFIAICJ_COADAJECGLE_OFFSET UNITYSDK_OFFSET(0x1216C390)
#define MKEAIFIAICJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1216B960)
#define MKEAIFIAICJ_LCOMPIBAKEI_OFFSET UNITYSDK_OFFSET(0x1216BF90)
#define MKEAIFIAICJ_PHBJNEJECDP_OFFSET UNITYSDK_OFFSET(0x1216C260)
#define MKEAIFIAICJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1216BF40)

inline static constexpr unsigned int MKEAIFIAICJ_TypeDefinitionIndex = 72826;

class MKEAIFIAICJ : public ::PBJOCICFNGK
{
public:
	::UnityEngine::GameObject* HGKPCBMLGNI; // 0x50
	::FGCOIBFFCHB* AOOLNBKIHAG; // 0x58
	::UnityEngine::GameObject* BNELDLEEMEB; // 0x60
	::UnityEngine::GameObject* NEKHAEHDCOF; // 0x68
	::UnityEngine::GameObject* IKBNEBHCLBJ; // 0x70
	::LGINJIKKBJA* PMGINAMIFCA; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEAIFIAICJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MKEAIFIAICJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void LCOMPIBAKEI(::PDHGEKBAEBE_IFOBEDHEDNH JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::PDHGEKBAEBE_IFOBEDHEDNH))((::PBYTE)hIl2Cpp + MKEAIFIAICJ_LCOMPIBAKEI_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void PHBJNEJECDP(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MKEAIFIAICJ_PHBJNEJECDP_OFFSET))(this, GJBHEJGENMI);
	}

	::System::Void COADAJECGLE(::Foundation::AssetPath JAJIDCKNINI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MKEAIFIAICJ_COADAJECGLE_OFFSET))(this, JAJIDCKNINI);
	}

	::System::Void COADAJECGLE_1(::System::String* JAJIDCKNINI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MKEAIFIAICJ_COADAJECGLE_1_OFFSET))(this, JAJIDCKNINI);
	}
};
