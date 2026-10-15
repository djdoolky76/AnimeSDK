#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECOAKLBOLDA;
namespace System { class Object; }

#define ECOAKLBOLDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22A780)
#define ECOAKLBOLDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22A7B0)
#define ECOAKLBOLDA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E22A7C0)

inline static constexpr unsigned int ECOAKLBOLDA___c_TypeDefinitionIndex = 31279;

	class ECOAKLBOLDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECOAKLBOLDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA___C_CTOR_OFFSET))(this);
		}

		::ECOAKLBOLDA* __cctor_b__28_0()
		{
			return ((::ECOAKLBOLDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOAKLBOLDA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
