#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEDNNHAOHAB;
namespace System { class Object; }

#define OEDNNHAOHAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB5BCB0)
#define OEDNNHAOHAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB5BCF0)
#define OEDNNHAOHAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB5BD00)

inline static constexpr unsigned int OEDNNHAOHAB___c_TypeDefinitionIndex = 33566;

	class OEDNNHAOHAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDNNHAOHAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB___C_CTOR_OFFSET))(this);
		}

		::OEDNNHAOHAB* __cctor_b__23_0()
		{
			return ((::OEDNNHAOHAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
