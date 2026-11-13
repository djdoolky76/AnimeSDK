#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLIKPBNDNAG;
namespace System { class Object; }

#define LLIKPBNDNAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF485E0)
#define LLIKPBNDNAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF48620)
#define LLIKPBNDNAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF48630)

inline static constexpr unsigned int LLIKPBNDNAG___c_TypeDefinitionIndex = 30607;

	class LLIKPBNDNAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLIKPBNDNAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG___C_CTOR_OFFSET))(this);
		}

		::LLIKPBNDNAG* __cctor_b__23_0()
		{
			return ((::LLIKPBNDNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLIKPBNDNAG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
