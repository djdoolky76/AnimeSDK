#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHLGAPIIKCA;
namespace System { class Object; }

#define FHLGAPIIKCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38FDA0)
#define FHLGAPIIKCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38FDD0)
#define FHLGAPIIKCA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E38FDE0)

	class FHLGAPIIKCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHLGAPIIKCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA___C_CTOR_OFFSET))(this);
		}

		::FHLGAPIIKCA* __cctor_b__18_0()
		{
			return ((::FHLGAPIIKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
