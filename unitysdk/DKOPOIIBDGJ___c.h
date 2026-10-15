#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKOPOIIBDGJ;
namespace System { class Object; }

#define DKOPOIIBDGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AD920)
#define DKOPOIIBDGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AD960)
#define DKOPOIIBDGJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1AD970)

inline static constexpr unsigned int DKOPOIIBDGJ___c_TypeDefinitionIndex = 34301;

	class DKOPOIIBDGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKOPOIIBDGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ___C_CTOR_OFFSET))(this);
		}

		::DKOPOIIBDGJ* __cctor_b__23_0()
		{
			return ((::DKOPOIIBDGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOPOIIBDGJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
