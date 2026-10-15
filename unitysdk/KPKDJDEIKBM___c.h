#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPKDJDEIKBM;
namespace System { class Object; }

#define KPKDJDEIKBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E891B80)
#define KPKDJDEIKBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E891BC0)
#define KPKDJDEIKBM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E891BD0)

inline static constexpr unsigned int KPKDJDEIKBM___c_TypeDefinitionIndex = 29265;

	class KPKDJDEIKBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22E30);
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
