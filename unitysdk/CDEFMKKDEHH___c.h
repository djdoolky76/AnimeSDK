#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDEFMKKDEHH;
namespace System { class Object; }

#define CDEFMKKDEHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F34A160)
#define CDEFMKKDEHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F34A1A0)
#define CDEFMKKDEHH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F34A1B0)

inline static constexpr unsigned int CDEFMKKDEHH___c_TypeDefinitionIndex = 29932;

	class CDEFMKKDEHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDEFMKKDEHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH___C_CTOR_OFFSET))(this);
		}

		::CDEFMKKDEHH* __cctor_b__23_0()
		{
			return ((::CDEFMKKDEHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
