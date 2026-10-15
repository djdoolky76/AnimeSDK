#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHOPIKPAMPJ;
namespace System { class Object; }

#define BHOPIKPAMPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCFF30)
#define BHOPIKPAMPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCFF70)
#define BHOPIKPAMPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDCFF80)

inline static constexpr unsigned int BHOPIKPAMPJ___c_TypeDefinitionIndex = 34835;

	class BHOPIKPAMPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x572A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHOPIKPAMPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ___C_CTOR_OFFSET))(this);
		}

		::BHOPIKPAMPJ* __cctor_b__28_0()
		{
			return ((::BHOPIKPAMPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOPIKPAMPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
