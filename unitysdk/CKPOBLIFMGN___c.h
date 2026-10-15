#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPOBLIFMGN;
namespace System { class Object; }

#define CKPOBLIFMGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4C40)
#define CKPOBLIFMGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4C70)
#define CKPOBLIFMGN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0C4C80)

inline static constexpr unsigned int CKPOBLIFMGN___c_TypeDefinitionIndex = 29640;

	class CKPOBLIFMGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPOBLIFMGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN___C_CTOR_OFFSET))(this);
		}

		::CKPOBLIFMGN* __cctor_b__23_0()
		{
			return ((::CKPOBLIFMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
