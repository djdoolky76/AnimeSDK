#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBODMEMLKJ;
namespace System { class Object; }

#define JLBODMEMLKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE708D0)
#define JLBODMEMLKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE70910)
#define JLBODMEMLKJ___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1FE70920)

inline static constexpr unsigned int JLBODMEMLKJ___c_TypeDefinitionIndex = 33484;

	class JLBODMEMLKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBODMEMLKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ___C_CTOR_OFFSET))(this);
		}

		::JLBODMEMLKJ* __cctor_b__37_0()
		{
			return ((::JLBODMEMLKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBODMEMLKJ___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
