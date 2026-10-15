#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMOEFOEJEE;
namespace System { class Object; }

#define FPMOEFOEJEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40EBA0)
#define FPMOEFOEJEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40EBD0)
#define FPMOEFOEJEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E40EBE0)

inline static constexpr unsigned int FPMOEFOEJEE___c_TypeDefinitionIndex = 32175;

	class FPMOEFOEJEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMOEFOEJEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE___C_CTOR_OFFSET))(this);
		}

		::FPMOEFOEJEE* __cctor_b__23_0()
		{
			return ((::FPMOEFOEJEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOEFOEJEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
