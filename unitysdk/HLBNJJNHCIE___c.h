#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLBNJJNHCIE;
namespace System { class Object; }

#define HLBNJJNHCIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B6350)
#define HLBNJJNHCIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B6390)
#define HLBNJJNHCIE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8B63A0)

inline static constexpr unsigned int HLBNJJNHCIE___c_TypeDefinitionIndex = 30018;

	class HLBNJJNHCIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x379D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLBNJJNHCIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE___C_CTOR_OFFSET))(this);
		}

		::HLBNJJNHCIE* __cctor_b__28_0()
		{
			return ((::HLBNJJNHCIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBNJJNHCIE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
