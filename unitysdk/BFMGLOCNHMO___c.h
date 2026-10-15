#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMGLOCNHMO;
namespace System { class Object; }

#define BFMGLOCNHMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA41B90)
#define BFMGLOCNHMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA41BD0)
#define BFMGLOCNHMO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA41BE0)

inline static constexpr unsigned int BFMGLOCNHMO___c_TypeDefinitionIndex = 31649;

	class BFMGLOCNHMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFMGLOCNHMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMGLOCNHMO___C_CTOR_OFFSET))(this);
		}

		::BFMGLOCNHMO* __cctor_b__18_0()
		{
			return ((::BFMGLOCNHMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFMGLOCNHMO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
