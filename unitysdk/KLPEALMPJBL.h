#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }

#define KLPEALMPJBL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB52FD50)
#define KLPEALMPJBL_CTOR_OFFSET UNITYSDK_OFFSET(0xB52FBE0)
#define KLPEALMPJBL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB52FD10)

inline static constexpr unsigned int KLPEALMPJBL_TypeDefinitionIndex = 77775;

	class KLPEALMPJBL : public ::System::Object
	{
	public:
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x10
		::Entitas::IGroup_1<::NGFHCJIAOLH*>* MBBMBOMFIGF; // 0x18
		static ::System::String** StaticGet_DAAKOJMCPOJ()
		{
			return (::System::String**)UnitySDK::FromName("", "KLPEALMPJBL")->GetStaticField(0x5A900);
		}

		static ::System::String** StaticGet_NHPMFOEICCO()
		{
			return (::System::String**)UnitySDK::FromName("", "KLPEALMPJBL")->GetStaticField(0x5A908);
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
