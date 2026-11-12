#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLFHJLDBOEA;
namespace System { class Object; }

#define NLFHJLDBOEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F053170)
#define NLFHJLDBOEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0531B0)
#define NLFHJLDBOEA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F0531C0)

inline static constexpr unsigned int NLFHJLDBOEA___c_TypeDefinitionIndex = 31123;

	class NLFHJLDBOEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLFHJLDBOEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA___C_CTOR_OFFSET))(this);
		}

		::NLFHJLDBOEA* __cctor_b__38_0()
		{
			return ((::NLFHJLDBOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFHJLDBOEA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
