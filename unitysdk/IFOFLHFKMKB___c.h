#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFOFLHFKMKB;
namespace System { class Object; }

#define IFOFLHFKMKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202976C0)
#define IFOFLHFKMKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20297700)
#define IFOFLHFKMKB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20297710)

inline static constexpr unsigned int IFOFLHFKMKB___c_TypeDefinitionIndex = 27993;

	class IFOFLHFKMKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFOFLHFKMKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB___C_CTOR_OFFSET))(this);
		}

		::IFOFLHFKMKB* __cctor_b__23_0()
		{
			return ((::IFOFLHFKMKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOFLHFKMKB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
