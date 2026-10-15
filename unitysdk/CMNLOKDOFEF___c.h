#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMNLOKDOFEF;
namespace System { class Object; }

#define CMNLOKDOFEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7820)
#define CMNLOKDOFEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7860)
#define CMNLOKDOFEF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0D7870)

inline static constexpr unsigned int CMNLOKDOFEF___c_TypeDefinitionIndex = 25751;

	class CMNLOKDOFEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMNLOKDOFEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNLOKDOFEF___C_CTOR_OFFSET))(this);
		}

		::CMNLOKDOFEF* __cctor_b__23_0()
		{
			return ((::CMNLOKDOFEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNLOKDOFEF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
