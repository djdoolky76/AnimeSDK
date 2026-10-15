#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFMDKNCDDAL.h"
#include "unitysdk/System/Object.h"
class IIEEOLPONJM;
namespace System { class Object; }

#define IIEEOLPONJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E657FA0)
#define IIEEOLPONJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E657FE0)
#define IIEEOLPONJM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E657FF0)
#define IIEEOLPONJM___C___CCTOR_B__38_1_OFFSET UNITYSDK_OFFSET(0x1E658040)
#define IIEEOLPONJM___C___CCTOR_B__38_2_OFFSET UNITYSDK_OFFSET(0x1E658050)

inline static constexpr unsigned int IIEEOLPONJM___c_TypeDefinitionIndex = 26377;

	class IIEEOLPONJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4EA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIEEOLPONJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM___C_CTOR_OFFSET))(this);
		}

		::IIEEOLPONJM* __cctor_b__38_0()
		{
			return ((::IIEEOLPONJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEEOLPONJM___C___CCTOR_B__38_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__38_1(::CFMDKNCDDAL a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CFMDKNCDDAL))((::PBYTE)hIl2Cpp + IIEEOLPONJM___C___CCTOR_B__38_1_OFFSET))(this, a1);
		}

		::CFMDKNCDDAL __cctor_b__38_2(::System::Int32 a1)
		{
			return ((::CFMDKNCDDAL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIEEOLPONJM___C___CCTOR_B__38_2_OFFSET))(this, a1);
		}

	};
