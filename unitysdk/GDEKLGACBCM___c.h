#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDEKLGACBCM;
namespace System { class Object; }

#define GDEKLGACBCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E446540)
#define GDEKLGACBCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E446580)
#define GDEKLGACBCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E446590)

	class GDEKLGACBCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDEKLGACBCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM___C_CTOR_OFFSET))(this);
		}

		::GDEKLGACBCM* __cctor_b__23_0()
		{
			return ((::GDEKLGACBCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKLGACBCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
