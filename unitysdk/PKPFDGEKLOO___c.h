#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKPFDGEKLOO;
namespace System { class Object; }

#define PKPFDGEKLOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6A3C0)
#define PKPFDGEKLOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6A400)
#define PKPFDGEKLOO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF6A410)

inline static constexpr unsigned int PKPFDGEKLOO___c_TypeDefinitionIndex = 26700;

	class PKPFDGEKLOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPFDGEKLOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO___C_CTOR_OFFSET))(this);
		}

		::PKPFDGEKLOO* __cctor_b__33_0()
		{
			return ((::PKPFDGEKLOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFDGEKLOO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
