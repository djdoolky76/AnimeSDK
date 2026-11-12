#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDJDPENEGNH;
namespace System { class Object; }

#define LDJDPENEGNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC38520)
#define LDJDPENEGNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC38560)
#define LDJDPENEGNH___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1FC38570)

inline static constexpr unsigned int LDJDPENEGNH___c_TypeDefinitionIndex = 25816;

	class LDJDPENEGNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ACD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDJDPENEGNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDPENEGNH___C_CTOR_OFFSET))(this);
		}

		::LDJDPENEGNH* __cctor_b__63_0()
		{
			return ((::LDJDPENEGNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJDPENEGNH___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
