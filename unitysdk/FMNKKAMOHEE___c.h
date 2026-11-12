#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMNKKAMOHEE;
namespace System { class Object; }

#define FMNKKAMOHEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6D5CD0)
#define FMNKKAMOHEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D5D00)
#define FMNKKAMOHEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6D5D10)

inline static constexpr unsigned int FMNKKAMOHEE___c_TypeDefinitionIndex = 30444;

	class FMNKKAMOHEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E440);
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
