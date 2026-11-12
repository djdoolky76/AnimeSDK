#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDLNIKCCALK;
namespace System { class Object; }

#define NDLNIKCCALK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE2D1B0)
#define NDLNIKCCALK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE2D1F0)
#define NDLNIKCCALK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FE2D200)

inline static constexpr unsigned int NDLNIKCCALK___c_TypeDefinitionIndex = 30499;

	class NDLNIKCCALK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDLNIKCCALK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK___C_CTOR_OFFSET))(this);
		}

		::NDLNIKCCALK* __cctor_b__43_0()
		{
			return ((::NDLNIKCCALK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
