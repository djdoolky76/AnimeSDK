#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFIFAFEEAHI;
namespace System { class Object; }

#define HFIFAFEEAHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F866A10)
#define HFIFAFEEAHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F866A50)
#define HFIFAFEEAHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F866A60)

inline static constexpr unsigned int HFIFAFEEAHI___c_TypeDefinitionIndex = 32280;

	class HFIFAFEEAHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFIFAFEEAHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI___C_CTOR_OFFSET))(this);
		}

		::HFIFAFEEAHI* __cctor_b__23_0()
		{
			return ((::HFIFAFEEAHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIFAFEEAHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
