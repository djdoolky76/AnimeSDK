#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOELPDDJGFJ;
namespace System { class Object; }

#define IOELPDDJGFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D36C0)
#define IOELPDDJGFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D3700)
#define IOELPDDJGFJ___C___CCTOR_B__149_0_OFFSET UNITYSDK_OFFSET(0x1E6D3710)

inline static constexpr unsigned int IOELPDDJGFJ___c_TypeDefinitionIndex = 27163;

	class IOELPDDJGFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOELPDDJGFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOELPDDJGFJ___C_CTOR_OFFSET))(this);
		}

		::IOELPDDJGFJ* __cctor_b__149_0()
		{
			return ((::IOELPDDJGFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOELPDDJGFJ___C___CCTOR_B__149_0_OFFSET))(this);
		}

	};
