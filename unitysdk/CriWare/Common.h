#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CriWare/Common_CpuUsage.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_COMMON_CHECKBINARYVERSIONCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x1750B2D0)
#define CRIWARE_COMMON_CRIWARED5A51171_OFFSET UNITYSDK_OFFSET(0x1750B240)
#define CRIWARE_COMMON_CRIWAREUNITY_SETRENDERINGEVENTOFFSETFORMANA_OFFSET UNITYSDK_OFFSET(0x1750B610)
#define CRIWARE_COMMON_CTOR_OFFSET UNITYSDK_OFFSET(0x1750B690)
#define CRIWARE_COMMON_GETATOMCPUUSAGE_OFFSET UNITYSDK_OFFSET(0x1750B5C0)
#define CRIWARE_COMMON_GETATOMMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x1750B480)
#define CRIWARE_COMMON_GETBINARYVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1750B1C0)
#define CRIWARE_COMMON_GETFSMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x1750B3E0)
#define CRIWARE_COMMON_GETMANAMEMORYUSAGE_OFFSET UNITYSDK_OFFSET(0x1750B520)
#define CRIWARE_COMMON_GETREQUIREDBINARYVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1750B2C0)
#define CRIWARE_COMMON_GETSCRIPTVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x1750B180)
#define CRIWARE_COMMON_GET_INSTALLCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1750B070)
#define CRIWARE_COMMON_GET_INSTALLTARGETPATH_OFFSET UNITYSDK_OFFSET(0x1750B060)
#define CRIWARE_COMMON_GET_MANAGEROBJECT_OFFSET UNITYSDK_OFFSET(0x1750B0E0)
#define CRIWARE_COMMON_GET_STREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x1750B030)
#define CRIWARE_COMMON_ISSTREAMINGASSETSPATH_OFFSET UNITYSDK_OFFSET(0x1750B0A0)

namespace CriWare
{
	inline static constexpr unsigned int Common_TypeDefinitionIndex = 41112;

	class Common : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject** StaticGet__managerObject()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("CriWare", "Common")->GetStaticField(0x564A0);
		}

		// static const ::System::String* scriptVersionString; // 0x0
		// static const ::System::Object supportsCriFsInstaller; // 0x0
		// static const ::System::Object supportsCriFsWebInstaller; // 0x0
		// static const ::System::String* pluginName; // 0x0
		// static const ::System::Object pluginCallingConvention; // 0x0
		// static const ::System::String* engineName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CTOR_OFFSET))(this);
		}

		static ::System::String* get_streamingAssetsPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_STREAMINGASSETSPATH_OFFSET))();
		}

		static ::System::String* get_installTargetPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_INSTALLTARGETPATH_OFFSET))();
		}

		static ::System::String* get_installCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_INSTALLCACHEPATH_OFFSET))();
		}

		static ::System::Boolean IsStreamingAssetsPath(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_ISSTREAMINGASSETSPATH_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* get_managerObject()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GET_MANAGEROBJECT_OFFSET))();
		}

		static ::System::String* GetScriptVersionString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETSCRIPTVERSIONSTRING_OFFSET))();
		}

		static ::System::Int32 GetBinaryVersionNumber()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETBINARYVERSIONNUMBER_OFFSET))();
		}

		static ::System::Int32 GetRequiredBinaryVersionNumber()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETREQUIREDBINARYVERSIONNUMBER_OFFSET))();
		}

		static ::System::Boolean CheckBinaryVersionCompatibility()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CHECKBINARYVERSIONCOMPATIBILITY_OFFSET))();
		}

		static ::System::UInt32 GetFsMemoryUsage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETFSMEMORYUSAGE_OFFSET))();
		}

		static ::System::UInt32 GetAtomMemoryUsage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETATOMMEMORYUSAGE_OFFSET))();
		}

		static ::System::UInt32 GetManaMemoryUsage()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETMANAMEMORYUSAGE_OFFSET))();
		}

		static ::CriWare::Common_CpuUsage GetAtomCpuUsage()
		{
			return ((::CriWare::Common_CpuUsage(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_GETATOMCPUUSAGE_OFFSET))();
		}

		static ::System::Int32 CRIWARED5A51171()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CRIWARED5A51171_OFFSET))();
		}

		static ::System::Void criWareUnity_SetRenderingEventOffsetForMana(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_COMMON_CRIWAREUNITY_SETRENDERINGEVENTOFFSETFORMANA_OFFSET))(a1);
		}

	};
}
