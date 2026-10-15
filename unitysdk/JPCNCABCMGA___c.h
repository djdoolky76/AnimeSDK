#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPCNCABCMGA;
namespace System { class Object; }

#define JPCNCABCMGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A1F80)
#define JPCNCABCMGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A1FC0)
#define JPCNCABCMGA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7A1FD0)

inline static constexpr unsigned int JPCNCABCMGA___c_TypeDefinitionIndex = 32397;

	class JPCNCABCMGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPCNCABCMGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA___C_CTOR_OFFSET))(this);
		}

		::JPCNCABCMGA* __cctor_b__23_0()
		{
			return ((::JPCNCABCMGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNCABCMGA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
