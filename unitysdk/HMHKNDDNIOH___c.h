#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMHKNDDNIOH;
namespace System { class Object; }

#define HMHKNDDNIOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8CBBA0)
#define HMHKNDDNIOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8CBBD0)
#define HMHKNDDNIOH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F8CBBE0)

inline static constexpr unsigned int HMHKNDDNIOH___c_TypeDefinitionIndex = 34992;

	class HMHKNDDNIOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMHKNDDNIOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH___C_CTOR_OFFSET))(this);
		}

		::HMHKNDDNIOH* __cctor_b__43_0()
		{
			return ((::HMHKNDDNIOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHKNDDNIOH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
