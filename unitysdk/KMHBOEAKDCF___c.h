#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMHBOEAKDCF;
namespace System { class Object; }

#define KMHBOEAKDCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86D0B0)
#define KMHBOEAKDCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86D0F0)
#define KMHBOEAKDCF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E86D100)

inline static constexpr unsigned int KMHBOEAKDCF___c_TypeDefinitionIndex = 30229;

	class KMHBOEAKDCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EF80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMHBOEAKDCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF___C_CTOR_OFFSET))(this);
		}

		::KMHBOEAKDCF* __cctor_b__28_0()
		{
			return ((::KMHBOEAKDCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHBOEAKDCF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
