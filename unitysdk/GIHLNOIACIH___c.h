#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIHLNOIACIH;
namespace System { class Object; }

#define GIHLNOIACIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBCD050)
#define GIHLNOIACIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBCD080)
#define GIHLNOIACIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FBCD090)

inline static constexpr unsigned int GIHLNOIACIH___c_TypeDefinitionIndex = 35356;

	class GIHLNOIACIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIHLNOIACIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH___C_CTOR_OFFSET))(this);
		}

		::GIHLNOIACIH* __cctor_b__28_0()
		{
			return ((::GIHLNOIACIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
