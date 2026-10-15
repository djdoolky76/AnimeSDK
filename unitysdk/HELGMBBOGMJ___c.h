#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HELGMBBOGMJ;
namespace System { class Object; }

#define HELGMBBOGMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52E2E0)
#define HELGMBBOGMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52E320)
#define HELGMBBOGMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E52E330)

inline static constexpr unsigned int HELGMBBOGMJ___c_TypeDefinitionIndex = 33066;

	class HELGMBBOGMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HELGMBBOGMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ___C_CTOR_OFFSET))(this);
		}

		::HELGMBBOGMJ* __cctor_b__23_0()
		{
			return ((::HELGMBBOGMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HELGMBBOGMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
