#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHMABONKBP;
namespace System { class Object; }

#define BAHMABONKBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205781E0)
#define BAHMABONKBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20578220)
#define BAHMABONKBP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x20578230)

inline static constexpr unsigned int BAHMABONKBP___c_TypeDefinitionIndex = 35881;

	class BAHMABONKBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHMABONKBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP___C_CTOR_OFFSET))(this);
		}

		::BAHMABONKBP* __cctor_b__53_0()
		{
			return ((::BAHMABONKBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
