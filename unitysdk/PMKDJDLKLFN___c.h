#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLKAJKKLGOL;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define PMKDJDLKLFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBBC4C0)
#define PMKDJDLKLFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBBC500)
#define PMKDJDLKLFN___C___DOSKILLACTION_B__6_0_OFFSET UNITYSDK_OFFSET(0x1DBBC510)

inline static constexpr unsigned int PMKDJDLKLFN___c_TypeDefinitionIndex = 43281;

	class PMKDJDLKLFN___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::PLKAJKKLGOL*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::PLKAJKKLGOL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMKDJDLKLFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKDJDLKLFN___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __DoSkillAction_b__6_0(::PLKAJKKLGOL* a1, ::PLKAJKKLGOL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PLKAJKKLGOL*, ::PLKAJKKLGOL*))((::PBYTE)hIl2Cpp + PMKDJDLKLFN___C___DOSKILLACTION_B__6_0_OFFSET))(this, a1, a2);
		}

	};
