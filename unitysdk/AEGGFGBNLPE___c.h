#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEGGFGBNLPE;
namespace System { class Object; }

#define AEGGFGBNLPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC880)
#define AEGGFGBNLPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEC8C0)
#define AEGGFGBNLPE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDEC8D0)

inline static constexpr unsigned int AEGGFGBNLPE___c_TypeDefinitionIndex = 31697;

	class AEGGFGBNLPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGGFGBNLPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE___C_CTOR_OFFSET))(this);
		}

		::AEGGFGBNLPE* __cctor_b__23_0()
		{
			return ((::AEGGFGBNLPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGGFGBNLPE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
