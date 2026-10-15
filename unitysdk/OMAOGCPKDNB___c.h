#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMAOGCPKDNB;
namespace System { class Object; }

#define OMAOGCPKDNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAFB90)
#define OMAOGCPKDNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAFBD0)
#define OMAOGCPKDNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEAFBE0)

	class OMAOGCPKDNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x247E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMAOGCPKDNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB___C_CTOR_OFFSET))(this);
		}

		::OMAOGCPKDNB* __cctor_b__28_0()
		{
			return ((::OMAOGCPKDNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOGCPKDNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
