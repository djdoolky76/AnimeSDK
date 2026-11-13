#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EJNMEBKMOFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19AC80D0)
#define EJNMEBKMOFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19AC8100)
#define EJNMEBKMOFC___C___INITIALIZEWINDOWCONTROLLER_B__2_0_OFFSET UNITYSDK_OFFSET(0x19AC8110)

inline static constexpr unsigned int EJNMEBKMOFC___c_TypeDefinitionIndex = 79504;

	class EJNMEBKMOFC___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::HIOEAKHGILF*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::HIOEAKHGILF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A640);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJNMEBKMOFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNMEBKMOFC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitializeWindowController_b__2_0(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + EJNMEBKMOFC___C___INITIALIZEWINDOWCONTROLLER_B__2_0_OFFSET))(this, a1, a2);
		}

	};
