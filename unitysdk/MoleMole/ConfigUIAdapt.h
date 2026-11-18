#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIAdapt_DefaultUIAdaptDataDic; }
namespace MoleMole { class ConfigUIAdapt_DeviceAdaptDataDic; }
namespace MoleMole { class ConfigUIAdapt_DevicePhysicalDataDic; }
namespace MoleMole { class ConfigUIAdapt_DevicePhysicalPadingDataDic; }
namespace MoleMole { class ConfigUIAdapt_DeviceScreenAdaptDataDic; }
namespace MoleMole { class ConfigUIAdapt_UIAdaptDataDic; }
namespace MoleMole { class DeviceAdaptData; }
namespace MoleMole { class DeviceScreenAdaptProfile; }
namespace MoleMole { class GlobalPaddingData; }
namespace MoleMole { class UIAdaptData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_FIND_OFFSET UNITYSDK_OFFSET(0x1B949160)
#define MOLEMOLE_CONFIGUIADAPT_MATCHSCREENPROFILE_1_OFFSET UNITYSDK_OFFSET(0x1B949410)
#define MOLEMOLE_CONFIGUIADAPT_MATCHSCREENPROFILE_OFFSET UNITYSDK_OFFSET(0x1B949360)
#define MOLEMOLE_CONFIGUIADAPT_RESOLVEDEVICEADAPTDATA_OFFSET UNITYSDK_OFFSET(0x1B949210)
#define MOLEMOLE_CONFIGUIADAPT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B949840)
#define MOLEMOLE_CONFIGUIADAPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B949560)
#define MOLEMOLE_CONFIGUIADAPT__FIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B9498A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_TypeDefinitionIndex = 70673;

	class ConfigUIAdapt : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::UIAdaptData** StaticGet_CodeDefaultUIAdaptData()
		{
			return (::MoleMole::UIAdaptData**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAdapt_TypeDefinitionIndex)->GetStaticField(0x434B0);
		}
		static ::System::Boolean* StaticGet_ForceNonAdapt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAdapt_TypeDefinitionIndex)->GetStaticField(0xF7D0);
		}
		::MoleMole::GlobalPaddingData* DefaultGlobalPaddingData; // 0x58
		::System::String* CurrentDeviceModel; // 0x60
		::System::String* CurrentScreenId; // 0x68
		::MoleMole::DeviceAdaptData* CurrentAdaptData; // 0x70
		::MoleMole::ConfigUIAdapt_DeviceAdaptDataDic* DeviceAdaptDataV2; // 0x78
		::MoleMole::ConfigUIAdapt_DeviceScreenAdaptDataDic* DeviceScreenAdaptDataV2; // 0x80
		::MoleMole::ConfigUIAdapt_DevicePhysicalPadingDataDic* DevicePhysicalPadingDataV2; // 0x88
		::System::Boolean DebugMode; // 0x90
		::System::Byte _padding0[0x7];
		::MoleMole::DeviceAdaptData* DebugData; // 0x98
		::MoleMole::ConfigUIAdapt_DevicePhysicalDataDic* DevicePhysicalDataV2; // 0xA0
		::MoleMole::ConfigUIAdapt_DefaultUIAdaptDataDic* DefaultUIAdaptDataV2; // 0xA8
		::MoleMole::ConfigUIAdapt_UIAdaptDataDic* UIAdaptDataV2; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT__CCTOR_OFFSET))();
		}

		::System::Void Find()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_FIND_OFFSET))(this);
		}

		::MoleMole::DeviceAdaptData* ResolveDeviceAdaptData(::System::String* deviceModel, ::System::Int32 pixelWidth, ::System::Int32 pixelHeight, ::MoleMole::DeviceScreenAdaptProfile*& screenProfile)
		{
			return ((::MoleMole::DeviceAdaptData*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::MoleMole::DeviceScreenAdaptProfile*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_RESOLVEDEVICEADAPTDATA_OFFSET))(this, deviceModel, pixelWidth, pixelHeight, screenProfile);
		}

		static ::MoleMole::DeviceScreenAdaptProfile* MatchScreenProfile(::System::String* deviceModel, ::Il2CppArray<::MoleMole::DeviceScreenAdaptProfile*>* profiles, ::System::Int32 pixelWidth, ::System::Int32 pixelHeight)
		{
			return ((::MoleMole::DeviceScreenAdaptProfile*(*)(::System::String*, ::Il2CppArray<::MoleMole::DeviceScreenAdaptProfile*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_MATCHSCREENPROFILE_OFFSET))(deviceModel, profiles, pixelWidth, pixelHeight);
		}

		static ::MoleMole::DeviceScreenAdaptProfile* MatchScreenProfile_1(::Il2CppArray<::MoleMole::DeviceScreenAdaptProfile*>* profiles, ::System::Int32 pixelWidth, ::System::Int32 pixelHeight)
		{
			return ((::MoleMole::DeviceScreenAdaptProfile*(*)(::Il2CppArray<::MoleMole::DeviceScreenAdaptProfile*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_MATCHSCREENPROFILE_1_OFFSET))(profiles, pixelWidth, pixelHeight);
		}

		::System::Void _Find_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT__FIND_B__1_0_OFFSET))(this);
		}
	};
}
