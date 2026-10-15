#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAMNNJKJOMM;
namespace System { class Object; }

#define DAMNNJKJOMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E154BF0)
#define DAMNNJKJOMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E154C30)
#define DAMNNJKJOMM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E154C40)

inline static constexpr unsigned int DAMNNJKJOMM___c_TypeDefinitionIndex = 25157;

	class DAMNNJKJOMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAMNNJKJOMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM___C_CTOR_OFFSET))(this);
		}

		::DAMNNJKJOMM* __cctor_b__38_0()
		{
			return ((::DAMNNJKJOMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMNNJKJOMM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
