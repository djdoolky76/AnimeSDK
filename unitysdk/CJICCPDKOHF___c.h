#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJICCPDKOHF;
namespace System { class Object; }

#define CJICCPDKOHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3B0A80)
#define CJICCPDKOHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B0AC0)
#define CJICCPDKOHF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F3B0AD0)

inline static constexpr unsigned int CJICCPDKOHF___c_TypeDefinitionIndex = 26898;

	class CJICCPDKOHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJICCPDKOHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF___C_CTOR_OFFSET))(this);
		}

		::CJICCPDKOHF* __cctor_b__23_0()
		{
			return ((::CJICCPDKOHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJICCPDKOHF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
