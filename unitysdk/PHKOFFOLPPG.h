#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Threading/CancellationToken.h"
class DEIPGFGBEMG;
class OEIKFPLBOMH;
class PHKOFFOLPPG_HFFPHANAHLP;
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHKOFFOLPPG_ADD_ACTIVESTAGESTEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x1FF3CF30)
#define PHKOFFOLPPG_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x1FF3D310)
#define PHKOFFOLPPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF3CC30)
#define PHKOFFOLPPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF40570)
#define PHKOFFOLPPG_EFPFNPFAINF_OFFSET UNITYSDK_OFFSET(0x1FF401B0)
#define PHKOFFOLPPG_EGNMELNENAC_OFFSET UNITYSDK_OFFSET(0x1FF40220)
#define PHKOFFOLPPG_GBMLHDDJMJM_OFFSET UNITYSDK_OFFSET(0x1FF40620)
#define PHKOFFOLPPG_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1FF40180)
#define PHKOFFOLPPG_GMBHCNJIBPO_1_OFFSET UNITYSDK_OFFSET(0x1FF3FB60)
#define PHKOFFOLPPG_GMBHCNJIBPO_OFFSET UNITYSDK_OFFSET(0x1FF3F9D0)
#define PHKOFFOLPPG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1FF3F6F0)
#define PHKOFFOLPPG_JLIBOJHDJEM_OFFSET UNITYSDK_OFFSET(0x1FF3CF90)
#define PHKOFFOLPPG_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0x1FF402A0)
#define PHKOFFOLPPG_REMOVE_ACTIVESTAGESTEPCOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x1FF3CED0)
#define PHKOFFOLPPG_SET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1FF40190)

inline static constexpr unsigned int PHKOFFOLPPG_TypeDefinitionIndex = 45243;

	class PHKOFFOLPPG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* JMJHABHDHKE; // 0x10
		::System::Action_1<::System::Int32>* ActiveStageStepCountChanged; // 0x18
		::OEIKFPLBOMH* _Logger_k__BackingField; // 0x20
		::System::Boolean GFAMGLFOMGI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_CTOR_OFFSET))(this);
		}

		::OEIKFPLBOMH* get_Logger()
		{
			return ((::OEIKFPLBOMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_GET_LOGGER_OFFSET))(this);
		}

		::System::Void set_Logger(::OEIKFPLBOMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIKFPLBOMH*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_SET_LOGGER_OFFSET))(this, a1);
		}

		::System::Int32 JLIBOJHDJEM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_JLIBOJHDJEM_OFFSET))(this);
		}

		::System::Void add_ActiveStageStepCountChanged(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_ADD_ACTIVESTAGESTEPCOUNTCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_ActiveStageStepCountChanged(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_REMOVE_ACTIVESTAGESTEPCOUNTCHANGED_OFFSET))(this, a1);
		}

		::System::IDisposable* BKJGMFOKKKN(::System::Object* a1, ::DEIPGFGBEMG* a2)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Object*, ::DEIPGFGBEMG*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_BKJGMFOKKKN_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::UniTask KHFHNDEBGDH(::System::Object* a1, ::DEIPGFGBEMG* a2, ::System::Threading::CancellationToken a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Object*, ::DEIPGFGBEMG*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_KHFHNDEBGDH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GMBHCNJIBPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_GMBHCNJIBPO_OFFSET))(this, a1);
		}

		::System::Void GMBHCNJIBPO_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_GMBHCNJIBPO_1_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_DISPOSE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid EGNMELNENAC(::PHKOFFOLPPG_HFFPHANAHLP* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::PHKOFFOLPPG_HFFPHANAHLP*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_EGNMELNENAC_OFFSET))(this, a1);
		}

		::System::Void GBMLHDDJMJM(::PHKOFFOLPPG_HFFPHANAHLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHKOFFOLPPG_HFFPHANAHLP*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_GBMLHDDJMJM_OFFSET))(this, a1);
		}

		::System::Void EFPFNPFAINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_EFPFNPFAINF_OFFSET))(this);
		}

	};
