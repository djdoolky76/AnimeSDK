#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCAKMIABFMC_BCOBJKCGELD;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DCAKMIABFMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB998D0)
#define DCAKMIABFMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEB99910)
#define DCAKMIABFMC___C___FILLENTRYSTARTPOS_B__4_1_OFFSET UNITYSDK_OFFSET(0xEB99920)

inline static constexpr unsigned int DCAKMIABFMC___c_TypeDefinitionIndex = 76900;

	class DCAKMIABFMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50510);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCAKMIABFMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAKMIABFMC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __FillEntryStartPos_b__4_1(::DCAKMIABFMC_BCOBJKCGELD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCAKMIABFMC_BCOBJKCGELD*))((::PBYTE)hIl2Cpp + DCAKMIABFMC___C___FILLENTRYSTARTPOS_B__4_1_OFFSET))(this, a1);
		}

	};
