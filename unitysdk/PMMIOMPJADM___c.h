#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMMIOMPJADM;
namespace System { class Object; }

#define PMMIOMPJADM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF80C40)
#define PMMIOMPJADM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF80C80)
#define PMMIOMPJADM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF80C90)

inline static constexpr unsigned int PMMIOMPJADM___c_TypeDefinitionIndex = 32608;

	class PMMIOMPJADM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x403E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMMIOMPJADM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM___C_CTOR_OFFSET))(this);
		}

		::PMMIOMPJADM* __cctor_b__23_0()
		{
			return ((::PMMIOMPJADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
