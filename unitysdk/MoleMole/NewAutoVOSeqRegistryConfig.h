#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_NEWAUTOVOSEQREGISTRYCONFIG_LOGBUILDERROR_OFFSET UNITYSDK_OFFSET(0x1810CC40)
#define MOLEMOLE_NEWAUTOVOSEQREGISTRYCONFIG_REBUILDVOSEQREGISTRYNAMEHASHES_OFFSET UNITYSDK_OFFSET(0x1810C570)
#define MOLEMOLE_NEWAUTOVOSEQREGISTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1810CC80)

namespace MoleMole
{
	inline static constexpr unsigned int NewAutoVOSeqRegistryConfig_TypeDefinitionIndex = 64472;

	class NewAutoVOSeqRegistryConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::Foundation::AssetPath>* voSeqRegistryPathes; // 0x58
		::Il2CppArray<::System::UInt64>* voSeqRegistryNameHashes; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOVOSEQREGISTRYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean RebuildVOSeqRegistryNameHashes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOVOSEQREGISTRYCONFIG_REBUILDVOSEQREGISTRYNAMEHASHES_OFFSET))(this);
		}

		static ::System::Void LogBuildError(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWAUTOVOSEQREGISTRYCONFIG_LOGBUILDERROR_OFFSET))(message);
		}
	};
}
