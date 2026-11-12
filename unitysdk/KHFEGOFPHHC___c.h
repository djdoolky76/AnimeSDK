#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHFEGOFPHHC;
namespace System { class Object; }

#define KHFEGOFPHHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB5C260)
#define KHFEGOFPHHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB5C2A0)
#define KHFEGOFPHHC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB5C2B0)

inline static constexpr unsigned int KHFEGOFPHHC___c_TypeDefinitionIndex = 29517;

	class KHFEGOFPHHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHFEGOFPHHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC___C_CTOR_OFFSET))(this);
		}

		::KHFEGOFPHHC* __cctor_b__23_0()
		{
			return ((::KHFEGOFPHHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
