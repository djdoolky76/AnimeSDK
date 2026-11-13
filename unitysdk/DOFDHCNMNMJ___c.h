#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOFDHCNMNMJ;
namespace System { class Object; }

#define DOFDHCNMNMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F759220)
#define DOFDHCNMNMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F759260)
#define DOFDHCNMNMJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F759270)

inline static constexpr unsigned int DOFDHCNMNMJ___c_TypeDefinitionIndex = 28969;

	class DOFDHCNMNMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOFDHCNMNMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ___C_CTOR_OFFSET))(this);
		}

		::DOFDHCNMNMJ* __cctor_b__33_0()
		{
			return ((::DOFDHCNMNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFDHCNMNMJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
