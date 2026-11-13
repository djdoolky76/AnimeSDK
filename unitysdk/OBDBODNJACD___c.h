#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBDBODNJACD;
namespace System { class Object; }

#define OBDBODNJACD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD9C620)
#define OBDBODNJACD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD9C660)
#define OBDBODNJACD___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FD9C670)

inline static constexpr unsigned int OBDBODNJACD___c_TypeDefinitionIndex = 28582;

	class OBDBODNJACD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBDBODNJACD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD___C_CTOR_OFFSET))(this);
		}

		::OBDBODNJACD* __cctor_b__48_0()
		{
			return ((::OBDBODNJACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDBODNJACD___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
