#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIKBPKAKENO;
namespace System { class Object; }

#define DIKBPKAKENO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1945F0)
#define DIKBPKAKENO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E194620)
#define DIKBPKAKENO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E194630)

inline static constexpr unsigned int DIKBPKAKENO___c_TypeDefinitionIndex = 33375;

	class DIKBPKAKENO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIKBPKAKENO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO___C_CTOR_OFFSET))(this);
		}

		::DIKBPKAKENO* __cctor_b__28_0()
		{
			return ((::DIKBPKAKENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
