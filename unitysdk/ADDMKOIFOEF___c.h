#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADDMKOIFOEF;
namespace System { class Object; }

#define ADDMKOIFOEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB38B0)
#define ADDMKOIFOEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB38E0)
#define ADDMKOIFOEF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDB38F0)

inline static constexpr unsigned int ADDMKOIFOEF___c_TypeDefinitionIndex = 30699;

	class ADDMKOIFOEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADDMKOIFOEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMKOIFOEF___C_CTOR_OFFSET))(this);
		}

		::ADDMKOIFOEF* __cctor_b__18_0()
		{
			return ((::ADDMKOIFOEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDMKOIFOEF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
