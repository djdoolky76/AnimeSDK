#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPKIDILKOAK;
namespace System { class Object; }

#define JPKIDILKOAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D7C90)
#define JPKIDILKOAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D7CD0)
#define JPKIDILKOAK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7D7CE0)

inline static constexpr unsigned int JPKIDILKOAK___c_TypeDefinitionIndex = 25155;

	class JPKIDILKOAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPKIDILKOAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKIDILKOAK___C_CTOR_OFFSET))(this);
		}

		::JPKIDILKOAK* __cctor_b__28_0()
		{
			return ((::JPKIDILKOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKIDILKOAK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
