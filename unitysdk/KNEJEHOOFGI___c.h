#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNEJEHOOFGI;
namespace System { class Object; }

#define KNEJEHOOFGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205A0380)
#define KNEJEHOOFGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205A03C0)
#define KNEJEHOOFGI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x205A03D0)

inline static constexpr unsigned int KNEJEHOOFGI___c_TypeDefinitionIndex = 33832;

	class KNEJEHOOFGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNEJEHOOFGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI___C_CTOR_OFFSET))(this);
		}

		::KNEJEHOOFGI* __cctor_b__28_0()
		{
			return ((::KNEJEHOOFGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
