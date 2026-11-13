#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKBGIPCAGGH;
namespace System { class Object; }

#define KKBGIPCAGGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFE78B0)
#define KKBGIPCAGGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE78F0)
#define KKBGIPCAGGH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FFE7900)

inline static constexpr unsigned int KKBGIPCAGGH___c_TypeDefinitionIndex = 29860;

	class KKBGIPCAGGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKBGIPCAGGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH___C_CTOR_OFFSET))(this);
		}

		::KKBGIPCAGGH* __cctor_b__43_0()
		{
			return ((::KKBGIPCAGGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBGIPCAGGH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
