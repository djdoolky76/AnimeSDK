#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAKMNFLCCMJ;
namespace System { class Object; }

#define DAKMNFLCCMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202A8F20)
#define DAKMNFLCCMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202A8F60)
#define DAKMNFLCCMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202A8F70)

inline static constexpr unsigned int DAKMNFLCCMJ___c_TypeDefinitionIndex = 35675;

	class DAKMNFLCCMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAKMNFLCCMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ___C_CTOR_OFFSET))(this);
		}

		::DAKMNFLCCMJ* __cctor_b__23_0()
		{
			return ((::DAKMNFLCCMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKMNFLCCMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
