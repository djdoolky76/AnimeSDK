#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKNLDCIOCFI;
namespace System { class Object; }

#define MKNLDCIOCFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F740)
#define MKNLDCIOCFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F780)
#define MKNLDCIOCFI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA2F790)

inline static constexpr unsigned int MKNLDCIOCFI___c_TypeDefinitionIndex = 30995;

	class MKNLDCIOCFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x554C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKNLDCIOCFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNLDCIOCFI___C_CTOR_OFFSET))(this);
		}

		::MKNLDCIOCFI* __cctor_b__18_0()
		{
			return ((::MKNLDCIOCFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNLDCIOCFI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
