#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/MulticastDelegate.h"
class APKJLMDEMLI;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JAHEBNMBGPI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C6C2C60)
#define JAHEBNMBGPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C2BE0)
#define JAHEBNMBGPI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C6C2CE0)
#define JAHEBNMBGPI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C6C2C50)

inline static constexpr unsigned int JAHEBNMBGPI_TypeDefinitionIndex = 37295;

	class JAHEBNMBGPI : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JAHEBNMBGPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::CakeRaceCoreEventType a1, ::APKJLMDEMLI* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::APKJLMDEMLI*))((::PBYTE)hIl2Cpp + JAHEBNMBGPI_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceCoreEventType a1, ::APKJLMDEMLI* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::APKJLMDEMLI*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JAHEBNMBGPI_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JAHEBNMBGPI_ENDINVOKE_OFFSET))(this, a1);
		}

	};
