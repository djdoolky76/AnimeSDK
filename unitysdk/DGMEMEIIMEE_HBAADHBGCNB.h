#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PointGeneratorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGMEMEIIMEE_HBAADHBGCNB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE849D30)
#define DGMEMEIIMEE_HBAADHBGCNB_CTOR_OFFSET UNITYSDK_OFFSET(0xE849C20)
#define DGMEMEIIMEE_HBAADHBGCNB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE849D70)
#define DGMEMEIIMEE_HBAADHBGCNB_INVOKE_OFFSET UNITYSDK_OFFSET(0xE849D10)

inline static constexpr unsigned int DGMEMEIIMEE_HBAADHBGCNB_TypeDefinitionIndex = 60114;

	class DGMEMEIIMEE_HBAADHBGCNB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DGMEMEIIMEE_HBAADHBGCNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DGMEMEIIMEE_HBAADHBGCNB_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PointGeneratorConfig* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PointGeneratorConfig*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DGMEMEIIMEE_HBAADHBGCNB_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DGMEMEIIMEE_HBAADHBGCNB_ENDINVOKE_OFFSET))(this, a1);
		}

	};
