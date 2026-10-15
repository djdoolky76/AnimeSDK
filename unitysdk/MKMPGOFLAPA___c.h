#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKMPGOFLAPA;
namespace System { class Object; }

#define MKMPGOFLAPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DD30)
#define MKMPGOFLAPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DD60)
#define MKMPGOFLAPA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EA2DD70)

inline static constexpr unsigned int MKMPGOFLAPA___c_TypeDefinitionIndex = 32409;

	class MKMPGOFLAPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKMPGOFLAPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA___C_CTOR_OFFSET))(this);
		}

		::MKMPGOFLAPA* __cctor_b__43_0()
		{
			return ((::MKMPGOFLAPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMPGOFLAPA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
