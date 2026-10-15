#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIGJGMLAMGH;
namespace System { class Object; }

#define KIGJGMLAMGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85A420)
#define KIGJGMLAMGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85A460)
#define KIGJGMLAMGH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E85A470)

inline static constexpr unsigned int KIGJGMLAMGH___c_TypeDefinitionIndex = 30464;

	class KIGJGMLAMGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIGJGMLAMGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH___C_CTOR_OFFSET))(this);
		}

		::KIGJGMLAMGH* __cctor_b__23_0()
		{
			return ((::KIGJGMLAMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIGJGMLAMGH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
