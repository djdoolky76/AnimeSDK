#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFHPBHFGLE;
namespace System { class Object; }

#define NCFHPBHFGLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADAC00)
#define NCFHPBHFGLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADAC40)
#define NCFHPBHFGLE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EADAC50)

inline static constexpr unsigned int NCFHPBHFGLE___c_TypeDefinitionIndex = 30231;

	class NCFHPBHFGLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFHPBHFGLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE___C_CTOR_OFFSET))(this);
		}

		::NCFHPBHFGLE* __cctor_b__23_0()
		{
			return ((::NCFHPBHFGLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFHPBHFGLE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
