#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBGLFOIBBLL;
namespace System { class Object; }

#define NBGLFOIBBLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0E000)
#define NBGLFOIBBLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0E040)
#define NBGLFOIBBLL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE0E050)

inline static constexpr unsigned int NBGLFOIBBLL___c_TypeDefinitionIndex = 36067;

	class NBGLFOIBBLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBGLFOIBBLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL___C_CTOR_OFFSET))(this);
		}

		::NBGLFOIBBLL* __cctor_b__23_0()
		{
			return ((::NBGLFOIBBLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGLFOIBBLL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
