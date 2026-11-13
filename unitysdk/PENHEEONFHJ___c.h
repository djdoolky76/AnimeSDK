#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PENHEEONFHJ;
namespace System { class Object; }

#define PENHEEONFHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206727C0)
#define PENHEEONFHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20672800)
#define PENHEEONFHJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20672810)

inline static constexpr unsigned int PENHEEONFHJ___c_TypeDefinitionIndex = 28497;

	class PENHEEONFHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PENHEEONFHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ___C_CTOR_OFFSET))(this);
		}

		::PENHEEONFHJ* __cctor_b__28_0()
		{
			return ((::PENHEEONFHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
