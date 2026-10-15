#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DECHJACNLGP;
namespace System { class Object; }

#define DECHJACNLGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1909E0)
#define DECHJACNLGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E190A20)
#define DECHJACNLGP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E190A30)

inline static constexpr unsigned int DECHJACNLGP___c_TypeDefinitionIndex = 27283;

	class DECHJACNLGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DECHJACNLGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP___C_CTOR_OFFSET))(this);
		}

		::DECHJACNLGP* __cctor_b__28_0()
		{
			return ((::DECHJACNLGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECHJACNLGP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
