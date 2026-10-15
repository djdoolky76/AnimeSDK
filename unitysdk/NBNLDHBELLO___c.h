#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBNLDHBELLO;
namespace System { class Object; }

#define NBNLDHBELLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA7910)
#define NBNLDHBELLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA7950)
#define NBNLDHBELLO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAA7960)

inline static constexpr unsigned int NBNLDHBELLO___c_TypeDefinitionIndex = 29461;

	class NBNLDHBELLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNLDHBELLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO___C_CTOR_OFFSET))(this);
		}

		::NBNLDHBELLO* __cctor_b__28_0()
		{
			return ((::NBNLDHBELLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNLDHBELLO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
