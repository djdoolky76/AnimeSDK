#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { class IGroup; }
namespace System { class String; }

#define KLPEALMPJBL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5366C0)
#define KLPEALMPJBL_CTOR_OFFSET UNITYSDK_OFFSET(0xB536550)
#define KLPEALMPJBL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB536680)

	class KLPEALMPJBL : public ::System::Object
	{
	public:
		::Entitas::IGroup* MBBMBOMFIGF; // 0x10
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x18
		static ::System::String** StaticGet_NHPMFOEICCO()
		{
			return (::System::String**)UnitySDK::FromName("", "KLPEALMPJBL")->GetStaticField(0x5EBE0);
		}

		static ::System::String** StaticGet_DAAKOJMCPOJ()
		{
			return (::System::String**)UnitySDK::FromName("", "KLPEALMPJBL")->GetStaticField(0x5EBE8);
		}

		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + KLPEALMPJBL_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLPEALMPJBL_CCTOR_OFFSET))();
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPEALMPJBL_EXECUTE_OFFSET))(this);
		}

	};
