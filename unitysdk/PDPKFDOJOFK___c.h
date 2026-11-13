#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDPKFDOJOFK;
namespace System { class Object; }

#define PDPKFDOJOFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20666E20)
#define PDPKFDOJOFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20666E60)
#define PDPKFDOJOFK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20666E70)

inline static constexpr unsigned int PDPKFDOJOFK___c_TypeDefinitionIndex = 31251;

	class PDPKFDOJOFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDPKFDOJOFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK___C_CTOR_OFFSET))(this);
		}

		::PDPKFDOJOFK* __cctor_b__28_0()
		{
			return ((::PDPKFDOJOFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
