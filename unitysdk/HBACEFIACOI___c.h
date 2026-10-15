#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBACEFIACOI;
namespace System { class Object; }

#define HBACEFIACOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DEF60)
#define HBACEFIACOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DEFA0)
#define HBACEFIACOI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4DEFB0)

inline static constexpr unsigned int HBACEFIACOI___c_TypeDefinitionIndex = 34761;

	class HBACEFIACOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x253B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBACEFIACOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI___C_CTOR_OFFSET))(this);
		}

		::HBACEFIACOI* __cctor_b__23_0()
		{
			return ((::HBACEFIACOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBACEFIACOI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
