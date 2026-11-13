#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGBPIBNACKP;
namespace System { class Object; }

#define JGBPIBNACKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2049ED90)
#define JGBPIBNACKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2049EDD0)
#define JGBPIBNACKP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2049EDE0)

inline static constexpr unsigned int JGBPIBNACKP___c_TypeDefinitionIndex = 35842;

	class JGBPIBNACKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGBPIBNACKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP___C_CTOR_OFFSET))(this);
		}

		::JGBPIBNACKP* __cctor_b__23_0()
		{
			return ((::JGBPIBNACKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPIBNACKP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
