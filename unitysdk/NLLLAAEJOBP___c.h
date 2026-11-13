#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLLLAAEJOBP;
namespace System { class Object; }

#define NLLLAAEJOBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2B9A0)
#define NLLLAAEJOBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2B9D0)
#define NLLLAAEJOBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA2B9E0)

inline static constexpr unsigned int NLLLAAEJOBP___c_TypeDefinitionIndex = 31005;

	class NLLLAAEJOBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLLLAAEJOBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP___C_CTOR_OFFSET))(this);
		}

		::NLLLAAEJOBP* __cctor_b__28_0()
		{
			return ((::NLLLAAEJOBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
