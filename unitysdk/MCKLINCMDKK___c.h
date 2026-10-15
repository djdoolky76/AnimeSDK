#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCKLINCMDKK;
namespace System { class Object; }

#define MCKLINCMDKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FAE90)
#define MCKLINCMDKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FAED0)
#define MCKLINCMDKK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9FAEE0)

	class MCKLINCMDKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCKLINCMDKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK___C_CTOR_OFFSET))(this);
		}

		::MCKLINCMDKK* __cctor_b__28_0()
		{
			return ((::MCKLINCMDKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
