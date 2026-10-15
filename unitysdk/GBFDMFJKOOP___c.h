#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBFDMFJKOOP;
namespace System { class Object; }

#define GBFDMFJKOOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FCDC0)
#define GBFDMFJKOOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FCE00)
#define GBFDMFJKOOP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E3FCE10)

inline static constexpr unsigned int GBFDMFJKOOP___c_TypeDefinitionIndex = 28759;

	class GBFDMFJKOOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBFDMFJKOOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBFDMFJKOOP___C_CTOR_OFFSET))(this);
		}

		::GBFDMFJKOOP* __cctor_b__48_0()
		{
			return ((::GBFDMFJKOOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBFDMFJKOOP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
