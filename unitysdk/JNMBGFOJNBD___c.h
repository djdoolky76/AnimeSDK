#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNMBGFOJNBD;
namespace System { class Object; }

#define JNMBGFOJNBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79A4D0)
#define JNMBGFOJNBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79A510)
#define JNMBGFOJNBD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E79A520)

inline static constexpr unsigned int JNMBGFOJNBD___c_TypeDefinitionIndex = 29782;

	class JNMBGFOJNBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNMBGFOJNBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD___C_CTOR_OFFSET))(this);
		}

		::JNMBGFOJNBD* __cctor_b__28_0()
		{
			return ((::JNMBGFOJNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMBGFOJNBD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
