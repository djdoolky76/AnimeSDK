#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHICCFONLEC;
namespace System { class Object; }

#define OHICCFONLEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE620B0)
#define OHICCFONLEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE620F0)
#define OHICCFONLEC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE62100)

inline static constexpr unsigned int OHICCFONLEC___c_TypeDefinitionIndex = 34243;

	class OHICCFONLEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHICCFONLEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC___C_CTOR_OFFSET))(this);
		}

		::OHICCFONLEC* __cctor_b__38_0()
		{
			return ((::OHICCFONLEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHICCFONLEC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
