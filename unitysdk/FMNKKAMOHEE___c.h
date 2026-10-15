#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMNKKAMOHEE;
namespace System { class Object; }

#define FMNKKAMOHEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BC610)
#define FMNKKAMOHEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BC640)
#define FMNKKAMOHEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3BC650)

inline static constexpr unsigned int FMNKKAMOHEE___c_TypeDefinitionIndex = 29634;

	class FMNKKAMOHEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D2C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMNKKAMOHEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE___C_CTOR_OFFSET))(this);
		}

		::FMNKKAMOHEE* __cctor_b__23_0()
		{
			return ((::FMNKKAMOHEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNKKAMOHEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
