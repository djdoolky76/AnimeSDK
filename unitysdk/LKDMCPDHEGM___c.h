#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKDMCPDHEGM;
namespace System { class Object; }

#define LKDMCPDHEGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98D4A0)
#define LKDMCPDHEGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98D4E0)
#define LKDMCPDHEGM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E98D4F0)

	class LKDMCPDHEGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKDMCPDHEGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDMCPDHEGM___C_CTOR_OFFSET))(this);
		}

		::LKDMCPDHEGM* __cctor_b__18_0()
		{
			return ((::LKDMCPDHEGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDMCPDHEGM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
