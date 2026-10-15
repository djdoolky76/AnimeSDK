#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NINBBMNLKEH;
namespace System { class Object; }

#define NINBBMNLKEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0A220)
#define NINBBMNLKEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0A260)
#define NINBBMNLKEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB0A270)

inline static constexpr unsigned int NINBBMNLKEH___c_TypeDefinitionIndex = 26155;

	class NINBBMNLKEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINBBMNLKEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH___C_CTOR_OFFSET))(this);
		}

		::NINBBMNLKEH* __cctor_b__28_0()
		{
			return ((::NINBBMNLKEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINBBMNLKEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
