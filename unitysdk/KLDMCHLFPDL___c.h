#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLDMCHLFPDL;
namespace System { class Object; }

#define KLDMCHLFPDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB6AB0)
#define KLDMCHLFPDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB6AF0)
#define KLDMCHLFPDL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDB6B00)

inline static constexpr unsigned int KLDMCHLFPDL___c_TypeDefinitionIndex = 33063;

	class KLDMCHLFPDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLDMCHLFPDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL___C_CTOR_OFFSET))(this);
		}

		::KLDMCHLFPDL* __cctor_b__23_0()
		{
			return ((::KLDMCHLFPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDMCHLFPDL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
