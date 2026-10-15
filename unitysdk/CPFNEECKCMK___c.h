#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFNEECKCMK;
namespace System { class Object; }

#define CPFNEECKCMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E110010)
#define CPFNEECKCMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E110050)
#define CPFNEECKCMK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E110060)

inline static constexpr unsigned int CPFNEECKCMK___c_TypeDefinitionIndex = 30046;

	class CPFNEECKCMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPFNEECKCMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK___C_CTOR_OFFSET))(this);
		}

		::CPFNEECKCMK* __cctor_b__43_0()
		{
			return ((::CPFNEECKCMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
