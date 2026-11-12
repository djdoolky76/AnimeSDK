#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCFNEPJKDM;
namespace System { class Object; }

#define HJCFNEPJKDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89FBA0)
#define HJCFNEPJKDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89FBE0)
#define HJCFNEPJKDM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F89FBF0)

inline static constexpr unsigned int HJCFNEPJKDM___c_TypeDefinitionIndex = 29755;

	class HJCFNEPJKDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJCFNEPJKDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM___C_CTOR_OFFSET))(this);
		}

		::HJCFNEPJKDM* __cctor_b__23_0()
		{
			return ((::HJCFNEPJKDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCFNEPJKDM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
