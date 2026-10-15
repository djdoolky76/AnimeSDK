#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FixStrecthDimension.h"
#include "unitysdk/RPG/Client/StretchMode.h"
#include "unitysdk/RPG/Client/TextureInfo.h"
#include "unitysdk/RPG/Client/UVMode.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FIXSTRETCHUV_CTOR_OFFSET UNITYSDK_OFFSET(0xD03F650)
#define RPG_CLIENT_FIXSTRETCHUV_GAJJMAINKOE_OFFSET UNITYSDK_OFFSET(0xD03F5E0)
#define RPG_CLIENT_FIXSTRETCHUV_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD03F600)
#define RPG_CLIENT_FIXSTRETCHUV_LAILPBJOEIN_OFFSET UNITYSDK_OFFSET(0xD03F5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchUV_TypeDefinitionIndex = 70599;

	class FixStretchUV
	{
	public:
		::RPG::Client::FixStrecthDimension Dimension; // 0x30
		::RPG::Client::StretchMode CurrentStrecthMode; // 0x34
		::RPG::Client::UVMode CurrentUVMode; // 0x38
		::RPG::Client::StretchMode CurrentStrecthMode2; // 0x3C
		::RPG::Client::UVMode CurrentUVMode2; // 0x40
		::System::Boolean IsUseWorldScale; // 0x44
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::RPG::Client::TextureInfo>* initialTiling; // 0x48
		::UnityEngine::Vector3 initialScale; // 0x50
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::TextureInfo>* textureTiling; // 0x60
		::System::Boolean isChangeable; // 0x68
		::System::Byte _padding2[0x3];
		::System::Single HiddenThreshold; // 0x6C
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* NeedHiddenGO; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV_CTOR_OFFSET))(this);
		}

		::System::Boolean GAJJMAINKOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV_GAJJMAINKOE_OFFSET))(this);
		}

		::System::Boolean LAILPBJOEIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV_LAILPBJOEIN_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
