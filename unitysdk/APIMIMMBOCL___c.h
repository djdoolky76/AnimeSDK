#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APIMIMMBOCL;
namespace System { class Object; }

#define APIMIMMBOCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20569490)
#define APIMIMMBOCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205694D0)
#define APIMIMMBOCL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x205694E0)

inline static constexpr unsigned int APIMIMMBOCL___c_TypeDefinitionIndex = 34957;

	class APIMIMMBOCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APIMIMMBOCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL___C_CTOR_OFFSET))(this);
		}

		::APIMIMMBOCL* __cctor_b__28_0()
		{
			return ((::APIMIMMBOCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + APIMIMMBOCL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
