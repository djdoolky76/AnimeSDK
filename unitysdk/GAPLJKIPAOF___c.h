#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAPLJKIPAOF;
namespace System { class Object; }

#define GAPLJKIPAOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7147F0)
#define GAPLJKIPAOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F714820)
#define GAPLJKIPAOF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F714830)

inline static constexpr unsigned int GAPLJKIPAOF___c_TypeDefinitionIndex = 26462;

	class GAPLJKIPAOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x551B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAPLJKIPAOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF___C_CTOR_OFFSET))(this);
		}

		::GAPLJKIPAOF* __cctor_b__38_0()
		{
			return ((::GAPLJKIPAOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLJKIPAOF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
