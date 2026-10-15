#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPCILEAHKAH;
namespace System { class Object; }

#define OPCILEAHKAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB0D40)
#define OPCILEAHKAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB0D80)
#define OPCILEAHKAH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEB0D90)

inline static constexpr unsigned int OPCILEAHKAH___c_TypeDefinitionIndex = 30021;

	class OPCILEAHKAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPCILEAHKAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH___C_CTOR_OFFSET))(this);
		}

		::OPCILEAHKAH* __cctor_b__28_0()
		{
			return ((::OPCILEAHKAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCILEAHKAH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
