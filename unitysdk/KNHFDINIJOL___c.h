#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNHFDINIJOL;
namespace System { class Object; }

#define KNHFDINIJOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A3300)
#define KNHFDINIJOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A3340)
#define KNHFDINIJOL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E8A3350)

	class KNHFDINIJOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNHFDINIJOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL___C_CTOR_OFFSET))(this);
		}

		::KNHFDINIJOL* __cctor_b__18_0()
		{
			return ((::KNHFDINIJOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFDINIJOL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
