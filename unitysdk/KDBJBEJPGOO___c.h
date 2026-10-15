#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDBJBEJPGOO;
namespace System { class Object; }

#define KDBJBEJPGOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D06D0)
#define KDBJBEJPGOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D0710)
#define KDBJBEJPGOO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7D0720)

inline static constexpr unsigned int KDBJBEJPGOO___c_TypeDefinitionIndex = 34803;

	class KDBJBEJPGOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDBJBEJPGOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO___C_CTOR_OFFSET))(this);
		}

		::KDBJBEJPGOO* __cctor_b__23_0()
		{
			return ((::KDBJBEJPGOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBJBEJPGOO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
