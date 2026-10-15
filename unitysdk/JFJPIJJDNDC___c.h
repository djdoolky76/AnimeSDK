#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFJPIJJDNDC;
namespace System { class Object; }

#define JFJPIJJDNDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72D6E0)
#define JFJPIJJDNDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72D710)
#define JFJPIJJDNDC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E72D720)

inline static constexpr unsigned int JFJPIJJDNDC___c_TypeDefinitionIndex = 33975;

	class JFJPIJJDNDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FDC0);
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
