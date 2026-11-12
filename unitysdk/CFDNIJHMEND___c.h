#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFDNIJHMEND;
namespace System { class Object; }

#define CFDNIJHMEND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F365B00)
#define CFDNIJHMEND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F365B30)
#define CFDNIJHMEND___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F365B40)

inline static constexpr unsigned int CFDNIJHMEND___c_TypeDefinitionIndex = 31884;

	class CFDNIJHMEND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFDNIJHMEND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND___C_CTOR_OFFSET))(this);
		}

		::CFDNIJHMEND* __cctor_b__23_0()
		{
			return ((::CFDNIJHMEND*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDNIJHMEND___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
