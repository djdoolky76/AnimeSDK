#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAMINBCLDKO;
namespace System { class Object; }

#define MAMINBCLDKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AF1C0)
#define MAMINBCLDKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AF200)
#define MAMINBCLDKO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E9AF210)

inline static constexpr unsigned int MAMINBCLDKO___c_TypeDefinitionIndex = 30454;

	class MAMINBCLDKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAMINBCLDKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMINBCLDKO___C_CTOR_OFFSET))(this);
		}

		::MAMINBCLDKO* __cctor_b__48_0()
		{
			return ((::MAMINBCLDKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMINBCLDKO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
