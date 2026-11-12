#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKGJBAGOHFH;
namespace System { class Object; }

#define HKGJBAGOHFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8AD8F0)
#define HKGJBAGOHFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8AD920)
#define HKGJBAGOHFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8AD930)

inline static constexpr unsigned int HKGJBAGOHFH___c_TypeDefinitionIndex = 26962;

	class HKGJBAGOHFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKGJBAGOHFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH___C_CTOR_OFFSET))(this);
		}

		::HKGJBAGOHFH* __cctor_b__28_0()
		{
			return ((::HKGJBAGOHFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGJBAGOHFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
