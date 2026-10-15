#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFFMBFDAJDA;
namespace System { class Object; }

#define EFFMBFDAJDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E260BB0)
#define EFFMBFDAJDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E260BF0)
#define EFFMBFDAJDA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E260C00)

inline static constexpr unsigned int EFFMBFDAJDA___c_TypeDefinitionIndex = 29006;

	class EFFMBFDAJDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFFMBFDAJDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA___C_CTOR_OFFSET))(this);
		}

		::EFFMBFDAJDA* __cctor_b__33_0()
		{
			return ((::EFFMBFDAJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFMBFDAJDA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
