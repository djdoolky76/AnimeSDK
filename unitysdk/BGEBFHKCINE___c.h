#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGEBFHKCINE;
namespace System { class Object; }

#define BGEBFHKCINE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA44DA0)
#define BGEBFHKCINE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA44DE0)
#define BGEBFHKCINE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA44DF0)

inline static constexpr unsigned int BGEBFHKCINE___c_TypeDefinitionIndex = 27426;

	class BGEBFHKCINE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGEBFHKCINE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE___C_CTOR_OFFSET))(this);
		}

		::BGEBFHKCINE* __cctor_b__23_0()
		{
			return ((::BGEBFHKCINE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEBFHKCINE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
