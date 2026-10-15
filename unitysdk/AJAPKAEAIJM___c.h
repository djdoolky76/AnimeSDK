#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJAPKAEAIJM;
namespace System { class Object; }

#define AJAPKAEAIJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E284FE0)
#define AJAPKAEAIJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E285020)
#define AJAPKAEAIJM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E285030)

	class AJAPKAEAIJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJAPKAEAIJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAPKAEAIJM___C_CTOR_OFFSET))(this);
		}

		::AJAPKAEAIJM* __cctor_b__33_0()
		{
			return ((::AJAPKAEAIJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAPKAEAIJM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
