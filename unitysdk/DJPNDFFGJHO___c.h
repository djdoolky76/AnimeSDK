#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJPNDFFGJHO;
namespace System { class Object; }

#define DJPNDFFGJHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4AF530)
#define DJPNDFFGJHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4AF560)
#define DJPNDFFGJHO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4AF570)

inline static constexpr unsigned int DJPNDFFGJHO___c_TypeDefinitionIndex = 35020;

	class DJPNDFFGJHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJPNDFFGJHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO___C_CTOR_OFFSET))(this);
		}

		::DJPNDFFGJHO* __cctor_b__23_0()
		{
			return ((::DJPNDFFGJHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
