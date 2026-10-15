#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBFAAHFDNF;
namespace System { class Object; }

#define EPBFAAHFDNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D69F0)
#define EPBFAAHFDNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D6A30)
#define EPBFAAHFDNF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2D6A40)

inline static constexpr unsigned int EPBFAAHFDNF___c_TypeDefinitionIndex = 31705;

	class EPBFAAHFDNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPBFAAHFDNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF___C_CTOR_OFFSET))(this);
		}

		::EPBFAAHFDNF* __cctor_b__28_0()
		{
			return ((::EPBFAAHFDNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
