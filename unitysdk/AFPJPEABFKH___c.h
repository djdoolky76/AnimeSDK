#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFPJPEABFKH;
namespace System { class Object; }

#define AFPJPEABFKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E125270)
#define AFPJPEABFKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1252B0)
#define AFPJPEABFKH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1252C0)

inline static constexpr unsigned int AFPJPEABFKH___c_TypeDefinitionIndex = 29585;

	class AFPJPEABFKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFPJPEABFKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH___C_CTOR_OFFSET))(this);
		}

		::AFPJPEABFKH* __cctor_b__23_0()
		{
			return ((::AFPJPEABFKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
