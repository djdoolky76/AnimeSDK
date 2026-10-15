#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBMAHPJPGLM;
namespace System { class Object; }

#define GBMAHPJPGLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E430FC0)
#define GBMAHPJPGLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E431000)
#define GBMAHPJPGLM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E431010)

	class GBMAHPJPGLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMAHPJPGLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM___C_CTOR_OFFSET))(this);
		}

		::GBMAHPJPGLM* __cctor_b__23_0()
		{
			return ((::GBMAHPJPGLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMAHPJPGLM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
