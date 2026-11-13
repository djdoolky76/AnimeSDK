#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLOHACFCDKF;
namespace System { class Object; }

#define PLOHACFCDKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201F1F60)
#define PLOHACFCDKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201F1FA0)
#define PLOHACFCDKF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x201F1FB0)

inline static constexpr unsigned int PLOHACFCDKF___c_TypeDefinitionIndex = 28647;

	class PLOHACFCDKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLOHACFCDKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOHACFCDKF___C_CTOR_OFFSET))(this);
		}

		::PLOHACFCDKF* __cctor_b__38_0()
		{
			return ((::PLOHACFCDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOHACFCDKF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
