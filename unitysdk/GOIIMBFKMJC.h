#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KANHBPAGDJD;
class POEGKFEADIE;
namespace RPG::GameCore { template <typename T> class IFrameSyncOperationSource_1; }

#define GOIIMBFKMJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B33E80)
#define GOIIMBFKMJC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15B33DA0)
#define GOIIMBFKMJC_GET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x15B33D60)
#define GOIIMBFKMJC_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x15B33D80)
#define GOIIMBFKMJC_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x15B33E30)
#define GOIIMBFKMJC_SET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x15B33D70)
#define GOIIMBFKMJC_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x15B33D90)

inline static constexpr unsigned int GOIIMBFKMJC_TypeDefinitionIndex = 54306;

	class GOIIMBFKMJC : public ::System::Object
	{
	public:
		::RPG::GameCore::IFrameSyncOperationSource_1<::KANHBPAGDJD*>* _Source_k__BackingField; // 0x10
		::System::Int32 _ExecuteFrame_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIIMBFKMJC_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ExecuteFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIIMBFKMJC_GET_EXECUTEFRAME_OFFSET))(this);
		}

		::System::Void set_ExecuteFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOIIMBFKMJC_SET_EXECUTEFRAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::IFrameSyncOperationSource_1<::KANHBPAGDJD*>* get_Source()
		{
			return ((::RPG::GameCore::IFrameSyncOperationSource_1<::KANHBPAGDJD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIIMBFKMJC_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::RPG::GameCore::IFrameSyncOperationSource_1<::KANHBPAGDJD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IFrameSyncOperationSource_1<::KANHBPAGDJD*>*))((::PBYTE)hIl2Cpp + GOIIMBFKMJC_SET_SOURCE_OFFSET))(this, a1);
		}

		::System::Void Execute(::KANHBPAGDJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KANHBPAGDJD*))((::PBYTE)hIl2Cpp + GOIIMBFKMJC_EXECUTE_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA(::POEGKFEADIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POEGKFEADIE*))((::PBYTE)hIl2Cpp + GOIIMBFKMJC_KKKIONIDKFA_OFFSET))(this, a1);
		}

	};
