#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOFBLJPHHE;
namespace System { class Object; }

#define ABOFBLJPHHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD13F0)
#define ABOFBLJPHHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD1430)
#define ABOFBLJPHHE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDD1440)

inline static constexpr unsigned int ABOFBLJPHHE___c_TypeDefinitionIndex = 26277;

	class ABOFBLJPHHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABOFBLJPHHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE___C_CTOR_OFFSET))(this);
		}

		::ABOFBLJPHHE* __cctor_b__28_0()
		{
			return ((::ABOFBLJPHHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFBLJPHHE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
