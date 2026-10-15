#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDAMEHEPOBD;
namespace System { class Object; }

#define DDAMEHEPOBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17A000)
#define DDAMEHEPOBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17A040)
#define DDAMEHEPOBD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E17A050)

inline static constexpr unsigned int DDAMEHEPOBD___c_TypeDefinitionIndex = 29140;

	class DDAMEHEPOBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDAMEHEPOBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD___C_CTOR_OFFSET))(this);
		}

		::DDAMEHEPOBD* __cctor_b__38_0()
		{
			return ((::DDAMEHEPOBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAMEHEPOBD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
