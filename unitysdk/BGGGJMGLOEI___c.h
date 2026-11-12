#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGGGJMGLOEI;
namespace System { class Object; }

#define BGGGJMGLOEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFF6840)
#define BGGGJMGLOEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF6880)
#define BGGGJMGLOEI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EFF6890)

inline static constexpr unsigned int BGGGJMGLOEI___c_TypeDefinitionIndex = 32860;

	class BGGGJMGLOEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGGJMGLOEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI___C_CTOR_OFFSET))(this);
		}

		::BGGGJMGLOEI* __cctor_b__23_0()
		{
			return ((::BGGGJMGLOEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
