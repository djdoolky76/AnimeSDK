#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFJPIJJDNDC;
namespace System { class Object; }

#define JFJPIJJDNDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA3BFA0)
#define JFJPIJJDNDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA3BFD0)
#define JFJPIJJDNDC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA3BFE0)

inline static constexpr unsigned int JFJPIJJDNDC___c_TypeDefinitionIndex = 34890;

	class JFJPIJJDNDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFJPIJJDNDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC___C_CTOR_OFFSET))(this);
		}

		::JFJPIJJDNDC* __cctor_b__28_0()
		{
			return ((::JFJPIJJDNDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
