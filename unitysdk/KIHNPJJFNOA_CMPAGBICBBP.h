#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KIHNPJJFNOA_CMPAGBICBBP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB425DB0)
#define KIHNPJJFNOA_CMPAGBICBBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB425CC0)
#define KIHNPJJFNOA_CMPAGBICBBP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB425DF0)
#define KIHNPJJFNOA_CMPAGBICBBP_INVOKE_OFFSET UNITYSDK_OFFSET(0xB421880)

inline static constexpr unsigned int KIHNPJJFNOA_CMPAGBICBBP_TypeDefinitionIndex = 54181;

	class KIHNPJJFNOA_CMPAGBICBBP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_CMPAGBICBBP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint Invoke(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_CMPAGBICBBP_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::TaskContext*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_CMPAGBICBBP_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FixPoint EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KIHNPJJFNOA_CMPAGBICBBP_ENDINVOKE_OFFSET))(this, a1);
		}

	};
