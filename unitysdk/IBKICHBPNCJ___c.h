#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBKICHBPNCJ;
namespace System { class Object; }

#define IBKICHBPNCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9355D0)
#define IBKICHBPNCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F935610)
#define IBKICHBPNCJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F935620)

inline static constexpr unsigned int IBKICHBPNCJ___c_TypeDefinitionIndex = 26974;

	class IBKICHBPNCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBKICHBPNCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKICHBPNCJ___C_CTOR_OFFSET))(this);
		}

		::IBKICHBPNCJ* __cctor_b__33_0()
		{
			return ((::IBKICHBPNCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKICHBPNCJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
