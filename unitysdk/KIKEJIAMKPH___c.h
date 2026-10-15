#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKEJIAMKPH;
namespace System { class Object; }

#define KIKEJIAMKPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E833F00)
#define KIKEJIAMKPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E833F40)
#define KIKEJIAMKPH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E833F50)

inline static constexpr unsigned int KIKEJIAMKPH___c_TypeDefinitionIndex = 28968;

	class KIKEJIAMKPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKEJIAMKPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH___C_CTOR_OFFSET))(this);
		}

		::KIKEJIAMKPH* __cctor_b__28_0()
		{
			return ((::KIKEJIAMKPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKEJIAMKPH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
