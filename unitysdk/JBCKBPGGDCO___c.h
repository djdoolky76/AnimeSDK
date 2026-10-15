#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBCKBPGGDCO;
namespace System { class Object; }

#define JBCKBPGGDCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C6B00)
#define JBCKBPGGDCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C6B30)
#define JBCKBPGGDCO___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E6C6B40)

inline static constexpr unsigned int JBCKBPGGDCO___c_TypeDefinitionIndex = 26169;

	class JBCKBPGGDCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x591F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBCKBPGGDCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCKBPGGDCO___C_CTOR_OFFSET))(this);
		}

		::JBCKBPGGDCO* __cctor_b__53_0()
		{
			return ((::JBCKBPGGDCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCKBPGGDCO___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
