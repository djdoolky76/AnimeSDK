#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/OAHMMNKIOFD.h"
#include "unitysdk/System/IO/SeekOrigin.h"
namespace System { class String; }
namespace System::IO { class FileStream; }

#define LDNKBHMJCOF_BIKABOFADBP_OFFSET UNITYSDK_OFFSET(0x1CC8E3E0)
#define LDNKBHMJCOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC8D270)
#define LDNKBHMJCOF_DCDDKNNINEB_OFFSET UNITYSDK_OFFSET(0x1CC8E4B0)
#define LDNKBHMJCOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC8E5E0)
#define LDNKBHMJCOF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1CC8E2E0)
#define LDNKBHMJCOF_HOMLNOCNICB_OFFSET UNITYSDK_OFFSET(0x1CC8E3A0)
#define LDNKBHMJCOF_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x1CC8E560)
#define LDNKBHMJCOF_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0x1CC8E300)
#define LDNKBHMJCOF_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x1CC8E360)
#define LDNKBHMJCOF_NCCFBEHADDE_OFFSET UNITYSDK_OFFSET(0x1CC8E380)
#define LDNKBHMJCOF_NGJJAMEOMNO_OFFSET UNITYSDK_OFFSET(0x1CC8E490)
#define LDNKBHMJCOF_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1CC8E3C0)
#define LDNKBHMJCOF_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1CC8E5C0)

inline static constexpr unsigned int LDNKBHMJCOF_TypeDefinitionIndex = 43853;

	class LDNKBHMJCOF : public ::OAHMMNKIOFD
	{
	public:
		::System::IO::FileStream* EOMMIOPCNIC; // 0x10
		::System::Void _ctor(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int64 HHMFILFAMNA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::System::Int64 LKEFCMNJDJI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_LKEFCMNJDJI_OFFSET))(this);
		}

		::System::Void NCCFBEHADDE(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_NCCFBEHADDE_OFFSET))(this, a1);
		}

		::System::Void HOMLNOCNICB(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_HOMLNOCNICB_OFFSET))(this, a1, a2);
		}

		::System::Int32 NKCDEAAKNGO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_NKCDEAAKNGO_OFFSET))(this);
		}

		::System::Int32 BIKABOFADBP(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_BIKABOFADBP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NGJJAMEOMNO(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_NGJJAMEOMNO_OFFSET))(this, a1);
		}

		::System::Void DCDDKNNINEB(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_DCDDKNNINEB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_KHNCMBEFIKI_OFFSET))(this);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNKBHMJCOF_DISPOSE_OFFSET))(this);
		}

	};
