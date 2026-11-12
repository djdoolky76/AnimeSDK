#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PANAGPMIIIH;
namespace System { class Object; }

#define PANAGPMIIIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1BB550)
#define PANAGPMIIIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1BB590)
#define PANAGPMIIIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1BB5A0)

inline static constexpr unsigned int PANAGPMIIIH___c_TypeDefinitionIndex = 28920;

	class PANAGPMIIIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PANAGPMIIIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH___C_CTOR_OFFSET))(this);
		}

		::PANAGPMIIIH* __cctor_b__23_0()
		{
			return ((::PANAGPMIIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGPMIIIH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
