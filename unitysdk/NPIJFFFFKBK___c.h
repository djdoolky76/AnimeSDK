#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPIJFFFFKBK;
namespace System { class Object; }

#define NPIJFFFFKBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB70470)
#define NPIJFFFFKBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB704A0)
#define NPIJFFFFKBK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB704B0)

inline static constexpr unsigned int NPIJFFFFKBK___c_TypeDefinitionIndex = 25747;

	class NPIJFFFFKBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDD30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPIJFFFFKBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK___C_CTOR_OFFSET))(this);
		}

		::NPIJFFFFKBK* __cctor_b__38_0()
		{
			return ((::NPIJFFFFKBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
