#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPKDJDEIKBM;
namespace System { class Object; }

#define KPKDJDEIKBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBFBB10)
#define KPKDJDEIKBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFBB50)
#define KPKDJDEIKBM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBFBB60)

inline static constexpr unsigned int KPKDJDEIKBM___c_TypeDefinitionIndex = 29920;

	class KPKDJDEIKBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPKDJDEIKBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM___C_CTOR_OFFSET))(this);
		}

		::KPKDJDEIKBM* __cctor_b__23_0()
		{
			return ((::KPKDJDEIKBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDJDEIKBM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
