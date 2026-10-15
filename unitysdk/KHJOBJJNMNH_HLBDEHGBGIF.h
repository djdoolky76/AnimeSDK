#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class EJFAHBINDIN;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KHJOBJJNMNH_HLBDEHGBGIF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB40BA30)
#define KHJOBJJNMNH_HLBDEHGBGIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB40B940)
#define KHJOBJJNMNH_HLBDEHGBGIF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB40BA70)
#define KHJOBJJNMNH_HLBDEHGBGIF_INVOKE_OFFSET UNITYSDK_OFFSET(0xB40B420)

	class KHJOBJJNMNH_HLBDEHGBGIF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KHJOBJJNMNH_HLBDEHGBGIF_CTOR_OFFSET))(this, a1, a2);
		}

		::EJFAHBINDIN* Invoke(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::EJFAHBINDIN*(*)(::PVOID, ::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KHJOBJJNMNH_HLBDEHGBGIF_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KHJOBJJNMNH_HLBDEHGBGIF_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::EJFAHBINDIN* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::EJFAHBINDIN*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KHJOBJJNMNH_HLBDEHGBGIF_ENDINVOKE_OFFSET))(this, a1);
		}

	};
