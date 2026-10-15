#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCKADDLIGEB;
namespace System { class Object; }

#define HCKADDLIGEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E514A10)
#define HCKADDLIGEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E514A50)
#define HCKADDLIGEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E514A60)

inline static constexpr unsigned int HCKADDLIGEB___c_TypeDefinitionIndex = 25252;

	class HCKADDLIGEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AF80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCKADDLIGEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB___C_CTOR_OFFSET))(this);
		}

		::HCKADDLIGEB* __cctor_b__28_0()
		{
			return ((::HCKADDLIGEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKADDLIGEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
