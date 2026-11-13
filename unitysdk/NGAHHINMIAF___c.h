#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCEOEHGPPE;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define NGAHHINMIAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18E839E0)
#define NGAHHINMIAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18E83A20)
#define NGAHHINMIAF___C__PROGRESSFINISH_B__18_0_OFFSET UNITYSDK_OFFSET(0x18E83A80)
#define NGAHHINMIAF___C__PROGRESSSTART_B__17_1_OFFSET UNITYSDK_OFFSET(0x18E83A30)

inline static constexpr unsigned int NGAHHINMIAF___c_TypeDefinitionIndex = 60904;

	class NGAHHINMIAF___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::HGCEOEHGPPE*>** StaticGet___9__17_1()
		{
			return (::System::Predicate_1<::HGCEOEHGPPE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36380);
		}

		static ::System::Predicate_1<::HGCEOEHGPPE*>** StaticGet___9__18_0()
		{
			return (::System::Predicate_1<::HGCEOEHGPPE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36388);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGAHHINMIAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAHHINMIAF___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _ProgressStart_b__17_1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + NGAHHINMIAF___C__PROGRESSSTART_B__17_1_OFFSET))(this, a1);
		}

		::System::Boolean _ProgressFinish_b__18_0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + NGAHHINMIAF___C__PROGRESSFINISH_B__18_0_OFFSET))(this, a1);
		}

	};
