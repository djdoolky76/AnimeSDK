#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKIODIMJPNA;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FGDGPEABLMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1574BCB0)
#define FGDGPEABLMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1574BCE0)
#define FGDGPEABLMN___C___BUILDSLOTS_B__19_0_OFFSET UNITYSDK_OFFSET(0x1574BCF0)

inline static constexpr unsigned int FGDGPEABLMN___c_TypeDefinitionIndex = 60205;

	class FGDGPEABLMN___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::FKIODIMJPNA*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::FKIODIMJPNA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EFF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EFF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGDGPEABLMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDGPEABLMN___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __BuildSlots_b__19_0(::FKIODIMJPNA* a1, ::FKIODIMJPNA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::FKIODIMJPNA*, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + FGDGPEABLMN___C___BUILDSLOTS_B__19_0_OFFSET))(this, a1, a2);
		}

	};
