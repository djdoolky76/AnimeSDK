#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILEPGGBNADM;
namespace System { class Object; }

#define ILEPGGBNADM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B2150)
#define ILEPGGBNADM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206B2190)
#define ILEPGGBNADM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206B21A0)

inline static constexpr unsigned int ILEPGGBNADM___c_TypeDefinitionIndex = 29928;

	class ILEPGGBNADM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILEPGGBNADM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM___C_CTOR_OFFSET))(this);
		}

		::ILEPGGBNADM* __cctor_b__23_0()
		{
			return ((::ILEPGGBNADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPGGBNADM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
