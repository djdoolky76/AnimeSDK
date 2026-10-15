#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJNPOBAMKKF;
namespace System { class Object; }

#define HJNPOBAMKKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AC230)
#define HJNPOBAMKKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AC270)
#define HJNPOBAMKKF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5AC280)

inline static constexpr unsigned int HJNPOBAMKKF___c_TypeDefinitionIndex = 25248;

	class HJNPOBAMKKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJNPOBAMKKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF___C_CTOR_OFFSET))(this);
		}

		::HJNPOBAMKKF* __cctor_b__33_0()
		{
			return ((::HJNPOBAMKKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNPOBAMKKF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
