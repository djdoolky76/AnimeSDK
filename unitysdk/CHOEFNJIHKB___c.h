#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHOEFNJIHKB;
namespace System { class Object; }

#define CHOEFNJIHKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09F710)
#define CHOEFNJIHKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09F750)
#define CHOEFNJIHKB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E09F760)

inline static constexpr unsigned int CHOEFNJIHKB___c_TypeDefinitionIndex = 30117;

	class CHOEFNJIHKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHOEFNJIHKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB___C_CTOR_OFFSET))(this);
		}

		::CHOEFNJIHKB* __cctor_b__23_0()
		{
			return ((::CHOEFNJIHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOEFNJIHKB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
