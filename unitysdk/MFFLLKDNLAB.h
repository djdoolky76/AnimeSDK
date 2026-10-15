#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO { class Stream; }

#define MFFLLKDNLAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC36D10)
#define MFFLLKDNLAB_DEGANOOLJME_OFFSET UNITYSDK_OFFSET(0x1EC37000)
#define MFFLLKDNLAB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1EC36D60)
#define MFFLLKDNLAB_HOMLNOCNICB_OFFSET UNITYSDK_OFFSET(0x1EC37480)
#define MFFLLKDNLAB_IEGNMOODDAK_OFFSET UNITYSDK_OFFSET(0x1EC37110)
#define MFFLLKDNLAB_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x1EC36F60)
#define MFFLLKDNLAB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1EC36D20)
#define MFFLLKDNLAB_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1EC37670)
#define MFFLLKDNLAB_OIDEJMFNKBL_OFFSET UNITYSDK_OFFSET(0x1EC36F50)
#define MFFLLKDNLAB_ONDFBCCLHCD_OFFSET UNITYSDK_OFFSET(0x1EC36FB0)
#define MFFLLKDNLAB_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1EC36DB0)

	class MFFLLKDNLAB : public ::System::Object
	{
	public:
		::System::IO::Stream* JOKDPKKLOIO; // 0x10
		::System::Boolean KFMAKPOKELE; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::FileVisitorPosMode GCDOIJFBIDL; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void OIDEJMFNKBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_OIDEJMFNKBL_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Void ONDFBCCLHCD(::RPG::Client::FileVisitorPosMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FileVisitorPosMode))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_ONDFBCCLHCD_OFFSET))(this, a1);
		}

		::System::Int64 DEGANOOLJME()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_DEGANOOLJME_OFFSET))(this);
		}

		::System::Boolean IEGNMOODDAK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_IEGNMOODDAK_OFFSET))(this, a1);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_PDKLDMNAJBO_OFFSET))(this);
		}

		::System::Int64 HOMLNOCNICB(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_HOMLNOCNICB_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* NKCDEAAKNGO(::System::Int64 a1, ::System::Int64 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MFFLLKDNLAB_NKCDEAAKNGO_OFFSET))(this, a1, a2, a3);
		}

	};
