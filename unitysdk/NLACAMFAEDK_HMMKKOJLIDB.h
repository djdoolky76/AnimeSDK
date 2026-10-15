#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class EILOGENDCCG;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NLACAMFAEDK_HMMKKOJLIDB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBC597E0)
#define NLACAMFAEDK_HMMKKOJLIDB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC596F0)
#define NLACAMFAEDK_HMMKKOJLIDB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBC59810)
#define NLACAMFAEDK_HMMKKOJLIDB_INVOKE_OFFSET UNITYSDK_OFFSET(0xBC51880)

inline static constexpr unsigned int NLACAMFAEDK_HMMKKOJLIDB_TypeDefinitionIndex = 55947;

	class NLACAMFAEDK_HMMKKOJLIDB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NLACAMFAEDK_HMMKKOJLIDB_CTOR_OFFSET))(this, a1, a2);
		}

		::EILOGENDCCG* Invoke(::RPG::GameCore::TargetEvaluator* a1)
		{
			return ((::EILOGENDCCG*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + NLACAMFAEDK_HMMKKOJLIDB_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::TargetEvaluator* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NLACAMFAEDK_HMMKKOJLIDB_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::EILOGENDCCG* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::EILOGENDCCG*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NLACAMFAEDK_HMMKKOJLIDB_ENDINVOKE_OFFSET))(this, a1);
		}

	};
