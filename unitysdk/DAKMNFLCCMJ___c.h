#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAKMNFLCCMJ;
namespace System { class Object; }

#define DAKMNFLCCMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E126060)
#define DAKMNFLCCMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1260A0)
#define DAKMNFLCCMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1260B0)

inline static constexpr unsigned int DAKMNFLCCMJ___c_TypeDefinitionIndex = 34747;

	class DAKMNFLCCMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21B90);
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
