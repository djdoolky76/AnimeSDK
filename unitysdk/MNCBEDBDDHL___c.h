#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNCBEDBDDHL;
namespace System { class Object; }

#define MNCBEDBDDHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC8FE0)
#define MNCBEDBDDHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC9010)
#define MNCBEDBDDHL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDC9020)

inline static constexpr unsigned int MNCBEDBDDHL___c_TypeDefinitionIndex = 25845;

	class MNCBEDBDDHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ED70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCBEDBDDHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL___C_CTOR_OFFSET))(this);
		}

		::MNCBEDBDDHL* __cctor_b__33_0()
		{
			return ((::MNCBEDBDDHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCBEDBDDHL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
