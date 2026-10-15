#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPLADDHCJCC;
namespace System { class Object; }

#define DPLADDHCJCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E6940)
#define DPLADDHCJCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E6980)
#define DPLADDHCJCC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1E6990)

inline static constexpr unsigned int DPLADDHCJCC___c_TypeDefinitionIndex = 30442;

	class DPLADDHCJCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPLADDHCJCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLADDHCJCC___C_CTOR_OFFSET))(this);
		}

		::DPLADDHCJCC* __cctor_b__33_0()
		{
			return ((::DPLADDHCJCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLADDHCJCC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
