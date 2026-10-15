#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLEJIGIKOF;

#define MPCKPCEBLPM_BPNJBGFNBFB_OFFSET UNITYSDK_OFFSET(0xBA39700)
#define MPCKPCEBLPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA395F0)
#define MPCKPCEBLPM_FINISH_OFFSET UNITYSDK_OFFSET(0xBA396C0)
#define MPCKPCEBLPM_GETACTIONID_OFFSET UNITYSDK_OFFSET(0xBA39600)
#define MPCKPCEBLPM_GETISHANDLED_OFFSET UNITYSDK_OFFSET(0xBA39640)
#define MPCKPCEBLPM_GET_MAX_OFFSET UNITYSDK_OFFSET(0xBA395B0)
#define MPCKPCEBLPM_GET_MIN_OFFSET UNITYSDK_OFFSET(0xBA395D0)
#define MPCKPCEBLPM_SET_MAX_OFFSET UNITYSDK_OFFSET(0xBA395C0)
#define MPCKPCEBLPM_SET_MIN_OFFSET UNITYSDK_OFFSET(0xBA395E0)
#define MPCKPCEBLPM_START_OFFSET UNITYSDK_OFFSET(0xBA39680)
#define MPCKPCEBLPM_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xBA39800)

inline static constexpr unsigned int MPCKPCEBLPM_TypeDefinitionIndex = 65357;

	class MPCKPCEBLPM : public ::System::Object
	{
	public:
		::System::UInt32 HJADIMLCEHC; // 0x10
		::System::UInt32 _Min_k__BackingField; // 0x14
		::System::Boolean DJFEELOGENG; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _Max_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Max()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_GET_MAX_OFFSET))(this);
		}

		::System::Void set_Max(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_SET_MAX_OFFSET))(this, a1);
		}

		::System::UInt32 get_Min()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_GET_MIN_OFFSET))(this);
		}

		::System::Void set_Min(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_SET_MIN_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_GETACTIONID_OFFSET))(this);
		}

		::System::Boolean GetIsHandled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_GETISHANDLED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_START_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_FINISH_OFFSET))(this);
		}

		::System::Void BPNJBGFNBFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_BPNJBGFNBFB_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + MPCKPCEBLPM_SYNCHANDLERSP_OFFSET))(this, a1);
		}

	};
