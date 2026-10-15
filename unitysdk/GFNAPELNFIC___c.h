#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFNAPELNFIC;
namespace System { class Object; }

#define GFNAPELNFIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E446C00)
#define GFNAPELNFIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E446C40)
#define GFNAPELNFIC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E446C50)

inline static constexpr unsigned int GFNAPELNFIC___c_TypeDefinitionIndex = 25486;

	class GFNAPELNFIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFNAPELNFIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC___C_CTOR_OFFSET))(this);
		}

		::GFNAPELNFIC* __cctor_b__33_0()
		{
			return ((::GFNAPELNFIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNAPELNFIC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
