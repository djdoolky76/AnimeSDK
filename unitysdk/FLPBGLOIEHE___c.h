#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGPIKOCNNL;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FLPBGLOIEHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18973980)
#define FLPBGLOIEHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x189739B0)
#define FLPBGLOIEHE___C___SORTSUBPANELS_B__10_0_OFFSET UNITYSDK_OFFSET(0x189739C0)

inline static constexpr unsigned int FLPBGLOIEHE___c_TypeDefinitionIndex = 73776;

	class FLPBGLOIEHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x694C0);
		}

		static ::System::Comparison_1<::NCGPIKOCNNL*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::NCGPIKOCNNL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x694C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLPBGLOIEHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLPBGLOIEHE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortSubPanels_b__10_0(::NCGPIKOCNNL* a1, ::NCGPIKOCNNL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::NCGPIKOCNNL*, ::NCGPIKOCNNL*))((::PBYTE)hIl2Cpp + FLPBGLOIEHE___C___SORTSUBPANELS_B__10_0_OFFSET))(this, a1, a2);
		}

	};
