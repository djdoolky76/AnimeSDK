#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOBOKLMODGC;
namespace System { class Object; }

#define LOBOKLMODGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200D01B0)
#define LOBOKLMODGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200D01F0)
#define LOBOKLMODGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x200D0200)

inline static constexpr unsigned int LOBOKLMODGC___c_TypeDefinitionIndex = 31993;

	class LOBOKLMODGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOBOKLMODGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC___C_CTOR_OFFSET))(this);
		}

		::LOBOKLMODGC* __cctor_b__28_0()
		{
			return ((::LOBOKLMODGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBOKLMODGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
