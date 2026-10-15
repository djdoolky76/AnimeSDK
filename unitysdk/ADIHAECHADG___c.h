#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADIHAECHADG;
namespace System { class Object; }

#define ADIHAECHADG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE2A10)
#define ADIHAECHADG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE2A50)
#define ADIHAECHADG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDE2A60)

inline static constexpr unsigned int ADIHAECHADG___c_TypeDefinitionIndex = 33365;

	class ADIHAECHADG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADIHAECHADG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG___C_CTOR_OFFSET))(this);
		}

		::ADIHAECHADG* __cctor_b__23_0()
		{
			return ((::ADIHAECHADG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
