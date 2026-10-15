#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGLBOFKGGLL;
namespace System { class Object; }

#define DGLBOFKGGLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B1060)
#define DGLBOFKGGLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B10A0)
#define DGLBOFKGGLL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1B10B0)

inline static constexpr unsigned int DGLBOFKGGLL___c_TypeDefinitionIndex = 31277;

	class DGLBOFKGGLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGLBOFKGGLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL___C_CTOR_OFFSET))(this);
		}

		::DGLBOFKGGLL* __cctor_b__23_0()
		{
			return ((::DGLBOFKGGLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBOFKGGLL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
