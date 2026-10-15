#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JILJOLKDALE;
namespace System { class Object; }

#define JILJOLKDALE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E723FB0)
#define JILJOLKDALE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E723FE0)
#define JILJOLKDALE___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E723FF0)

inline static constexpr unsigned int JILJOLKDALE___c_TypeDefinitionIndex = 25342;

	class JILJOLKDALE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JILJOLKDALE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILJOLKDALE___C_CTOR_OFFSET))(this);
		}

		::JILJOLKDALE* __cctor_b__53_0()
		{
			return ((::JILJOLKDALE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILJOLKDALE___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
