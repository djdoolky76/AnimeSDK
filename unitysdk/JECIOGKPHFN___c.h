#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JECIOGKPHFN;
namespace System { class Object; }

#define JECIOGKPHFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA233E0)
#define JECIOGKPHFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA23420)
#define JECIOGKPHFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA23430)

inline static constexpr unsigned int JECIOGKPHFN___c_TypeDefinitionIndex = 27818;

	class JECIOGKPHFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JECIOGKPHFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN___C_CTOR_OFFSET))(this);
		}

		::JECIOGKPHFN* __cctor_b__23_0()
		{
			return ((::JECIOGKPHFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JECIOGKPHFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
