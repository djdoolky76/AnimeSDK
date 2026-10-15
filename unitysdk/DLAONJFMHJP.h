#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace RPG::Client { class MapDef; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DLAONJFMHJP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xF890C40)
#define DLAONJFMHJP_CTOR_OFFSET UNITYSDK_OFFSET(0xF890BC0)
#define DLAONJFMHJP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xF890CA0)
#define DLAONJFMHJP_INVOKE_OFFSET UNITYSDK_OFFSET(0xF890C30)

inline static constexpr unsigned int DLAONJFMHJP_TypeDefinitionIndex = 62037;

	class DLAONJFMHJP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DLAONJFMHJP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SubMissionState Invoke(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::PVOID, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + DLAONJFMHJP_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::RPG::Client::MapDef* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MapDef*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DLAONJFMHJP_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::SubMissionState EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DLAONJFMHJP_ENDINVOKE_OFFSET))(this, a1);
		}

	};
