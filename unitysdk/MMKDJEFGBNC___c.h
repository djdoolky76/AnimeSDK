#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMKDJEFGBNC;
namespace System { class Object; }

#define MMKDJEFGBNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA60FC0)
#define MMKDJEFGBNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA61000)
#define MMKDJEFGBNC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA61010)

inline static constexpr unsigned int MMKDJEFGBNC___c_TypeDefinitionIndex = 33743;

	class MMKDJEFGBNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMKDJEFGBNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC___C_CTOR_OFFSET))(this);
		}

		::MMKDJEFGBNC* __cctor_b__28_0()
		{
			return ((::MMKDJEFGBNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKDJEFGBNC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
