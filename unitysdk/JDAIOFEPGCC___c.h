#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDAIOFEPGCC;
namespace System { class Object; }

#define JDAIOFEPGCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA160)
#define JDAIOFEPGCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA1A0)
#define JDAIOFEPGCC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6DA1B0)

inline static constexpr unsigned int JDAIOFEPGCC___c_TypeDefinitionIndex = 28282;

	class JDAIOFEPGCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDAIOFEPGCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC___C_CTOR_OFFSET))(this);
		}

		::JDAIOFEPGCC* __cctor_b__38_0()
		{
			return ((::JDAIOFEPGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAIOFEPGCC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
