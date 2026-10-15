#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFOLFMNALLK;
namespace System { class Object; }

#define KFOLFMNALLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E803080)
#define KFOLFMNALLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8030B0)
#define KFOLFMNALLK___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E8030C0)

inline static constexpr unsigned int KFOLFMNALLK___c_TypeDefinitionIndex = 30095;

	class KFOLFMNALLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x142B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOLFMNALLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLFMNALLK___C_CTOR_OFFSET))(this);
		}

		::KFOLFMNALLK* __cctor_b__58_0()
		{
			return ((::KFOLFMNALLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOLFMNALLK___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
