#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGAKKAGNPFH;
namespace System { class Object; }

#define EGAKKAGNPFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E265100)
#define EGAKKAGNPFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E265140)
#define EGAKKAGNPFH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E265150)

inline static constexpr unsigned int EGAKKAGNPFH___c_TypeDefinitionIndex = 28230;

	class EGAKKAGNPFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGAKKAGNPFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAKKAGNPFH___C_CTOR_OFFSET))(this);
		}

		::EGAKKAGNPFH* __cctor_b__53_0()
		{
			return ((::EGAKKAGNPFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAKKAGNPFH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
