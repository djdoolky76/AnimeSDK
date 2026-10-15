#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHAGOFKBFAP;
namespace System { class Object; }

#define HHAGOFKBFAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E558A90)
#define HHAGOFKBFAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E558AD0)
#define HHAGOFKBFAP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E558AE0)

inline static constexpr unsigned int HHAGOFKBFAP___c_TypeDefinitionIndex = 32941;

	class HHAGOFKBFAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHAGOFKBFAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAGOFKBFAP___C_CTOR_OFFSET))(this);
		}

		::HHAGOFKBFAP* __cctor_b__48_0()
		{
			return ((::HHAGOFKBFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAGOFKBFAP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
