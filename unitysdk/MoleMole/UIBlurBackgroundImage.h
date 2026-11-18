#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBlurTextureImage.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"

namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A35D750)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_GET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1A35D6F0)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1A35DC00)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_JKFJIMJLEKD_OFFSET UNITYSDK_OFFSET(0x1A35DB10)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_LJLGEOEBIOF_OFFSET UNITYSDK_OFFSET(0x1A35DA80)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A35D930)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A35D8F0)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE_SET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1A35D720)
#define MOLEMOLE_UIBLURBACKGROUNDIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35D970)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurBackgroundImage_TypeDefinitionIndex = 45293;

	class UIBlurBackgroundImage : public ::MoleMole::UIBlurTextureImage
	{
	public:
		::UnityEngine::UI::Image* backgroundImage; // 0x170
		::Sirenix::Serialization::SerializationData serializationData; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::SerializationData get_SerializationData()
		{
			return ((::Sirenix::Serialization::SerializationData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_GET_SERIALIZATIONDATA_OFFSET))(this);
		}

		::System::Void set_SerializationData(::Sirenix::Serialization::SerializationData EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_SET_SERIALIZATIONDATA_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void LJLGEOEBIOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_LJLGEOEBIOF_OFFSET))(this);
		}

		::System::Void JKFJIMJLEKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_JKFJIMJLEKD_OFFSET))(this);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBACKGROUNDIMAGE_GPGLNOBDBGJ_OFFSET))(this);
		}
	};
}
