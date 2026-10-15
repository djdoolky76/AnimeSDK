#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAGCLEDHOBD;
namespace System { class Object; }

#define BAGCLEDHOBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E787630)
#define BAGCLEDHOBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E787670)
#define BAGCLEDHOBD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E787680)

inline static constexpr unsigned int BAGCLEDHOBD___c_TypeDefinitionIndex = 30686;

	class BAGCLEDHOBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAGCLEDHOBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD___C_CTOR_OFFSET))(this);
		}

		::BAGCLEDHOBD* __cctor_b__23_0()
		{
			return ((::BAGCLEDHOBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCLEDHOBD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
