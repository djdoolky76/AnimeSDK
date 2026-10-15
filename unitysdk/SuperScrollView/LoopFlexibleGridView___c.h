#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE99B750)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE99B790)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__SETGRIDITEMS_B__35_0_OFFSET UNITYSDK_OFFSET(0xE99B7A0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopFlexibleGridView___c_TypeDefinitionIndex = 47645;

	class LoopFlexibleGridView___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("SuperScrollView", "<>c")->GetStaticField(0x10BA0);
		}

		static ::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>**)UnitySDK::FromName("SuperScrollView", "<>c")->GetStaticField(0x10BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C_CTOR_OFFSET))(this);
		}

		::System::Void _SetGridItems_b__35_0(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__SETGRIDITEMS_B__35_0_OFFSET))(this, a1);
		}

	};
}
