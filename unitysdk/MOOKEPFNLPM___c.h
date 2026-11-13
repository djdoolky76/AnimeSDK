#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOKEPFNLPM;
namespace System { class Object; }

#define MOOKEPFNLPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF1B6D0)
#define MOOKEPFNLPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1B710)
#define MOOKEPFNLPM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FF1B720)

inline static constexpr unsigned int MOOKEPFNLPM___c_TypeDefinitionIndex = 34969;

	class MOOKEPFNLPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOKEPFNLPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM___C_CTOR_OFFSET))(this);
		}

		::MOOKEPFNLPM* __cctor_b__33_0()
		{
			return ((::MOOKEPFNLPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
