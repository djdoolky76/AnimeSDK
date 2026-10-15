#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HACIGDEEMCJ;
namespace System { class Object; }

#define HACIGDEEMCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D5000)
#define HACIGDEEMCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D5040)
#define HACIGDEEMCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4D5050)

inline static constexpr unsigned int HACIGDEEMCJ___c_TypeDefinitionIndex = 28334;

	class HACIGDEEMCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HACIGDEEMCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ___C_CTOR_OFFSET))(this);
		}

		::HACIGDEEMCJ* __cctor_b__23_0()
		{
			return ((::HACIGDEEMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
