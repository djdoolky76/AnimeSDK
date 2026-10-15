#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INHCJHBALFC;
namespace RPG::GameCore { template <typename T> class IFrameSyncOperationSource_1; }

#define BHDAFDOMINP_CTOR_OFFSET UNITYSDK_OFFSET(0xB4704D0)
#define BHDAFDOMINP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB470440)
#define BHDAFDOMINP_GET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0xB470400)
#define BHDAFDOMINP_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB470420)
#define BHDAFDOMINP_SET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0xB470410)
#define BHDAFDOMINP_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB470430)

inline static constexpr unsigned int BHDAFDOMINP_TypeDefinitionIndex = 54261;

	class BHDAFDOMINP : public ::System::Object
	{
	public:
		::RPG::GameCore::IFrameSyncOperationSource_1<::INHCJHBALFC*>* _Source_k__BackingField; // 0x10
		::System::UInt32 CEGOPEIKDLA; // 0x18
		::System::Int32 _ExecuteFrame_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDAFDOMINP_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ExecuteFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDAFDOMINP_GET_EXECUTEFRAME_OFFSET))(this);
		}

		::System::Void set_ExecuteFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHDAFDOMINP_SET_EXECUTEFRAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::IFrameSyncOperationSource_1<::INHCJHBALFC*>* get_Source()
		{
			return ((::RPG::GameCore::IFrameSyncOperationSource_1<::INHCJHBALFC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDAFDOMINP_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::RPG::GameCore::IFrameSyncOperationSource_1<::INHCJHBALFC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IFrameSyncOperationSource_1<::INHCJHBALFC*>*))((::PBYTE)hIl2Cpp + BHDAFDOMINP_SET_SOURCE_OFFSET))(this, a1);
		}

		::System::Void Execute(::INHCJHBALFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHCJHBALFC*))((::PBYTE)hIl2Cpp + BHDAFDOMINP_EXECUTE_OFFSET))(this, a1);
		}

	};
