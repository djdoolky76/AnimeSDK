#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAPLJKIPAOF;
namespace System { class Object; }

#define GAPLJKIPAOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC46DE0)
#define GAPLJKIPAOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC46E10)
#define GAPLJKIPAOF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FC46E20)

inline static constexpr unsigned int GAPLJKIPAOF___c_TypeDefinitionIndex = 26462;

	class GAPLJKIPAOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56910);
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
