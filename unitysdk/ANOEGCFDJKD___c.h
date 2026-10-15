#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANOEGCFDJKD;
namespace System { class Object; }

#define ANOEGCFDJKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E665C50)
#define ANOEGCFDJKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E665C90)
#define ANOEGCFDJKD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E665CA0)

inline static constexpr unsigned int ANOEGCFDJKD___c_TypeDefinitionIndex = 32530;

	class ANOEGCFDJKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FDB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANOEGCFDJKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD___C_CTOR_OFFSET))(this);
		}

		::ANOEGCFDJKD* __cctor_b__23_0()
		{
			return ((::ANOEGCFDJKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOEGCFDJKD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
