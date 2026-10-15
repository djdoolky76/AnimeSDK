#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOBHIPHGPB;
namespace System { class Object; }

#define JBOBHIPHGPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CFDC0)
#define JBOBHIPHGPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CFE00)
#define JBOBHIPHGPB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E6CFE10)

inline static constexpr unsigned int JBOBHIPHGPB___c_TypeDefinitionIndex = 30644;

	class JBOBHIPHGPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBOBHIPHGPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB___C_CTOR_OFFSET))(this);
		}

		::JBOBHIPHGPB* __cctor_b__43_0()
		{
			return ((::JBOBHIPHGPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
