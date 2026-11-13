#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBADCOMDOON;
namespace System { class Object; }

#define OBADCOMDOON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD9A960)
#define OBADCOMDOON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD9A9A0)
#define OBADCOMDOON___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD9A9B0)

inline static constexpr unsigned int OBADCOMDOON___c_TypeDefinitionIndex = 35578;

	class OBADCOMDOON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBADCOMDOON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON___C_CTOR_OFFSET))(this);
		}

		::OBADCOMDOON* __cctor_b__28_0()
		{
			return ((::OBADCOMDOON*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBADCOMDOON___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
