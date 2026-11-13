#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIKMDGNPFIF;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define OMCKLMNLANM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B08BF90)
#define OMCKLMNLANM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B08BFD0)
#define OMCKLMNLANM___C__UPDATEREMOVABLETASKS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B08BFE0)

inline static constexpr unsigned int OMCKLMNLANM___c_TypeDefinitionIndex = 38241;

	class OMCKLMNLANM___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::EIKMDGNPFIF*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::EIKMDGNPFIF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14B70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMCKLMNLANM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCKLMNLANM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateRemovableTasks_b__5_0(::EIKMDGNPFIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIKMDGNPFIF*))((::PBYTE)hIl2Cpp + OMCKLMNLANM___C__UPDATEREMOVABLETASKS_B__5_0_OFFSET))(this, a1);
		}

	};
