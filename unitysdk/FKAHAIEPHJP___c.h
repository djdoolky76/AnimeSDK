#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBPJOJJIPPM;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define FKAHAIEPHJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x157D80B0)
#define FKAHAIEPHJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x157D80F0)
#define FKAHAIEPHJP___C__ADDSEQUENCE_B__1_0_OFFSET UNITYSDK_OFFSET(0x157D8100)
#define FKAHAIEPHJP___C__CLEARENDED_B__4_0_OFFSET UNITYSDK_OFFSET(0x157D8150)

inline static constexpr unsigned int FKAHAIEPHJP___c_TypeDefinitionIndex = 68932;

	class FKAHAIEPHJP___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::HBPJOJJIPPM*>** StaticGet___9__1_0()
		{
			return (::System::Predicate_1<::HBPJOJJIPPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65600);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65608);
		}

		static ::System::Predicate_1<::HBPJOJJIPPM*>** StaticGet___9__4_0()
		{
			return (::System::Predicate_1<::HBPJOJJIPPM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKAHAIEPHJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKAHAIEPHJP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddSequence_b__1_0(::HBPJOJJIPPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBPJOJJIPPM*))((::PBYTE)hIl2Cpp + FKAHAIEPHJP___C__ADDSEQUENCE_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _ClearEnded_b__4_0(::HBPJOJJIPPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBPJOJJIPPM*))((::PBYTE)hIl2Cpp + FKAHAIEPHJP___C__CLEARENDED_B__4_0_OFFSET))(this, a1);
		}

	};
