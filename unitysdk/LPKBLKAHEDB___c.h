#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPKBLKAHEDB;
namespace System { class Object; }

#define LPKBLKAHEDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAA140)
#define LPKBLKAHEDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAA180)
#define LPKBLKAHEDB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FBAA190)

inline static constexpr unsigned int LPKBLKAHEDB___c_TypeDefinitionIndex = 27017;

	class LPKBLKAHEDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x479C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKBLKAHEDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB___C_CTOR_OFFSET))(this);
		}

		::LPKBLKAHEDB* __cctor_b__28_0()
		{
			return ((::LPKBLKAHEDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
