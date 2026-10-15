#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MKINBNAIHNL_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0x1EC0A910)
#define MKINBNAIHNL_CJDNCBHLOGD_1_OFFSET UNITYSDK_OFFSET(0x1EC0A980)
#define MKINBNAIHNL_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x1EC0A940)
#define MKINBNAIHNL_FMOOJPKOMFG_OFFSET UNITYSDK_OFFSET(0x1EC0A9A0)
#define MKINBNAIHNL_GDGGKDHHFFE_OFFSET UNITYSDK_OFFSET(0x1EC0AA90)
#define MKINBNAIHNL_IJKPJINOHHF_OFFSET UNITYSDK_OFFSET(0x1EC0A9F0)
#define MKINBNAIHNL_JBCFPAEELBL_OFFSET UNITYSDK_OFFSET(0x1EC0A8F0)

inline static constexpr unsigned int MKINBNAIHNL_TypeDefinitionIndex = 35197;

	class MKINBNAIHNL : public ::System::Object
	{
	public:
		static ::System::Int32 JBCFPAEELBL(::PVOID a1)
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKINBNAIHNL_JBCFPAEELBL_OFFSET))(a1);
		}

		static ::PVOID AEOIKFNKAAP(::PVOID a1, ::PVOID a2)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MKINBNAIHNL_AEOIKFNKAAP_OFFSET))(a1, a2);
		}

		static ::System::Int32 CJDNCBHLOGD(::PVOID a1, ::PVOID a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MKINBNAIHNL_CJDNCBHLOGD_OFFSET))(a1, a2);
		}

		static ::System::Int32 CJDNCBHLOGD_1(::PVOID a1, ::PVOID a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKINBNAIHNL_CJDNCBHLOGD_1_OFFSET))(a1, a2, a3);
		}

		static ::PVOID FMOOJPKOMFG(::PVOID a1, ::PVOID a2)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MKINBNAIHNL_FMOOJPKOMFG_OFFSET))(a1, a2);
		}

		static ::System::String* IJKPJINOHHF(::PVOID a1)
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKINBNAIHNL_IJKPJINOHHF_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GDGGKDHHFFE(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MKINBNAIHNL_GDGGKDHHFFE_OFFSET))(a1);
		}

	};
