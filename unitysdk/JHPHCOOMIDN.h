#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JHPHCOOMIDN_CTOR_OFFSET UNITYSDK_OFFSET(0x173F1920)
#define JHPHCOOMIDN_GET_FOCUSDEVICEID_OFFSET UNITYSDK_OFFSET(0x173F1740)
#define JHPHCOOMIDN_GET_FOCUSTOKEN_OFFSET UNITYSDK_OFFSET(0x173F1760)
#define JHPHCOOMIDN_IFNCGMDKJJL_OFFSET UNITYSDK_OFFSET(0x173F18E0)
#define JHPHCOOMIDN_JJBPBPCMMCJ_OFFSET UNITYSDK_OFFSET(0x173F1850)
#define JHPHCOOMIDN_KMCOKDJFOOF_OFFSET UNITYSDK_OFFSET(0x173F1780)
#define JHPHCOOMIDN_OBPLLJAIMBL_OFFSET UNITYSDK_OFFSET(0x173F1800)
#define JHPHCOOMIDN_SET_FOCUSDEVICEID_OFFSET UNITYSDK_OFFSET(0x173F1750)
#define JHPHCOOMIDN_SET_FOCUSTOKEN_OFFSET UNITYSDK_OFFSET(0x173F1770)

inline static constexpr unsigned int JHPHCOOMIDN_TypeDefinitionIndex = 77144;

	class JHPHCOOMIDN : public ::System::Object
	{
	public:
		::System::Int32 _FocusToken_k__BackingField; // 0x10
		::System::UInt32 _FocusDeviceId_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FocusDeviceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_GET_FOCUSDEVICEID_OFFSET))(this);
		}

		::System::Void set_FocusDeviceId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_SET_FOCUSDEVICEID_OFFSET))(this, a1);
		}

		::System::Int32 get_FocusToken()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_GET_FOCUSTOKEN_OFFSET))(this);
		}

		::System::Void set_FocusToken(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_SET_FOCUSTOKEN_OFFSET))(this, a1);
		}

		::System::Void KMCOKDJFOOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_KMCOKDJFOOF_OFFSET))(this, a1);
		}

		::System::Boolean JJBPBPCMMCJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_JJBPBPCMMCJ_OFFSET))(this, a1);
		}

		::System::UInt32 IFNCGMDKJJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_IFNCGMDKJJL_OFFSET))(this);
		}

		::System::Void OBPLLJAIMBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JHPHCOOMIDN_OBPLLJAIMBL_OFFSET))(this, a1);
		}

	};
