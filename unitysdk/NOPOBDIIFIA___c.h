#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOPOBDIIFIA;
namespace System { class Object; }

#define NOPOBDIIFIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F086930)
#define NOPOBDIIFIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F086960)
#define NOPOBDIIFIA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F086970)

inline static constexpr unsigned int NOPOBDIIFIA___c_TypeDefinitionIndex = 35076;

	class NOPOBDIIFIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOPOBDIIFIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA___C_CTOR_OFFSET))(this);
		}

		::NOPOBDIIFIA* __cctor_b__28_0()
		{
			return ((::NOPOBDIIFIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPOBDIIFIA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
