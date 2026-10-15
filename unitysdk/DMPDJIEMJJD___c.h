#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMPDJIEMJJD;
namespace System { class Object; }

#define DMPDJIEMJJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C5DD0)
#define DMPDJIEMJJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C5E10)
#define DMPDJIEMJJD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1C5E20)

inline static constexpr unsigned int DMPDJIEMJJD___c_TypeDefinitionIndex = 28972;

	class DMPDJIEMJJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMPDJIEMJJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD___C_CTOR_OFFSET))(this);
		}

		::DMPDJIEMJJD* __cctor_b__23_0()
		{
			return ((::DMPDJIEMJJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPDJIEMJJD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
