#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAFMBLMMAAG;
namespace System { class Object; }

#define NAFMBLMMAAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDFB7E0)
#define NAFMBLMMAAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDFB820)
#define NAFMBLMMAAG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDFB830)

inline static constexpr unsigned int NAFMBLMMAAG___c_TypeDefinitionIndex = 35225;

	class NAFMBLMMAAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAFMBLMMAAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG___C_CTOR_OFFSET))(this);
		}

		::NAFMBLMMAAG* __cctor_b__28_0()
		{
			return ((::NAFMBLMMAAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMBLMMAAG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
