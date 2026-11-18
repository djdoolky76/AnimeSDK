#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIQRCODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15C4E120)
#define MOLEMOLE_UIQRCODE_CREATEQRCODE_OFFSET UNITYSDK_OFFSET(0x15C4E9B0)
#define MOLEMOLE_UIQRCODE_GENERATEQRIMAGE_OFFSET UNITYSDK_OFFSET(0x15C4E3A0)
#define MOLEMOLE_UIQRCODE_IKOKHNGDLIE_OFFSET UNITYSDK_OFFSET(0x15C4EB10)
#define MOLEMOLE_UIQRCODE_START_OFFSET UNITYSDK_OFFSET(0x15C4E2D0)
#define MOLEMOLE_UIQRCODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C4E310)
#define MOLEMOLE_UIQRCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4ED20)

namespace MoleMole
{
	inline static constexpr unsigned int UIQRCode_TypeDefinitionIndex = 67922;

	class UIQRCode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* url; // 0x18
		::UnityEngine::UI::RawImage* image; // 0x20
		::UnityEngine::Texture2D* encoded; // 0x28
		::System::String* strLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_UPDATE_OFFSET))(this);
		}

		::System::Void GenerateQRImage(::System::String* NGHLLDAJJJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_GENERATEQRIMAGE_OFFSET))(this, NGHLLDAJJJE);
		}

		::System::Void CreateQRCode(::System::String* OLOMNNBBHPJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_CREATEQRCODE_OFFSET))(this, OLOMNNBBHPJ);
		}

		static ::Il2CppArray<::UnityEngine::Color32>* IKOKHNGDLIE(::System::String* BOMJOPOMHDJ, ::System::Int32 JBGLCAFPGHK, ::System::Int32 KKAMDFNMMJH)
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQRCODE_IKOKHNGDLIE_OFFSET))(BOMJOPOMHDJ, JBGLCAFPGHK, KKAMDFNMMJH);
		}
	};
}
