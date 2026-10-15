#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOGPMBGJIDH;
namespace System { class Object; }

#define HOGPMBGJIDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB5D0)
#define HOGPMBGJIDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB600)
#define HOGPMBGJIDH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5BB610)

inline static constexpr unsigned int HOGPMBGJIDH___c_TypeDefinitionIndex = 30411;

	class HOGPMBGJIDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOGPMBGJIDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH___C_CTOR_OFFSET))(this);
		}

		::HOGPMBGJIDH* __cctor_b__23_0()
		{
			return ((::HOGPMBGJIDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPMBGJIDH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
