#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLMGEFILDI;
namespace System { class Object; }

#define FKLMGEFILDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B7DC0)
#define FKLMGEFILDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B7E00)
#define FKLMGEFILDI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6B7E10)

inline static constexpr unsigned int FKLMGEFILDI___c_TypeDefinitionIndex = 31158;

	class FKLMGEFILDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x493E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKLMGEFILDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI___C_CTOR_OFFSET))(this);
		}

		::FKLMGEFILDI* __cctor_b__23_0()
		{
			return ((::FKLMGEFILDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMGEFILDI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
