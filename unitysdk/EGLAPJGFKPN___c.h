#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGLAPJGFKPN;
namespace System { class Object; }

#define EGLAPJGFKPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2693C0)
#define EGLAPJGFKPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2693F0)
#define EGLAPJGFKPN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E269400)

inline static constexpr unsigned int EGLAPJGFKPN___c_TypeDefinitionIndex = 32855;

	class EGLAPJGFKPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLAPJGFKPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN___C_CTOR_OFFSET))(this);
		}

		::EGLAPJGFKPN* __cctor_b__23_0()
		{
			return ((::EGLAPJGFKPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
