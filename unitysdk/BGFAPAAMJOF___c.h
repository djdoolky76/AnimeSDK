#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFAPAAMJOF;
namespace System { class Object; }

#define BGFAPAAMJOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA74A50)
#define BGFAPAAMJOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA74A90)
#define BGFAPAAMJOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA74AA0)

inline static constexpr unsigned int BGFAPAAMJOF___c_TypeDefinitionIndex = 32067;

	class BGFAPAAMJOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGFAPAAMJOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF___C_CTOR_OFFSET))(this);
		}

		::BGFAPAAMJOF* __cctor_b__28_0()
		{
			return ((::BGFAPAAMJOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFAPAAMJOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
