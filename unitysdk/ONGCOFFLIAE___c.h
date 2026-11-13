#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONGCOFFLIAE;
namespace System { class Object; }

#define ONGCOFFLIAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2BFD0)
#define ONGCOFFLIAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2C010)
#define ONGCOFFLIAE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FC2C020)

inline static constexpr unsigned int ONGCOFFLIAE___c_TypeDefinitionIndex = 27646;

	class ONGCOFFLIAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONGCOFFLIAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCOFFLIAE___C_CTOR_OFFSET))(this);
		}

		::ONGCOFFLIAE* __cctor_b__43_0()
		{
			return ((::ONGCOFFLIAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCOFFLIAE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
