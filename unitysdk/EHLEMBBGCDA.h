#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGIPKMPPBAL;
class BOJOBHMEEIH;
class LCDEEKNHPBG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHLEMBBGCDA_BFLBPOAJAOJ_OFFSET UNITYSDK_OFFSET(0x154A2D30)
#define EHLEMBBGCDA_CTOR_OFFSET UNITYSDK_OFFSET(0x154A2C60)
#define EHLEMBBGCDA_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x154A3BA0)
#define EHLEMBBGCDA_IDPLONBBHAH_OFFSET UNITYSDK_OFFSET(0x154A3EC0)
#define EHLEMBBGCDA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x154A37B0)
#define EHLEMBBGCDA_PKKADDCLLGK_OFFSET UNITYSDK_OFFSET(0x154A2E40)

inline static constexpr unsigned int EHLEMBBGCDA_TypeDefinitionIndex = 79173;

	class EHLEMBBGCDA : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* HOJNACIFLKB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::LCDEEKNHPBG*>* EEMPAAFDLAP; // 0x18
		::System::Boolean EJDEKKEOHBE; // 0x20
		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::LCDEEKNHPBG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::LCDEEKNHPBG*>*))((::PBYTE)hIl2Cpp + EHLEMBBGCDA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean BFLBPOAJAOJ(::System::String* a1, ::LCDEEKNHPBG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LCDEEKNHPBG*))((::PBYTE)hIl2Cpp + EHLEMBBGCDA_BFLBPOAJAOJ_OFFSET))(this, a1, a2);
		}

		::System::Void PKKADDCLLGK(::BGIPKMPPBAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGIPKMPPBAL*))((::PBYTE)hIl2Cpp + EHLEMBBGCDA_PKKADDCLLGK_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::BOJOBHMEEIH* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOJOBHMEEIH*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + EHLEMBBGCDA_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Void HFKFNFKIEON(::BOJOBHMEEIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOJOBHMEEIH*))((::PBYTE)hIl2Cpp + EHLEMBBGCDA_HFKFNFKIEON_OFFSET))(this, a1);
		}

		::System::Void IDPLONBBHAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLEMBBGCDA_IDPLONBBHAH_OFFSET))(this);
		}

	};
