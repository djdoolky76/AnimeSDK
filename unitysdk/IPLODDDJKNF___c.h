#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPLODDDJKNF;
namespace System { class Object; }

#define IPLODDDJKNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E70A0)
#define IPLODDDJKNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E70E0)
#define IPLODDDJKNF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6E70F0)

inline static constexpr unsigned int IPLODDDJKNF___c_TypeDefinitionIndex = 28178;

	class IPLODDDJKNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPLODDDJKNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLODDDJKNF___C_CTOR_OFFSET))(this);
		}

		::IPLODDDJKNF* __cctor_b__38_0()
		{
			return ((::IPLODDDJKNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLODDDJKNF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
