#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFKFJCPELEM;
namespace System { class Object; }

#define AFKFJCPELEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3D4190)
#define AFKFJCPELEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D41D0)
#define AFKFJCPELEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3D41E0)

inline static constexpr unsigned int AFKFJCPELEM___c_TypeDefinitionIndex = 31619;

	class AFKFJCPELEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFKFJCPELEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM___C_CTOR_OFFSET))(this);
		}

		::AFKFJCPELEM* __cctor_b__28_0()
		{
			return ((::AFKFJCPELEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
