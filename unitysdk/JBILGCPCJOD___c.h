#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBILGCPCJOD;
namespace System { class Object; }

#define JBILGCPCJOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEFB680)
#define JBILGCPCJOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEFB6C0)
#define JBILGCPCJOD___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1FEFB6D0)

inline static constexpr unsigned int JBILGCPCJOD___c_TypeDefinitionIndex = 29325;

	class JBILGCPCJOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBILGCPCJOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBILGCPCJOD___C_CTOR_OFFSET))(this);
		}

		::JBILGCPCJOD* __cctor_b__63_0()
		{
			return ((::JBILGCPCJOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBILGCPCJOD___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
