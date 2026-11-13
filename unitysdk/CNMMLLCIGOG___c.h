#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNMMLLCIGOG;
namespace System { class Object; }

#define CNMMLLCIGOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205F3F20)
#define CNMMLLCIGOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205F3F60)
#define CNMMLLCIGOG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x205F3F70)

inline static constexpr unsigned int CNMMLLCIGOG___c_TypeDefinitionIndex = 26496;

	class CNMMLLCIGOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNMMLLCIGOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG___C_CTOR_OFFSET))(this);
		}

		::CNMMLLCIGOG* __cctor_b__33_0()
		{
			return ((::CNMMLLCIGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
