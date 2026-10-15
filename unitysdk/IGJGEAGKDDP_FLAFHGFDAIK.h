#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class GPLOFONGBGI;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IGJGEAGKDDP_FLAFHGFDAIK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C6A9730)
#define IGJGEAGKDDP_FLAFHGFDAIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A9640)
#define IGJGEAGKDDP_FLAFHGFDAIK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C6A9760)
#define IGJGEAGKDDP_FLAFHGFDAIK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C6A7130)

inline static constexpr unsigned int IGJGEAGKDDP_FLAFHGFDAIK_TypeDefinitionIndex = 37369;

	class IGJGEAGKDDP_FLAFHGFDAIK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IGJGEAGKDDP_FLAFHGFDAIK_CTOR_OFFSET))(this, a1, a2);
		}

		::GPLOFONGBGI* Invoke(::RPG::GameCore::CakeRaceActionBase* a1)
		{
			return ((::GPLOFONGBGI*(*)(::PVOID, ::RPG::GameCore::CakeRaceActionBase*))((::PBYTE)hIl2Cpp + IGJGEAGKDDP_FLAFHGFDAIK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceActionBase* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceActionBase*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IGJGEAGKDDP_FLAFHGFDAIK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::GPLOFONGBGI* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::GPLOFONGBGI*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IGJGEAGKDDP_FLAFHGFDAIK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
