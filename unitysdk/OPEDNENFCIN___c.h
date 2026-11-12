#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPEDNENFCIN;
namespace System { class Object; }

#define OPEDNENFCIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1A8B20)
#define OPEDNENFCIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A8B60)
#define OPEDNENFCIN___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F1A8B70)

inline static constexpr unsigned int OPEDNENFCIN___c_TypeDefinitionIndex = 29129;

	class OPEDNENFCIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPEDNENFCIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEDNENFCIN___C_CTOR_OFFSET))(this);
		}

		::OPEDNENFCIN* __cctor_b__53_0()
		{
			return ((::OPEDNENFCIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEDNENFCIN___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
