#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAKPILEOKNC;
namespace System { class Object; }

#define MAKPILEOKNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB5620)
#define MAKPILEOKNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB5660)
#define MAKPILEOKNC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FBB5670)

inline static constexpr unsigned int MAKPILEOKNC___c_TypeDefinitionIndex = 29763;

	class MAKPILEOKNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAKPILEOKNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC___C_CTOR_OFFSET))(this);
		}

		::MAKPILEOKNC* __cctor_b__43_0()
		{
			return ((::MAKPILEOKNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
