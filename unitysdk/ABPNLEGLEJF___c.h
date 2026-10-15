#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPNLEGLEJF;
namespace System { class Object; }

#define ABPNLEGLEJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA7BE0)
#define ABPNLEGLEJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA7C20)
#define ABPNLEGLEJF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDA7C30)

inline static constexpr unsigned int ABPNLEGLEJF___c_TypeDefinitionIndex = 32499;

	class ABPNLEGLEJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABPNLEGLEJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF___C_CTOR_OFFSET))(this);
		}

		::ABPNLEGLEJF* __cctor_b__28_0()
		{
			return ((::ABPNLEGLEJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPNLEGLEJF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
