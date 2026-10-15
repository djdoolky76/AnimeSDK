#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDKJELMPONH;
namespace System { class Object; }

#define EDKJELMPONH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E233E70)
#define EDKJELMPONH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E233EB0)
#define EDKJELMPONH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E233EC0)

inline static constexpr unsigned int EDKJELMPONH___c_TypeDefinitionIndex = 27497;

	class EDKJELMPONH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDKJELMPONH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH___C_CTOR_OFFSET))(this);
		}

		::EDKJELMPONH* __cctor_b__28_0()
		{
			return ((::EDKJELMPONH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
