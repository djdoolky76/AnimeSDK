#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIADAFCBLKH;
namespace System { class Object; }

#define HIADAFCBLKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5606C0)
#define HIADAFCBLKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E560700)
#define HIADAFCBLKH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E560710)

inline static constexpr unsigned int HIADAFCBLKH___c_TypeDefinitionIndex = 30832;

	class HIADAFCBLKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIADAFCBLKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH___C_CTOR_OFFSET))(this);
		}

		::HIADAFCBLKH* __cctor_b__28_0()
		{
			return ((::HIADAFCBLKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIADAFCBLKH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
