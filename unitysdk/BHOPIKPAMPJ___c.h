#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHOPIKPAMPJ;
namespace System { class Object; }

#define BHOPIKPAMPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2011EC30)
#define BHOPIKPAMPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2011EC70)
#define BHOPIKPAMPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2011EC80)

inline static constexpr unsigned int BHOPIKPAMPJ___c_TypeDefinitionIndex = 35763;

	class BHOPIKPAMPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52A10);
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
