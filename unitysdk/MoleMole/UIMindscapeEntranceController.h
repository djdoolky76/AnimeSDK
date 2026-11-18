#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

class BPHGNMNLLHF;
class FGCOIBFFCHB;
class FILNFMCNCFE;
namespace MoleMole { class GradientColor; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_GETSHEETURL_OFFSET UNITYSDK_OFFSET(0x17C76FC0)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x17C76EA0)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_REFRESHLANGUAGE_OFFSET UNITYSDK_OFFSET(0x17C76F50)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETAVATAR_OFFSET UNITYSDK_OFFSET(0x17C770C0)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETCOLORBYID_OFFSET UNITYSDK_OFFSET(0x17C771E0)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C77620)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C77570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeEntranceController_TypeDefinitionIndex = 51141;

	class UIMindscapeEntranceController : public ::MoleMole::UIMonoController
	{
	public:
		static ::System::Int32* StaticGet__Gamma()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0x10640);
		}
		static ::System::Int32* StaticGet__Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0x10644);
		}
		static ::System::Int32* StaticGet__Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0x10648);
		}
		static ::System::Int32* StaticGet__Hue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0x1064C);
		}
		// static const ::System::String* numPath; // 0x0
		// static const ::System::String* sheetRawPath; // 0x0
		::UnityEngine::UI::Image* NumImage; // 0x80
		::UnityEngine::UI::RawImage* SheetRawImage; // 0x88
		::MoleMole::GradientColor* LightBg; // 0x90
		::FGCOIBFFCHB* _numImage; // 0x98
		::FILNFMCNCFE* _sheetRawImage; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void RefreshLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_REFRESHLANGUAGE_OFFSET))(this);
		}

		::System::Void SetAvatar(::BPHGNMNLLHF* avatarItem, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETAVATAR_OFFSET))(this, avatarItem, withAni);
		}

		::System::Void SetColorByID(::BPHGNMNLLHF* avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETCOLORBYID_OFFSET))(this, avatarID);
		}

		::System::String* GetSheetUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_GETSHEETURL_OFFSET))(this);
		}
	};
}
