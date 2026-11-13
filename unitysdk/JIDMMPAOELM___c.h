#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIDMMPAOELM;
namespace System { class Object; }

#define JIDMMPAOELM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204B32C0)
#define JIDMMPAOELM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204B3300)
#define JIDMMPAOELM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204B3310)

inline static constexpr unsigned int JIDMMPAOELM___c_TypeDefinitionIndex = 35146;

	class JIDMMPAOELM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIDMMPAOELM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM___C_CTOR_OFFSET))(this);
		}

		::JIDMMPAOELM* __cctor_b__28_0()
		{
			return ((::JIDMMPAOELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDMMPAOELM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
