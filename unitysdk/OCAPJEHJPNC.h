#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/OAHMMNKIOFD.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/UnityEngine/jvalue.h"
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AndroidJavaObject; }

#define OCAPJEHJPNC_BGDFAEPOCCL_1_OFFSET UNITYSDK_OFFSET(0x1CC8EF50)
#define OCAPJEHJPNC_BGDFAEPOCCL_OFFSET UNITYSDK_OFFSET(0x1CC8EEA0)
#define OCAPJEHJPNC_BIJFLNHPPMD_OFFSET UNITYSDK_OFFSET(0x1CC8ED00)
#define OCAPJEHJPNC_BIKABOFADBP_OFFSET UNITYSDK_OFFSET(0x1CC8EF00)
#define OCAPJEHJPNC_CBFGECIFBJI_OFFSET UNITYSDK_OFFSET(0x1CC8F1C0)
#define OCAPJEHJPNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC8E6E0)
#define OCAPJEHJPNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8CFE0)
#define OCAPJEHJPNC_DCDDKNNINEB_OFFSET UNITYSDK_OFFSET(0x1CC8F0D0)
#define OCAPJEHJPNC_HHBNADIECOC_OFFSET UNITYSDK_OFFSET(0x1CC8ED60)
#define OCAPJEHJPNC_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1CC8EA40)
#define OCAPJEHJPNC_HOMLNOCNICB_OFFSET UNITYSDK_OFFSET(0x1CC8EB10)
#define OCAPJEHJPNC_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x1CC8F120)
#define OCAPJEHJPNC_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0x1CC8EA90)
#define OCAPJEHJPNC_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x1CC8EC50)
#define OCAPJEHJPNC_NBDLADMEENA_OFFSET UNITYSDK_OFFSET(0x1CC8EC80)
#define OCAPJEHJPNC_NCCFBEHADDE_OFFSET UNITYSDK_OFFSET(0x1CC8ECB0)
#define OCAPJEHJPNC_NGJJAMEOMNO_OFFSET UNITYSDK_OFFSET(0x1CC8F080)
#define OCAPJEHJPNC_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1CC8EE40)
#define OCAPJEHJPNC_NPJODHJPFDL_OFFSET UNITYSDK_OFFSET(0x1CC8E910)
#define OCAPJEHJPNC_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1CC8F170)

inline static constexpr unsigned int OCAPJEHJPNC_TypeDefinitionIndex = 43838;

	class OCAPJEHJPNC : public ::OAHMMNKIOFD
	{
	public:
		::UnityEngine::AndroidJavaObject* EOMMIOPCNIC; // 0x10
		::System::IntPtr NHAKIIKALGL; // 0x18
		static ::Il2CppArray<::UnityEngine::jvalue>** StaticGet_MJACHBNGKPO()
		{
			return (::Il2CppArray<::UnityEngine::jvalue>**)UnitySDK::FromName("", "OCAPJEHJPNC")->GetStaticField(0xF20);
		}

		static ::UnityEngine::AndroidJavaObject** StaticGet_AKJEHJOFIJC()
		{
			return (::UnityEngine::AndroidJavaObject**)UnitySDK::FromName("", "OCAPJEHJPNC")->GetStaticField(0xF28);
		}

		static ::System::String** StaticGet_LPANCNBMAPJ()
		{
			return (::System::String**)UnitySDK::FromName("", "OCAPJEHJPNC")->GetStaticField(0xF30);
		}

		static ::System::Int32* StaticGet_GFGNDMMIOGD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OCAPJEHJPNC")->GetStaticField(0x6A0);
		}

		static ::System::IntPtr* StaticGet_OBAGKMHFMED()
		{
			return (::System::IntPtr*)UnitySDK::FromName("", "OCAPJEHJPNC")->GetStaticField(0x6A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCAPJEHJPNC_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int64 HHMFILFAMNA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::System::Int64 LKEFCMNJDJI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_LKEFCMNJDJI_OFFSET))(this);
		}

		::System::Void NCCFBEHADDE(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_NCCFBEHADDE_OFFSET))(this, a1);
		}

		::System::Void HOMLNOCNICB(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_HOMLNOCNICB_OFFSET))(this, a1, a2);
		}

		::System::Int32 NKCDEAAKNGO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_NKCDEAAKNGO_OFFSET))(this);
		}

		::System::Int32 BIKABOFADBP(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_BIKABOFADBP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NGJJAMEOMNO(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_NGJJAMEOMNO_OFFSET))(this, a1);
		}

		::System::Void DCDDKNNINEB(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_DCDDKNNINEB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_KHNCMBEFIKI_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_PDKLDMNAJBO_OFFSET))(this);
		}

		::UnityEngine::AndroidJavaObject* NPJODHJPFDL(::System::String* a1)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_NPJODHJPFDL_OFFSET))(this, a1);
		}

		::System::Int32 NBDLADMEENA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_NBDLADMEENA_OFFSET))(this);
		}

		::System::Void CBFGECIFBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_CBFGECIFBJI_OFFSET))(this);
		}

		::System::Int32 BGDFAEPOCCL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_BGDFAEPOCCL_OFFSET))(this);
		}

		::System::Int32 BGDFAEPOCCL_1(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_BGDFAEPOCCL_1_OFFSET))(this, a1, a2);
		}

		::System::Void BIJFLNHPPMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_BIJFLNHPPMD_OFFSET))(this);
		}

		::System::Int64 HHBNADIECOC(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + OCAPJEHJPNC_HHBNADIECOC_OFFSET))(this, a1);
		}

	};
