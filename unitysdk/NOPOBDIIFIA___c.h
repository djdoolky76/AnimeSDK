#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOPOBDIIFIA;
namespace System { class Object; }

#define NOPOBDIIFIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB64E40)
#define NOPOBDIIFIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB64E70)
#define NOPOBDIIFIA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB64E80)

inline static constexpr unsigned int NOPOBDIIFIA___c_TypeDefinitionIndex = 34161;

	class NOPOBDIIFIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC4B0);
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
