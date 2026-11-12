#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCOAAAFDNAA;
namespace System { class Object; }

#define PCOAAAFDNAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1D5A70)
#define PCOAAAFDNAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D5AB0)
#define PCOAAAFDNAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1D5AC0)

inline static constexpr unsigned int PCOAAAFDNAA___c_TypeDefinitionIndex = 26671;

	class PCOAAAFDNAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DE60);
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
