#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
class KNHCNPDALBB;
class PHCMIJEDENP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MLINDDMKFFA_FFKFLPMDHFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9AA490)
#define MLINDDMKFFA_FFKFLPMDHFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB9AA4D0)
#define MLINDDMKFFA_FFKFLPMDHFJ___C___CREATEPARTNERS_B__12_0_OFFSET UNITYSDK_OFFSET(0xB9AA4F0)
#define MLINDDMKFFA_FFKFLPMDHFJ___C___CREATEREQUIREMENTINFOS_B__11_1_OFFSET UNITYSDK_OFFSET(0xB9AA4E0)

inline static constexpr unsigned int MLINDDMKFFA_FFKFLPMDHFJ___c_TypeDefinitionIndex = 79639;

	class MLINDDMKFFA_FFKFLPMDHFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC530);
		}

		static ::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC538);
		}

		static ::System::Func_2<::PHCMIJEDENP*, ::KNHCNPDALBB*>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::PHCMIJEDENP*, ::KNHCNPDALBB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateRequirementInfos_b__11_1(::FKLECLLJCEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ___C___CREATEREQUIREMENTINFOS_B__11_1_OFFSET))(this, a1);
		}

		::KNHCNPDALBB* __CreatePartners_b__12_0(::PHCMIJEDENP* a1)
		{
			return ((::KNHCNPDALBB*(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + MLINDDMKFFA_FFKFLPMDHFJ___C___CREATEPARTNERS_B__12_0_OFFSET))(this, a1);
		}

	};
