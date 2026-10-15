#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIJHCCNMEGA;
namespace System { class Object; }

#define NIJHCCNMEGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB06430)
#define NIJHCCNMEGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB06470)
#define NIJHCCNMEGA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB06480)

inline static constexpr unsigned int NIJHCCNMEGA___c_TypeDefinitionIndex = 27714;

	class NIJHCCNMEGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIJHCCNMEGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA___C_CTOR_OFFSET))(this);
		}

		::NIJHCCNMEGA* __cctor_b__33_0()
		{
			return ((::NIJHCCNMEGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
