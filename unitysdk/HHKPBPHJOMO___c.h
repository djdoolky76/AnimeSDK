#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHKPBPHJOMO;
namespace System { class Object; }

#define HHKPBPHJOMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55C8C0)
#define HHKPBPHJOMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55C8F0)
#define HHKPBPHJOMO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E55C900)

inline static constexpr unsigned int HHKPBPHJOMO___c_TypeDefinitionIndex = 27878;

	class HHKPBPHJOMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x323C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHKPBPHJOMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO___C_CTOR_OFFSET))(this);
		}

		::HHKPBPHJOMO* __cctor_b__18_0()
		{
			return ((::HHKPBPHJOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHKPBPHJOMO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
