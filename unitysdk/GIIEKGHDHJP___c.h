#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIIEKGHDHJP;
namespace System { class Object; }

#define GIIEKGHDHJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E499720)
#define GIIEKGHDHJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E499750)
#define GIIEKGHDHJP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E499760)

inline static constexpr unsigned int GIIEKGHDHJP___c_TypeDefinitionIndex = 26437;

	class GIIEKGHDHJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIIEKGHDHJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP___C_CTOR_OFFSET))(this);
		}

		::GIIEKGHDHJP* __cctor_b__38_0()
		{
			return ((::GIIEKGHDHJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIEKGHDHJP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
