#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAGLMEAGPPC;
namespace System { class Object; }

#define PAGLMEAGPPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20373D10)
#define PAGLMEAGPPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20373D50)
#define PAGLMEAGPPC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20373D60)

inline static constexpr unsigned int PAGLMEAGPPC___c_TypeDefinitionIndex = 27123;

	class PAGLMEAGPPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGLMEAGPPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC___C_CTOR_OFFSET))(this);
		}

		::PAGLMEAGPPC* __cctor_b__28_0()
		{
			return ((::PAGLMEAGPPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGLMEAGPPC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
