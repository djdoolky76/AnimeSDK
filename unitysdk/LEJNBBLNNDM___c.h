#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJNBBLNNDM;
namespace System { class Object; }

#define LEJNBBLNNDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC54290)
#define LEJNBBLNNDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC542D0)
#define LEJNBBLNNDM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC542E0)

inline static constexpr unsigned int LEJNBBLNNDM___c_TypeDefinitionIndex = 32657;

	class LEJNBBLNNDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2ED10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEJNBBLNNDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM___C_CTOR_OFFSET))(this);
		}

		::LEJNBBLNNDM* __cctor_b__28_0()
		{
			return ((::LEJNBBLNNDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
