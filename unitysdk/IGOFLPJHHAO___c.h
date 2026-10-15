#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGOFLPJHHAO;
namespace System { class Object; }

#define IGOFLPJHHAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E655150)
#define IGOFLPJHHAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E655190)
#define IGOFLPJHHAO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6551A0)

inline static constexpr unsigned int IGOFLPJHHAO___c_TypeDefinitionIndex = 33465;

	class IGOFLPJHHAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGOFLPJHHAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO___C_CTOR_OFFSET))(this);
		}

		::IGOFLPJHHAO* __cctor_b__23_0()
		{
			return ((::IGOFLPJHHAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOFLPJHHAO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
