#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDJMFNHFLN;
namespace System { class Object; }

#define CDDJMFNHFLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E082DF0)
#define CDDJMFNHFLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E082E30)
#define CDDJMFNHFLN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E082E40)

inline static constexpr unsigned int CDDJMFNHFLN___c_TypeDefinitionIndex = 25214;

	class CDDJMFNHFLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDJMFNHFLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN___C_CTOR_OFFSET))(this);
		}

		::CDDJMFNHFLN* __cctor_b__23_0()
		{
			return ((::CDDJMFNHFLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
