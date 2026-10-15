#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPJFNJAJIGM;
namespace System { class Object; }

#define LPJFNJAJIGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2EE0)
#define LPJFNJAJIGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2F20)
#define LPJFNJAJIGM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9A2F30)

inline static constexpr unsigned int LPJFNJAJIGM___c_TypeDefinitionIndex = 26642;

	class LPJFNJAJIGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPJFNJAJIGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJFNJAJIGM___C_CTOR_OFFSET))(this);
		}

		::LPJFNJAJIGM* __cctor_b__28_0()
		{
			return ((::LPJFNJAJIGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJFNJAJIGM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
