#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHIBHCOLBNB;
namespace System { class Object; }

#define MHIBHCOLBNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA32CA0)
#define MHIBHCOLBNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA32CE0)
#define MHIBHCOLBNB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA32CF0)

inline static constexpr unsigned int MHIBHCOLBNB___c_TypeDefinitionIndex = 34253;

	class MHIBHCOLBNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHIBHCOLBNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB___C_CTOR_OFFSET))(this);
		}

		::MHIBHCOLBNB* __cctor_b__23_0()
		{
			return ((::MHIBHCOLBNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIBHCOLBNB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
