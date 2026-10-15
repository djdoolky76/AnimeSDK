#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBMDEBCGNMD;
namespace System { class Object; }

#define PBMDEBCGNMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEFA1A0)
#define PBMDEBCGNMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFA1E0)
#define PBMDEBCGNMD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEFA1F0)

inline static constexpr unsigned int PBMDEBCGNMD___c_TypeDefinitionIndex = 25885;

	class PBMDEBCGNMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBMDEBCGNMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMDEBCGNMD___C_CTOR_OFFSET))(this);
		}

		::PBMDEBCGNMD* __cctor_b__33_0()
		{
			return ((::PBMDEBCGNMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMDEBCGNMD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
