#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEOGFNDKCIL;
namespace System { class Object; }

#define BEOGFNDKCIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA65B80)
#define BEOGFNDKCIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA65BC0)
#define BEOGFNDKCIL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA65BD0)

inline static constexpr unsigned int BEOGFNDKCIL___c_TypeDefinitionIndex = 28761;

	class BEOGFNDKCIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEOGFNDKCIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL___C_CTOR_OFFSET))(this);
		}

		::BEOGFNDKCIL* __cctor_b__23_0()
		{
			return ((::BEOGFNDKCIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEOGFNDKCIL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
