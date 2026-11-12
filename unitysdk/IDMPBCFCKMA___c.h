#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDMPBCFCKMA;
namespace System { class Object; }

#define IDMPBCFCKMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F94EE10)
#define IDMPBCFCKMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F94EE40)
#define IDMPBCFCKMA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F94EE50)

inline static constexpr unsigned int IDMPBCFCKMA___c_TypeDefinitionIndex = 35114;

	class IDMPBCFCKMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DDE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDMPBCFCKMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA___C_CTOR_OFFSET))(this);
		}

		::IDMPBCFCKMA* __cctor_b__28_0()
		{
			return ((::IDMPBCFCKMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMPBCFCKMA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
