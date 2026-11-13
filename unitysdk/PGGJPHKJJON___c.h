#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGGJPHKJJON;
namespace System { class Object; }

#define PGGJPHKJJON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2024D860)
#define PGGJPHKJJON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2024D8A0)
#define PGGJPHKJJON___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2024D8B0)

inline static constexpr unsigned int PGGJPHKJJON___c_TypeDefinitionIndex = 30310;

	class PGGJPHKJJON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGGJPHKJJON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON___C_CTOR_OFFSET))(this);
		}

		::PGGJPHKJJON* __cctor_b__23_0()
		{
			return ((::PGGJPHKJJON*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGJPHKJJON___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
