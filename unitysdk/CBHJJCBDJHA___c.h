#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBHJJCBDJHA;
namespace System { class Object; }

#define CBHJJCBDJHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F32C9D0)
#define CBHJJCBDJHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F32CA10)
#define CBHJJCBDJHA___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x1F32CA20)

inline static constexpr unsigned int CBHJJCBDJHA___c_TypeDefinitionIndex = 32454;

	class CBHJJCBDJHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBHJJCBDJHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHJJCBDJHA___C_CTOR_OFFSET))(this);
		}

		::CBHJJCBDJHA* __cctor_b__52_0()
		{
			return ((::CBHJJCBDJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHJJCBDJHA___C___CCTOR_B__52_0_OFFSET))(this);
		}

	};
