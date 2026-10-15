#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFGMBEBAPM.h"
#include "unitysdk/Unity/Collections/Allocator.h"
class NKHKCLCAKPD;

#define NKHKCLCAKPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD82470)
#define NKHKCLCAKPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD822A0)
#define NKHKCLCAKPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD82300)
#define NKHKCLCAKPD_HMENDFLGJHC_OFFSET UNITYSDK_OFFSET(0x1DD822B0)
#define NKHKCLCAKPD_HNBHABAPCDC_OFFSET UNITYSDK_OFFSET(0x1DD82310)
#define NKHKCLCAKPD_LDCGNGDPGAM_OFFSET UNITYSDK_OFFSET(0x1DD822E0)

inline static constexpr unsigned int NKHKCLCAKPD_TypeDefinitionIndex = 6324;

	class NKHKCLCAKPD : public ::BCFGMBEBAPM
	{
	public:
		::Unity::Collections::Allocator HPCBNNNNEDI; // 0x10
		static ::Il2CppArray<::NKHKCLCAKPD*>** StaticGet_MJNJAIOJCME()
		{
			return (::Il2CppArray<::NKHKCLCAKPD*>**)UnitySDK::FromName("", "NKHKCLCAKPD")->GetStaticField(0x2E780);
		}

		::System::Void _ctor(::Unity::Collections::Allocator a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NKHKCLCAKPD_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKHKCLCAKPD_CCTOR_OFFSET))();
		}

		::System::IntPtr HMENDFLGJHC(::System::Int64 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NKHKCLCAKPD_HMENDFLGJHC_OFFSET))(this, a1);
		}

		::System::Void LDCGNGDPGAM(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + NKHKCLCAKPD_LDCGNGDPGAM_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHKCLCAKPD_DISPOSE_OFFSET))(this);
		}

		static ::NKHKCLCAKPD* HNBHABAPCDC(::Unity::Collections::Allocator a1)
		{
			return ((::NKHKCLCAKPD*(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NKHKCLCAKPD_HNBHABAPCDC_OFFSET))(a1);
		}

	};
