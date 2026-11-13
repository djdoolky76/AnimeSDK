#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLOICBDOCNJ;
namespace System { class Object; }

#define FLOICBDOCNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE45D70)
#define FLOICBDOCNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE45DB0)
#define FLOICBDOCNJ___C___CCTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1FE45DC0)

inline static constexpr unsigned int FLOICBDOCNJ___c_TypeDefinitionIndex = 25559;

	class FLOICBDOCNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOICBDOCNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOICBDOCNJ___C_CTOR_OFFSET))(this);
		}

		::FLOICBDOCNJ* __cctor_b__103_0()
		{
			return ((::FLOICBDOCNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOICBDOCNJ___C___CCTOR_B__103_0_OFFSET))(this);
		}

	};
