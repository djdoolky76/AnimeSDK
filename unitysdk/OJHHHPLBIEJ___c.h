#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJHHHPLBIEJ;
namespace System { class Object; }

#define OJHHHPLBIEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A2450)
#define OJHHHPLBIEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A2490)
#define OJHHHPLBIEJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F6A24A0)

inline static constexpr unsigned int OJHHHPLBIEJ___c_TypeDefinitionIndex = 25905;

	class OJHHHPLBIEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHHHPLBIEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ___C_CTOR_OFFSET))(this);
		}

		::OJHHHPLBIEJ* __cctor_b__33_0()
		{
			return ((::OJHHHPLBIEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
