#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLHHLIGPNOM;
namespace System { class Object; }

#define HLHHLIGPNOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E592C20)
#define HLHHLIGPNOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E592C60)
#define HLHHLIGPNOM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E592C70)

inline static constexpr unsigned int HLHHLIGPNOM___c_TypeDefinitionIndex = 29598;

	class HLHHLIGPNOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLHHLIGPNOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM___C_CTOR_OFFSET))(this);
		}

		::HLHHLIGPNOM* __cctor_b__48_0()
		{
			return ((::HLHHLIGPNOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLHHLIGPNOM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
