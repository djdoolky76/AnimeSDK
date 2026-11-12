#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLMAMHBLJKP;
namespace System { class Object; }

#define PLMAMHBLJKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F254F60)
#define PLMAMHBLJKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F254FA0)
#define PLMAMHBLJKP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F254FB0)

inline static constexpr unsigned int PLMAMHBLJKP___c_TypeDefinitionIndex = 28866;

	class PLMAMHBLJKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLMAMHBLJKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP___C_CTOR_OFFSET))(this);
		}

		::PLMAMHBLJKP* __cctor_b__28_0()
		{
			return ((::PLMAMHBLJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
