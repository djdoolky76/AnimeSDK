#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBGHIJGFAFD;
namespace System { class Object; }

#define LBGHIJGFAFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AFEA0)
#define LBGHIJGFAFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AFED0)
#define LBGHIJGFAFD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8AFEE0)

inline static constexpr unsigned int LBGHIJGFAFD___c_TypeDefinitionIndex = 33969;

	class LBGHIJGFAFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBGHIJGFAFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHIJGFAFD___C_CTOR_OFFSET))(this);
		}

		::LBGHIJGFAFD* __cctor_b__33_0()
		{
			return ((::LBGHIJGFAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGHIJGFAFD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
