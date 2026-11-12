#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAJDMCJIBOP;
namespace System { class Object; }

#define LAJDMCJIBOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC0ACC0)
#define LAJDMCJIBOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0AD00)
#define LAJDMCJIBOP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC0AD10)

inline static constexpr unsigned int LAJDMCJIBOP___c_TypeDefinitionIndex = 33129;

	class LAJDMCJIBOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAJDMCJIBOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP___C_CTOR_OFFSET))(this);
		}

		::LAJDMCJIBOP* __cctor_b__23_0()
		{
			return ((::LAJDMCJIBOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJDMCJIBOP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
