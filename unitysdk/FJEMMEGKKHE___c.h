#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEMMEGKKHE;
namespace System { class Object; }

#define FJEMMEGKKHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A6F70)
#define FJEMMEGKKHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A6FB0)
#define FJEMMEGKKHE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6A6FC0)

inline static constexpr unsigned int FJEMMEGKKHE___c_TypeDefinitionIndex = 31627;

	class FJEMMEGKKHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x469D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEMMEGKKHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE___C_CTOR_OFFSET))(this);
		}

		::FJEMMEGKKHE* __cctor_b__23_0()
		{
			return ((::FJEMMEGKKHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
