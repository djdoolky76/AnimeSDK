#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBFOJHEPNHE;
namespace System { class Object; }

#define CBFOJHEPNHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E039450)
#define CBFOJHEPNHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E039490)
#define CBFOJHEPNHE___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E0394A0)

inline static constexpr unsigned int CBFOJHEPNHE___c_TypeDefinitionIndex = 34311;

	class CBFOJHEPNHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBFOJHEPNHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFOJHEPNHE___C_CTOR_OFFSET))(this);
		}

		::CBFOJHEPNHE* __cctor_b__58_0()
		{
			return ((::CBFOJHEPNHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFOJHEPNHE___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
