#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONJIANLPDBE;
namespace System { class Object; }

#define ONJIANLPDBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE9A250)
#define ONJIANLPDBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE9A290)
#define ONJIANLPDBE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE9A2A0)

inline static constexpr unsigned int ONJIANLPDBE___c_TypeDefinitionIndex = 30719;

	class ONJIANLPDBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONJIANLPDBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE___C_CTOR_OFFSET))(this);
		}

		::ONJIANLPDBE* __cctor_b__23_0()
		{
			return ((::ONJIANLPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJIANLPDBE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
