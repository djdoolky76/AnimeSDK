#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCOAAAFDNAA;
namespace System { class Object; }

#define PCOAAAFDNAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDDB30)
#define PCOAAAFDNAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDDB70)
#define PCOAAAFDNAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEDDB80)

inline static constexpr unsigned int PCOAAAFDNAA___c_TypeDefinitionIndex = 26144;

	class PCOAAAFDNAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCOAAAFDNAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA___C_CTOR_OFFSET))(this);
		}

		::PCOAAAFDNAA* __cctor_b__28_0()
		{
			return ((::PCOAAAFDNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOAAAFDNAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
