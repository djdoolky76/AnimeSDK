#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEDJBBOGLNM;
namespace System { class Object; }

#define MEDJBBOGLNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0A0A0)
#define MEDJBBOGLNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0A0E0)
#define MEDJBBOGLNM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA0A0F0)

	class MEDJBBOGLNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEDJBBOGLNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM___C_CTOR_OFFSET))(this);
		}

		::MEDJBBOGLNM* __cctor_b__33_0()
		{
			return ((::MEDJBBOGLNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
