#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJALAJMGFHO;
namespace System { class Object; }

#define DJALAJMGFHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E197690)
#define DJALAJMGFHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1976D0)
#define DJALAJMGFHO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1976E0)

inline static constexpr unsigned int DJALAJMGFHO___c_TypeDefinitionIndex = 27950;

	class DJALAJMGFHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x321F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJALAJMGFHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO___C_CTOR_OFFSET))(this);
		}

		::DJALAJMGFHO* __cctor_b__23_0()
		{
			return ((::DJALAJMGFHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALAJMGFHO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
