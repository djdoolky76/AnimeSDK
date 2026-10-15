#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCCJKNEADPL;
namespace System { class Object; }

#define LCCJKNEADPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E89C0)
#define LCCJKNEADPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E89F0)
#define LCCJKNEADPL___C___CCTOR_B__238_0_OFFSET UNITYSDK_OFFSET(0x1E8E8A00)

inline static constexpr unsigned int LCCJKNEADPL___c_TypeDefinitionIndex = 25654;

	class LCCJKNEADPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCCJKNEADPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCJKNEADPL___C_CTOR_OFFSET))(this);
		}

		::LCCJKNEADPL* __cctor_b__238_0()
		{
			return ((::LCCJKNEADPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCJKNEADPL___C___CCTOR_B__238_0_OFFSET))(this);
		}

	};
