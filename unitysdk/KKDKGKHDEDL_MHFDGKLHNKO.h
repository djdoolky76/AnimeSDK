#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KKDKGKHDEDL_MHFDGKLHNKO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB4B7D10)
#define KKDKGKHDEDL_MHFDGKLHNKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B7CA0)
#define KKDKGKHDEDL_MHFDGKLHNKO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB4B7D90)
#define KKDKGKHDEDL_MHFDGKLHNKO_INVOKE_OFFSET UNITYSDK_OFFSET(0xB4B6310)

inline static constexpr unsigned int KKDKGKHDEDL_MHFDGKLHNKO_TypeDefinitionIndex = 59261;

	class KKDKGKHDEDL_MHFDGKLHNKO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_MHFDGKLHNKO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_MHFDGKLHNKO_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::ValuePostProcessConfig* a2, ::RPG::GameCore::TaskContext* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ValuePostProcessConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_MHFDGKLHNKO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KKDKGKHDEDL_MHFDGKLHNKO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
