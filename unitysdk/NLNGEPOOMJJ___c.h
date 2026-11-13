#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLNGEPOOMJJ;
namespace System { class Object; }

#define NLNGEPOOMJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2D040)
#define NLNGEPOOMJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2D080)
#define NLNGEPOOMJJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA2D090)

inline static constexpr unsigned int NLNGEPOOMJJ___c_TypeDefinitionIndex = 30581;

	class NLNGEPOOMJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLNGEPOOMJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ___C_CTOR_OFFSET))(this);
		}

		::NLNGEPOOMJJ* __cctor_b__23_0()
		{
			return ((::NLNGEPOOMJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGEPOOMJJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
