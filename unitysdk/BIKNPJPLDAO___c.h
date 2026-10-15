#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIKNPJPLDAO;
namespace System { class Object; }

#define BIKNPJPLDAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD73F0)
#define BIKNPJPLDAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD7430)
#define BIKNPJPLDAO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DDD7440)

inline static constexpr unsigned int BIKNPJPLDAO___c_TypeDefinitionIndex = 29973;

	class BIKNPJPLDAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIKNPJPLDAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNPJPLDAO___C_CTOR_OFFSET))(this);
		}

		::BIKNPJPLDAO* __cctor_b__43_0()
		{
			return ((::BIKNPJPLDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKNPJPLDAO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
