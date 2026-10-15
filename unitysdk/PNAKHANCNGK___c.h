#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNAKHANCNGK;
namespace System { class Object; }

#define PNAKHANCNGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF83EA0)
#define PNAKHANCNGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF83EE0)
#define PNAKHANCNGK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF83EF0)

inline static constexpr unsigned int PNAKHANCNGK___c_TypeDefinitionIndex = 29210;

	class PNAKHANCNGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNAKHANCNGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK___C_CTOR_OFFSET))(this);
		}

		::PNAKHANCNGK* __cctor_b__28_0()
		{
			return ((::PNAKHANCNGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKHANCNGK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
