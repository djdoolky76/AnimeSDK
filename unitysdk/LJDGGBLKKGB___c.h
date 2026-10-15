#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJDGGBLKKGB;
namespace System { class Object; }

#define LJDGGBLKKGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E977DE0)
#define LJDGGBLKKGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E977E20)
#define LJDGGBLKKGB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E977E30)

inline static constexpr unsigned int LJDGGBLKKGB___c_TypeDefinitionIndex = 28170;

	class LJDGGBLKKGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x466E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDGGBLKKGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDGGBLKKGB___C_CTOR_OFFSET))(this);
		}

		::LJDGGBLKKGB* __cctor_b__33_0()
		{
			return ((::LJDGGBLKKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDGGBLKKGB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
