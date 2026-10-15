#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GABKFNAJIDD;
namespace System { class Object; }

#define GABKFNAJIDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4149D0)
#define GABKFNAJIDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E414A10)
#define GABKFNAJIDD___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E414A20)

inline static constexpr unsigned int GABKFNAJIDD___c_TypeDefinitionIndex = 30203;

	class GABKFNAJIDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GABKFNAJIDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABKFNAJIDD___C_CTOR_OFFSET))(this);
		}

		::GABKFNAJIDD* __cctor_b__53_0()
		{
			return ((::GABKFNAJIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GABKFNAJIDD___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
