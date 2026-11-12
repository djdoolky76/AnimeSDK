#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGFBEAPMGJM;
namespace System { class Object; }

#define OGFBEAPMGJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F6DF0)
#define OGFBEAPMGJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F6E30)
#define OGFBEAPMGJM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0F6E40)

inline static constexpr unsigned int OGFBEAPMGJM___c_TypeDefinitionIndex = 35553;

	class OGFBEAPMGJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGFBEAPMGJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFBEAPMGJM___C_CTOR_OFFSET))(this);
		}

		::OGFBEAPMGJM* __cctor_b__23_0()
		{
			return ((::OGFBEAPMGJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFBEAPMGJM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
