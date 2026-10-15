#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPLIGADGDF;
namespace System { class Object; }

#define NPPLIGADGDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB760B0)
#define NPPLIGADGDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB760E0)
#define NPPLIGADGDF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB760F0)

inline static constexpr unsigned int NPPLIGADGDF___c_TypeDefinitionIndex = 28858;

	class NPPLIGADGDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPLIGADGDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF___C_CTOR_OFFSET))(this);
		}

		::NPPLIGADGDF* __cctor_b__33_0()
		{
			return ((::NPPLIGADGDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPLIGADGDF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
