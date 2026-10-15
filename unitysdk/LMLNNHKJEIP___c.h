#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMLNNHKJEIP;
namespace System { class Object; }

#define LMLNNHKJEIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97DCD0)
#define LMLNNHKJEIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97DD10)
#define LMLNNHKJEIP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E97DD20)

inline static constexpr unsigned int LMLNNHKJEIP___c_TypeDefinitionIndex = 25774;

	class LMLNNHKJEIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMLNNHKJEIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNNHKJEIP___C_CTOR_OFFSET))(this);
		}

		::LMLNNHKJEIP* __cctor_b__33_0()
		{
			return ((::LMLNNHKJEIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNNHKJEIP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
