#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPHNBOCNHDD;

#define DJMGAAHIMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18BF2350)
#define DJMGAAHIMOJ_GET_ENHANCEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18BF22C0)
#define DJMGAAHIMOJ_GET_MAXENHANCEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18BF22E0)
#define DJMGAAHIMOJ_HDNGLDEDPFM_OFFSET UNITYSDK_OFFSET(0x18BF2300)
#define DJMGAAHIMOJ_NNNKPFONGPP_OFFSET UNITYSDK_OFFSET(0x18BF2260)
#define DJMGAAHIMOJ_SET_ENHANCEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18BF22D0)
#define DJMGAAHIMOJ_SET_MAXENHANCEDCOUNT_OFFSET UNITYSDK_OFFSET(0x18BF22F0)

inline static constexpr unsigned int DJMGAAHIMOJ_TypeDefinitionIndex = 73445;

	class DJMGAAHIMOJ : public ::System::Object
	{
	public:
		::System::UInt32 _EnhancedCount_k__BackingField; // 0x10
		::System::UInt32 _MaxEnhancedCount_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMGAAHIMOJ_CTOR_OFFSET))(this);
		}

		::System::Void NNNKPFONGPP(::EPHNBOCNHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPHNBOCNHDD*))((::PBYTE)hIl2Cpp + DJMGAAHIMOJ_NNNKPFONGPP_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnhancedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMGAAHIMOJ_GET_ENHANCEDCOUNT_OFFSET))(this);
		}

		::System::Void set_EnhancedCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJMGAAHIMOJ_SET_ENHANCEDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxEnhancedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMGAAHIMOJ_GET_MAXENHANCEDCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxEnhancedCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJMGAAHIMOJ_SET_MAXENHANCEDCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean HDNGLDEDPFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMGAAHIMOJ_HDNGLDEDPFM_OFFSET))(this);
		}

	};
