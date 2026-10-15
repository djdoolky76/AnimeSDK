#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPPCGBKJDAB;
namespace System { class Object; }

#define PPPCGBKJDAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB8080)
#define PPPCGBKJDAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB80B0)
#define PPPCGBKJDAB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFB80C0)

inline static constexpr unsigned int PPPCGBKJDAB___c_TypeDefinitionIndex = 30268;

	class PPPCGBKJDAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPPCGBKJDAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB___C_CTOR_OFFSET))(this);
		}

		::PPPCGBKJDAB* __cctor_b__33_0()
		{
			return ((::PPPCGBKJDAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
