#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class SynchronizationContext; }

#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_ABFLHCEJFLO_OFFSET UNITYSDK_OFFSET(0x1E5E2310)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_BFAHOPLJIKA_OFFSET UNITYSDK_OFFSET(0x1E5E24F0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_CJCCCMMFOKG_OFFSET UNITYSDK_OFFSET(0x1E5E2420)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_FCJONEPIOHC_OFFSET UNITYSDK_OFFSET(0x1E5E2660)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_IADPOBGDHHO_OFFSET UNITYSDK_OFFSET(0x1E5E22E0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_INITPLAY_OFFSET UNITYSDK_OFFSET(0x1E5E2110)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_KMDCNHNELAM_OFFSET UNITYSDK_OFFSET(0x1E5E2150)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_MJPJJKNBBNJ_OFFSET UNITYSDK_OFFSET(0x1E5E2300)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_NGDLPMIMMNH_OFFSET UNITYSDK_OFFSET(0x1E5E22F0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_OJJPCICDCPN_OFFSET UNITYSDK_OFFSET(0x1E5E22D0)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_RESETSTATICS_OFFSET UNITYSDK_OFFSET(0x1E5E20A0)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int ThreadHelper_TypeDefinitionIndex = 34093;

	class ThreadHelper : public ::System::Object
	{
	public:
		static ::System::Threading::SynchronizationContext** StaticGet_PCOJAILELBB()
		{
			return (::System::Threading::SynchronizationContext**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x2A070);
		}
		static ::System::String** StaticGet_JLIPPPOILAB()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x2A078);
		}
		static ::System::String** StaticGet_LCPEGIHIKIF()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x2A080);
		}
		static ::System::String** StaticGet_GGIALNHAMCN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x2A088);
		}
		static ::System::Int32* StaticGet_FFCICEPNCCN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ThreadHelper_TypeDefinitionIndex)->GetStaticField(0x86C0);
		}

		static ::System::Void ResetStatics()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_RESETSTATICS_OFFSET))();
		}

		static ::System::Void InitPlay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_INITPLAY_OFFSET))();
		}

		static ::System::Void KMDCNHNELAM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_KMDCNHNELAM_OFFSET))();
		}

		static ::System::String* OJJPCICDCPN()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_OJJPCICDCPN_OFFSET))();
		}

		static ::System::Threading::SynchronizationContext* IADPOBGDHHO()
		{
			return ((::System::Threading::SynchronizationContext*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_IADPOBGDHHO_OFFSET))();
		}

		static ::System::String* NGDLPMIMMNH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_NGDLPMIMMNH_OFFSET))();
		}

		static ::System::String* MJPJJKNBBNJ()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_MJPJJKNBBNJ_OFFSET))();
		}

		static ::System::Void ABFLHCEJFLO(::System::Action* EJCBEJMGFAJ)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_ABFLHCEJFLO_OFFSET))(EJCBEJMGFAJ);
		}

		static ::System::Boolean CJCCCMMFOKG()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_CJCCCMMFOKG_OFFSET))();
		}

		static ::System::Void BFAHOPLJIKA(::System::String* KHILBNJIAKA)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_BFAHOPLJIKA_OFFSET))(KHILBNJIAKA);
		}

		static ::System::Int32 FCJONEPIOHC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_FCJONEPIOHC_OFFSET))();
		}
	};
}
