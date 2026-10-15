#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPCINMGGCNI;
namespace System { class Object; }

#define LPCINMGGCNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C9760)
#define LPCINMGGCNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C9790)
#define LPCINMGGCNI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9C97A0)

inline static constexpr unsigned int LPCINMGGCNI___c_TypeDefinitionIndex = 27476;

	class LPCINMGGCNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPCINMGGCNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI___C_CTOR_OFFSET))(this);
		}

		::LPCINMGGCNI* __cctor_b__23_0()
		{
			return ((::LPCINMGGCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCINMGGCNI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
