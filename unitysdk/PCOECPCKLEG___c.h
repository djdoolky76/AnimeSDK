#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENDEAPMHAOI;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define PCOECPCKLEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7EC020)
#define PCOECPCKLEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EC060)
#define PCOECPCKLEG___C__REMOVEENDBUFFS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C7EC070)

	class PCOECPCKLEG___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::ENDEAPMHAOI*>** StaticGet___9__8_0()
		{
			return (::System::Predicate_1<::ENDEAPMHAOI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BBC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BBC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCOECPCKLEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOECPCKLEG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveEndBuffs_b__8_0(::ENDEAPMHAOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENDEAPMHAOI*))((::PBYTE)hIl2Cpp + PCOECPCKLEG___C__REMOVEENDBUFFS_B__8_0_OFFSET))(this, a1);
		}

	};
