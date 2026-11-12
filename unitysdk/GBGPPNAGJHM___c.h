#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAPPKGLPNHA;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define GBGPPNAGJHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x168840D0)
#define GBGPPNAGJHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16884100)
#define GBGPPNAGJHM___C___RUNTEMPLATES_B__5_1_OFFSET UNITYSDK_OFFSET(0x16884110)

inline static constexpr unsigned int GBGPPNAGJHM___c_TypeDefinitionIndex = 56963;

	class GBGPPNAGJHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B140);
		}

		static ::System::Comparison_1<::OAPPKGLPNHA*>** StaticGet___9__5_1()
		{
			return (::System::Comparison_1<::OAPPKGLPNHA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B148);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBGPPNAGJHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGPPNAGJHM___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __RunTemplates_b__5_1(::OAPPKGLPNHA* a1, ::OAPPKGLPNHA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OAPPKGLPNHA*, ::OAPPKGLPNHA*))((::PBYTE)hIl2Cpp + GBGPPNAGJHM___C___RUNTEMPLATES_B__5_1_OFFSET))(this, a1, a2);
		}

	};
