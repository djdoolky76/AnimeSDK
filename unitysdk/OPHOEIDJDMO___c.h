#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPHOEIDJDMO;
namespace System { class Object; }

#define OPHOEIDJDMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1AB770)
#define OPHOEIDJDMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AB7B0)
#define OPHOEIDJDMO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1AB7C0)

inline static constexpr unsigned int OPHOEIDJDMO___c_TypeDefinitionIndex = 28995;

	class OPHOEIDJDMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPHOEIDJDMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO___C_CTOR_OFFSET))(this);
		}

		::OPHOEIDJDMO* __cctor_b__23_0()
		{
			return ((::OPHOEIDJDMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
