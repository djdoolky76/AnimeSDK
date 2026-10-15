#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGHEPMFILPE;
namespace System { class Object; }

#define NGHEPMFILPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3370)
#define NGHEPMFILPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE33B0)
#define NGHEPMFILPE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAE33C0)

inline static constexpr unsigned int NGHEPMFILPE___c_TypeDefinitionIndex = 27179;

	class NGHEPMFILPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGHEPMFILPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE___C_CTOR_OFFSET))(this);
		}

		::NGHEPMFILPE* __cctor_b__28_0()
		{
			return ((::NGHEPMFILPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHEPMFILPE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
