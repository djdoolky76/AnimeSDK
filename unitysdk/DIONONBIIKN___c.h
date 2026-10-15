#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIONONBIIKN;
namespace System { class Object; }

#define DIONONBIIKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E196240)
#define DIONONBIIKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E196280)
#define DIONONBIIKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E196290)

inline static constexpr unsigned int DIONONBIIKN___c_TypeDefinitionIndex = 27160;

	class DIONONBIIKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIONONBIIKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN___C_CTOR_OFFSET))(this);
		}

		::DIONONBIIKN* __cctor_b__23_0()
		{
			return ((::DIONONBIIKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIONONBIIKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
