#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFJIMBJCED;
namespace System { class Object; }

#define FDFJIMBJCED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E356E00)
#define FDFJIMBJCED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E356E40)
#define FDFJIMBJCED___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E356E50)

inline static constexpr unsigned int FDFJIMBJCED___c_TypeDefinitionIndex = 25971;

	class FDFJIMBJCED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFJIMBJCED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED___C_CTOR_OFFSET))(this);
		}

		::FDFJIMBJCED* __cctor_b__28_0()
		{
			return ((::FDFJIMBJCED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJIMBJCED___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
