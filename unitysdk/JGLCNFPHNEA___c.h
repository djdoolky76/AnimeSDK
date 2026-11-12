#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGLCNFPHNEA;
namespace System { class Object; }

#define JGLCNFPHNEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA4C840)
#define JGLCNFPHNEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4C870)
#define JGLCNFPHNEA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FA4C880)

inline static constexpr unsigned int JGLCNFPHNEA___c_TypeDefinitionIndex = 28457;

	class JGLCNFPHNEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGLCNFPHNEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA___C_CTOR_OFFSET))(this);
		}

		::JGLCNFPHNEA* __cctor_b__48_0()
		{
			return ((::JGLCNFPHNEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLCNFPHNEA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
